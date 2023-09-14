/*
문제 설명
3x 마을 사람들은 3을 저주의 숫자라고 생각하기 때문에 3의 배수와 숫자 3을 사용하지 않습니다. 3x 마을 사람들의 숫자는 다음과 같습니다.
10진법	3x 마을에서 쓰는 숫자	10진법	3x 마을에서 쓰는 숫자
1	      1	                    6	      8
2	      2	                   	7	      10
3	      4	                    8	      11
4	      5	                    9	      14
5	      7	                    10	      16
정수 n이 매개변수로 주어질 때, n을 3x 마을에서 사용하는 숫자로 바꿔 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    vector<int> no3; 
    for(int i=0; i<200; i++){
        if(i%3!=0) { // 3의 배수가 아니고
            if(i<10) no3.push_back(i); // 3이 안들어가면
            else if (i>=10 && i<100) {
                if(i/10!=3 && i%10!=3) no3.push_back(i);
            }
            else if (i>=100) {
                if(i/100!=3 && (i-100)/10!=3 && i%10!=3) no3.push_back(i);
            }
        }
    }
    return no3[n-1];
}
