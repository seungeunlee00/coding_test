/*
  문제 설명
  정수 n이 매개변수로 주어질 때 n의 각 자리 숫자의 합을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n){
    int answer = 0;
    while(n>0){
        answer += n%10;
        n /= 10;
    }
    return answer;
}

/*
int solution(int n) {
    int answer = 0;
    int m=0; // n의 자릿수
    for(int i=10; i<=1000000; i=i*10){ // 자릿수 구하기
        if(n%i==n) break;
        else m=i*10;
    }
    for(int i=10; i<=m; i=i*10){
        answer = answer + (n%i)/(i/10);
    }
    //ex1. n%10 + ((n%100)/10) + ((n%1000)/100) + ((n%10000)/1000);
    return answer;
}
*/
