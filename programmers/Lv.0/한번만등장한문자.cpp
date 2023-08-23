/*
  문제 설명
  문자열 s가 매개변수로 주어집니다. 
  s에서 한 번만 등장하는 문자를 사전 순으로 정렬한 문자열을 return 하도록 solution 함수를 완성해보세요. 
  한 번만 등장하는 문자가 없을 경우 빈 문자열을 return 합니다.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        if(s[i-1]!=s[i] && s[i+1]!=s[i]) answer+=s[i];
    }
    return answer;
}
