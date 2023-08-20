/*
  문제 설명
  문자열 my_string이 매개변수로 주어질 때, my_string 안에 있는 숫자만 골라 오름차순 정렬한 리스트를 return 하도록 solution 함수를 작성해보세요.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>='0' && my_string[i]<='9'){
            answer.push_back(my_string[i]-48);
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
