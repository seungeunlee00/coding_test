/*
  문제 설명
  문자열 my_string이 매개변수로 주어집니다. my_string은 소문자, 대문자, 자연수로만 구성되어있습니다. 
  my_string안의 자연수들의 합을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i]>='0' && my_string[i]<='9'){ // 숫자인 경우
            temp += my_string[i];
        }
        else { // 알파벳인 경우
            if(temp.size() != 0){ // temp에 숫자 있는 경우
                answer += stoi(temp);
                temp = ""; // temp 초기화
            }
        }
    }
    if(temp.size() != 0){ // 마지막이 숫자로 끝날 경우
        answer += stoi(temp);
    }
    return answer;
}
