/*
  문제 설명
  약수의 개수가 세 개 이상인 수를 합성수라고 합니다. 
  자연수 n이 매개변수로 주어질 때 n이하의 합성수의 개수를 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=4; i<=n; i++){ // 1,2,3 제외 4부터 합성수 가능
        for(int j=2; j<i; j++){ // 1과 자신 외의 약수를 
            if(i%j==0) {
                answer++;  
                break; // 1개라도 찾으면 넘어가기
            } 
        }
    }
    return answer;
}
