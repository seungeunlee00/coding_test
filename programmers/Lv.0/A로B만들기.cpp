/*
  문제 설명
  문자열 before와 after가 매개변수로 주어질 때, 
  before의 순서를 바꾸어 after를 만들 수 있으면 1을, 만들 수 없으면 0을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
    int answer = 1;
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    for(int i=0; i<before.size(); i++){
        if(before[i]!=after[i]) answer=0;
    }
    return answer;
}
