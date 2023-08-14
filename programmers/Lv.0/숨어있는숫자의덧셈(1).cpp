/*
  문제 설명
  문자열 my_string이 매개변수로 주어집니다. 
  my_string안의 모든 자연수들의 합을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>=48 && my_string[i]<=57){ // ACSII code 48~57: 0~9
            answer+=(my_string[i]-48);
        }
    }
    return answer;
}
