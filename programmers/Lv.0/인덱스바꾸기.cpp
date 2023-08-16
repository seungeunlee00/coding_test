/*
  문제 설명
  문자열 my_string과 정수 num1, num2가 매개변수로 주어질 때, 
  my_string에서 인덱스 num1과 인덱스 num2에 해당하는 문자를 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    for(int i=0; i<my_string.size(); i++){
        if(i!=num1 && i!=num2) answer.push_back(my_string[i]);
        else if(i==num1) answer.push_back(my_string[num2]);
        else if(i==num2) answer.push_back(my_string[num1]);
    }
    return answer;
}
