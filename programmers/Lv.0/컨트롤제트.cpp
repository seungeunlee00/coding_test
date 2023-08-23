/*
  문제 설명
  숫자와 "Z"가 공백으로 구분되어 담긴 문자열이 주어집니다. 문자열에 있는 숫자를 차례대로 더하려고 합니다. 
  이 때 "Z"가 나오면 바로 전에 더했던 숫자를 뺀다는 뜻입니다. 숫자와 "Z"로 이루어진 문자열 s가 주어질 때, 
  머쓱이가 구한 값을 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> sub;
    int temp=0;
    
    for(int i=0; i<s.size(); i++){ // 공백을 기준으로 substring 분리
        if(s[i]==' '){
            sub.push_back(s.substr(temp, i-temp));
            temp=i+1;
        }
    }
    sub.push_back(s.substr(temp, s.size()-temp));
    
    for(int j=0; j<sub.size(); j++){ // 연산
        if(sub[j]!="Z") answer+=stoi(sub[j]);
        else answer-=stoi(sub[j-1]);
    }
    return answer;
}
