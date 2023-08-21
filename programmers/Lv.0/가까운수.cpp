/*
  문제 설명
  정수 배열 array와 정수 n이 매개변수로 주어질 때, array에 들어있는 정수 중 n과 가장 가까운 수를 return 하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    sort(array.begin(), array.end()); // 가장 가까운 수가 여러 개일 경우 더 작은 수를 return
    vector<int> temp=array;
    for(int i=0; i<array.size(); i++){
        if(array[i]<n) temp[i]=n-array[i];
        else temp[i]=array[i]-n;
    }
    answer=array[min_element(temp.begin(),temp.end())-temp.begin()];
    return answer;
}
