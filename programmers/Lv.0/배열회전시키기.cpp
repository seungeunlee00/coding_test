/*
  문제 설명
  정수가 담긴 배열 numbers와 문자열 direction가 매개변수로 주어집니다. 
  배열 numbers의 원소를 direction방향으로 한 칸씩 회전시킨 배열을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if(direction=="right"){
        answer.push_back(numbers[numbers.size()-1]);
        for(int i=0; i<numbers.size()-1; i++) 
            answer.push_back(numbers[i]);
    } 
    else if (direction=="left"){
        for(int i=1; i<numbers.size(); i++) 
            answer.push_back(numbers[i]);
        answer.push_back(numbers[0]);
    }
    return answer;
}
