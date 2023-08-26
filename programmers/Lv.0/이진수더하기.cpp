/*
  문제 설명
  이진수를 의미하는 두 개의 문자열 bin1과 bin2가 매개변수로 주어질 때, 두 이진수의 합을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int twoToten(int bin) {
    int result = 0, mul = 1;
    while(bin > 0) {
        if(bin % 2 == 1) result += mul;
        mul *= 2;
        bin /= 10;
    }
    return result;
}

string solution(string bin1, string bin2) {
    string answer = "";
    int sum = twoToten(stoi(bin1)) + twoToten(stoi(bin2));
    
    if(bin1 == "0" && bin2 == "0") return "0";
    
    while(sum != 0) {
        if(sum % 2 == 1) answer.push_back('1');
        else answer.push_back('0');
        sum /= 2;
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}
