/*
문제 설명
연속된 세 개의 정수를 더해 12가 되는 경우는 3, 4, 5입니다. 두 정수 num과 total이 주어집니다. 
연속된 수 num개를 더한 값이 total이 될 때, 정수 배열을 오름차순으로 담아 return하도록 solution함수를 완성해보세요.
*/

#include <string>
#include <vector>
using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer; 
    int result=0;
    for(int i=-50; i<total; i++){
        result=0;
        for(int j=0; j<num; j++) result+=(i+j);
        if(result==total) {
            result=i;
            break;
        }
    }
    if(num==1) answer.push_back(total);
    else
        for(int i=0; i<num; i++) answer.push_back(result+i);
    return answer;
}
