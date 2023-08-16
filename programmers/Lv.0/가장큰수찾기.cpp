/*
  문제 설명
  정수 배열 array가 매개변수로 주어질 때, 가장 큰 수와 그 수의 인덱스를 담은 배열을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<int> temp;
    for(int i=0; i<array.size(); i++){ // array 복사
        temp.push_back(array[i]);
    }
    sort(array.begin(), array.end()); // 정렬 
    answer.push_back(array[array.size()-1]); // 가장 큰 수
    for(int j=0; j<temp.size(); j++){ // 가장 큰 수의 인덱스
        if(temp[j]==array[array.size()-1]) 
            answer.push_back(j);
    }
    return answer;
}
