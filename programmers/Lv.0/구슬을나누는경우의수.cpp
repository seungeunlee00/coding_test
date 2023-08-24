/*
  문제 설명
  머쓱이는 구슬을 친구들에게 나누어주려고 합니다. 구슬은 모두 다르게 생겼습니다. 
  머쓱이가 갖고 있는 구슬의 개수 balls와 친구들에게 나누어 줄 구슬 개수 share이 매개변수로 주어질 때, 
  balls개의 구슬 중 share개의 구슬을 고르는 가능한 모든 경우의 수를 return 하는 solution 함수를 완성해주세요.

  1. 조합(combination) 구현
    nCr = n-1Cr-1 + n-1Cr // 재귀 함수 사용
*/

#include <string>
#include <vector>

using namespace std;

int combination(int n, int r){ 
    if(n == r || r == 0) 
        return 1; 
    else 
        return combination(n - 1, r - 1) + combination(n - 1, r); 
}

int solution(int balls, int share) {
    int answer = 0;
    answer = combination(balls, share);
    return answer;
}
