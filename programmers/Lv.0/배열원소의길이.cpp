/*
  문제 설명
  문자열 배열 strlist가 매개변수로 주어집니다. 
  strlist 각 원소의 길이를 담은 배열을 retrun하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    for(int i=0; i<strlist.size(); i++){
        answer.push_back(strlist[i].length());
    }
    return answer;
}
