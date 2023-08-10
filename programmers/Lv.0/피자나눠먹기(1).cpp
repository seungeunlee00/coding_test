/*
  문제 설명
  머쓱이네 피자가게는 피자를 일곱 조각으로 잘라 줍니다. 
  피자를 나눠먹을 사람의 수 n이 주어질 때, 모든 사람이 피자를 한 조각 이상 먹기 위해 필요한 피자의 수를 return 하는 solution 함수를 완성해보세요.

  1~7명 -> 1 / 8~14명 -> 2 / 15~21 -> 3 
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=100; i++){
        if(n<=i*7){
            answer=i;
            break;
        }
    }
    return answer;
}
