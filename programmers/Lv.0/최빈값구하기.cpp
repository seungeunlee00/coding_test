/*
문제 설명
최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다. 
정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록 solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) { // [1,2,3,3,3,4]
    int answer = 0;
    vector<int> cnt; 
    cnt.push_back(0);
    for(int i=1; i<array.size(); i++){ // [0,0,0,1,2,0]
        for(int j=0; j<i; j++)
            if(array[i]==array[j]) answer++;
        cnt.push_back(answer);
        answer=0;
    }
    vector<int> sorted = cnt;
    sort(sorted.begin(), sorted.end()); 
    if(array.size()==1) answer=array[0]; // array 1개 
    else if(sorted[sorted.size()-1] == sorted[sorted.size()-2]) answer=-1; // 최빈값 여러개
    else { // 최빈값 1개
        for(int i=0; i<cnt.size(); i++)
            if(sorted[sorted.size()-1] == cnt[i]) answer=array[i];
    }
    return answer;
}
