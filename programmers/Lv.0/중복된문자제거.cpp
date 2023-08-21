/*
  문제 설명
  문자열 my_string이 매개변수로 주어집니다. my_string에서 중복된 문자를 제거하고 하나의 문자만 남긴 문자열을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i < my_string.size(); i++){
        if(my_string.find(my_string[i]) == i) // 처음 찾은 문자의 index = i일때
            answer.push_back(my_string[i]);
    }
    return answer;
}
