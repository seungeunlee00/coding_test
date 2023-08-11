/* 
  문제 설명
  문자열 my_string이 매개변수로 주어집니다.
  my_string을 거꾸로 뒤집은 문자열을 return하도록 solution 함수를 완성해주세요.

  1. 문자열 뒤집기
  #include <algorithm>
  reverse(my_string.begin(),my_string.end());

  2. 문자열 추가 (모두 같은 기능!)
  answer += my_string[i];
  answer.append(1, my_string[i]); 
  answer.push_back(my_string[i]);
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = my_string.size()-1; i >= 0; i--){
        answer += my_string[i];
    }
    return answer;
}
