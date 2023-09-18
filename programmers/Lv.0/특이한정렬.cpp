/*
문제 설명
정수 n을 기준으로 n과 가까운 수부터 정렬하려고 합니다. 이때 n으로부터의 거리가 같다면 더 큰 수를 앞에 오도록 배치합니다. 
정수가 담긴 배열 numlist와 정수 n이 주어질 때 numlist의 원소를 n으로부터 가까운 순서대로 정렬한 배열을 return하도록 solution 함수를 완성해주세요.

1. 내림차순 정렬 -> 3번째 파라미터로 greater<>()
  sort(v.begin(), v.end(), greater<>());

2. 벡터의 최소값, 최소값 인덱스
  int min=*min_element(v.begin(), v.end());
  int min_index=min_element(v.begin(), v.end()) - v.begin();
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<int> tmp;
    sort(numlist.begin(), numlist.end(), greater<>());
    for(int i=0; i<numlist.size(); i++){
        if(numlist[i]>n) tmp.push_back(numlist[i]-n);
        else tmp.push_back(n-numlist[i]);
    }
    for(int i=0; i<tmp.size(); i++){
        int min=*min_element(tmp.begin(), tmp.end());
        int minindex=min_element(tmp.begin(), tmp.end()) - tmp.begin();
        answer.push_back(numlist[minindex]);
        tmp[minindex]=10001;
    }
    return answer;
}
