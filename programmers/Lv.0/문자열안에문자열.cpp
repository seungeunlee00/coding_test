/*  
  문제 설명
  문자열 str1, str2가 매개변수로 주어집니다. 
  str1 안에 str2가 있다면 1을 없다면 2를 return하도록 solution 함수를 완성해주세요.

  1. find
  str.find("찾는 문자") 
  str에서 찾는 문자가 없는 경우 string::npos 리턴
*/

#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    if(str1.find(str2) != string::npos)
         answer = 1;
    else
        answer = 2;
    return answer;
}
