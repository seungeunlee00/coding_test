/*
  문제 설명
  영어가 싫은 머쓱이는 영어로 표기되어있는 숫자를 수로 바꾸려고 합니다. 
  문자열 numbers가 매개변수로 주어질 때, numbers를 정수로 바꿔 return 하도록 solution 함수를 완성해 주세요.

  1. str.replace(바꿀 문자열 시작 위치, 치환할 길이, 치환할 문자열)
*/

#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> num = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    for (int i=0; i<num.size(); i++){
        while (numbers.find(num[i]) != string::npos){ // 없을 때까지 반복
            int index=numbers.find(num[i]);
            numbers.replace(index, num[i].size(), to_string(i));
        }
    }
    answer = stoll(numbers); // string to long long
    return answer;
}
