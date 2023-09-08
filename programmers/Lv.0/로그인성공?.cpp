/*
문제 설명
머쓱이는 프로그래머스에 로그인하려고 합니다. 머쓱이가 입력한 아이디와 패스워드가 담긴 배열 id_pw와 회원들의 정보가 담긴 2차원 배열 db가 주어질 때, 
다음과 같이 로그인 성공, 실패에 따른 메시지를 return하도록 solution 함수를 완성해주세요.
아이디와 비밀번호가 모두 일치하는 회원정보가 있으면 "login"을 return합니다.
로그인이 실패했을 때 아이디가 일치하는 회원이 없다면 “fail”를, 아이디는 일치하지만 비밀번호가 일치하는 회원이 없다면 “wrong pw”를 return 합니다.
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    for(int i=0; i<db.size(); i++){
        if(db[i][0]==id_pw[0]){ // id 일치
            if(db[i][1]==id_pw[1]) // pwd 일치
                answer+="login"; 
            else answer+="wrong pw"; // pwd 불일치
        } else answer+="fail"; // id 불일치
    }
    if(answer.find("login")!=string::npos) answer="login";
    else if(answer.find("wrong pw")!=string::npos) answer="wrong pw";
    else answer="fail";
    
    return answer;
}
