/*
  문제 설명
  my_string은 "3 + 5"처럼 문자열로 된 수식입니다. 문자열 my_string이 매개변수로 주어질 때, 수식을 계산한 값을 return 하는 solution 함수를 완성해주세요.

  1. stringstream
  #include <sstream>
  주어진 문자열에서 필요한 자료형에 맞는 정보를 꺼낼 때 사용
  공백과 '\n'을 제외하고 문자열에서 맞는 자료형의 정보를 빼낸다.
*/

#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    ss >> answer; // 첫번째 숫자 answer에 저장

    char ch;
    int tmp=0;
    while(ss){
        if(ch == '+') answer += tmp;
        else if(ch == '-') answer -= tmp;
        ss >> ch >> tmp; // 문자(+-), 숫자 반복
    }
    return answer;
}
