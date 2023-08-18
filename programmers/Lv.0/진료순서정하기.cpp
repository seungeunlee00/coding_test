/*
  문제 설명
  외과의사 머쓱이는 응급실에 온 환자의 응급도를 기준으로 진료 순서를 정하려고 합니다. 
  정수 배열 emergency가 매개변수로 주어질 때 응급도가 높은 순서대로 진료 순서를 정한 배열을 return하도록 solution 함수를 완성해주세요.

  1. 대입 연산자(=)를 이용한 벡터의 깊은 복사
  2. max_element 
    #include <algorithm>
    int max = *max_element(v.begin(), v.end()); // 최댓값
    int max_index = max_element(v.begin(), v.end()) - v.begin(); // 최댓값의 index
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer=emergency; 
    
    for(int i=0; i<emergency.size(); i++){
        int max = *max_element(emergency.begin(), emergency.end());
        int max_index = max_element(emergency.begin(), emergency.end()) - emergency.begin();
        answer[max_index]=i+1;
        emergency[max_index]=0;
    }

    return answer;
}
