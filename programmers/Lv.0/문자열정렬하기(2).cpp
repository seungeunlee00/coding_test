/*
  문제 설명
  영어 대소문자로 이루어진 문자열 my_string이 매개변수로 주어질 때, 
  my_string을 모두 소문자로 바꾸고 알파벳 순서대로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요.

  1. 대문자 소문자 변환
    my_string[i]=tolower(my_string[i]); // 대->소
    my_string[i]=toupper(my_string[i]); // 소->
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>='A' && my_string[i]<='Z')
            answer.push_back(my_string[i]+32);
        else answer.push_back(my_string[i]);
    }  
    sort(answer.begin(), answer.end());
    return answer;
}
