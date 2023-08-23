/*
  문제 설명
  머쓱이는 친구에게 모스부호를 이용한 편지를 받았습니다. 그냥은 읽을 수 없어 이를 해독하는 프로그램을 만들려고 합니다. 
  문자열 letter가 매개변수로 주어질 때, letter를 영어 소문자로 바꾼 문자열을 return 하도록 solution 함수를 완성해보세요.

  1. string1.substr(a, b) 
    string1 문자열의 a번째 인덱스 문자부터 b개 추출
  2. string1.compare(string2)
    string1과 string2 문자열 비교, 같으면 0
*/

#include <string>
#include <vector>

using namespace std;
vector <string> morse = { 
    ".-", "-...", "-.-.", "-..", ".", "..-.",
    "--.","....","..",".---","-.-",".-..",
    "--","-.","---",".--.","--.-",".-.",
    "...","-","..-","...-",".--","-..-",
    "-.--","--.."
    };

string solution(string letter) {
    string answer = "";
    vector<string> sub;
    int temp=0;
    
    for(int i=0; i<letter.size(); i++){ // letter의 모스부호 substring 분리
        if(letter[i]==' '){
            sub.push_back(letter.substr(temp, i-temp));
            temp=i+1;
        }
    }
    sub.push_back(letter.substr(temp, letter.size()-temp));

    for(int a=0; a<sub.size(); a++){ // substring과 morse 비교
        for(int b=0; b<morse.size(); b++){
            if(sub[a].compare(morse[b])==0)
                answer.push_back('a'+b);
        }
    }

    return answer;
}  
