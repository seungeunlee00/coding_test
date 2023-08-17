/*
  문제 설명
  문자열 my_string이 매개변수로 주어질 때, 대문자는 소문자로 소문자는 대문자로 변환한 문자열을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>='A' && my_string[i]<='Z') // 대 -> 소
            answer.push_back(my_string[i]+32);
        if(my_string[i]>='a' && my_string[i]<='z') // 소 -> 대
            answer.push_back(my_string[i]-32);
    }
    return answer;
}
