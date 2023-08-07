/*
  문제 설명
  첫 번째 분수의 분자와 분모를 뜻하는 numer1, denom1, 두 번째 분수의 분자와 분모를 뜻하는 numer2, denom2가 매개변수로 주어집니다. 
  두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를 순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer = (denom1 * numer2) + (denom2 * numer1); // numer:분자
    int denom = denom1 * denom2; // denom:분모
    
    for(int i=2; i<min(denom, numer); i++){ // 최대공약수 구하기
        if(denom%i==0 && numer%i==0){
            denom=denom/i;
            numer=numer/i;
        }
    }
    
    answer.push_back(numer);
    answer.push_back(denom);

    return answer;
}
