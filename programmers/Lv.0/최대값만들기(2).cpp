/*
  문제 설명
  정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0; 
    int a = 0;
    int b = 0;
    
    sort(numbers.begin(),numbers.end()); // -5 -3 1 2 4
    a = numbers[0]*numbers[1]; // -5*-3=15
    b = numbers[numbers.size()-1] * numbers[numbers.size()-2]; // 2*4=8 

    if(a>b) answer=a;
    else answer=b;
    
    return answer;
}
