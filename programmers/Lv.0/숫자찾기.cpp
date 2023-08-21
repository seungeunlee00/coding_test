/*
  문제 설명
  정수 num과 k가 매개변수로 주어질 때, num을 이루는 숫자 중에 k가 있으면 num의 그 숫자가 있는 자리 수를 return하고 없으면 -1을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    vector <int> n;
    while(num>0){
        n.push_back(num%10);
        num/=10;
    }
    for(int i=n.size()-1; i>=0; i--){
        if(n[i]==k) {
            answer=n.size()-i;
            break;
        }
        else answer=-1;
    }
    return answer;
}
