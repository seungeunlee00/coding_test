/*
문제 설명
한 개 이상의 항의 합으로 이루어진 식을 다항식이라고 합니다. 다항식을 계산할 때는 동류항끼리 계산해 정리합니다. 
덧셈으로 이루어진 다항식 polynomial이 매개변수로 주어질 때, 동류항끼리 더한 결괏값을 문자열로 return 하도록 solution 함수를 완성해보세요. 
같은 식이라면 가장 짧은 수식을 return 합니다.
*/

#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    int x=0, num=0;
    string temp;
    while(ss>>temp){
        if(temp!="+"){
            if(temp.find("x")!=string::npos){ // 일차항
                if(temp=="x") x+=1;
                else x+=stoi(temp.substr(0, temp.size()-1));
            } else num+=stoi(temp); // 상수항
        }   
    }
    // result
    if(x==0) return to_string(num);
    if(x==1) answer+="x";
    if(x>1) answer+=to_string(x)+"x";
    if(num>0) answer+=" + "+to_string(num);
    return answer;
}
