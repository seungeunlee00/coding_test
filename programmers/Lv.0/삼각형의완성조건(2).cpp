/*
문제 설명
선분 세 개로 삼각형을 만들기 위해서는 다음과 같은 조건을 만족해야 합니다.가장 긴 변의 길이는 다른 두 변의 길이의 합보다 작아야 합니다.
삼각형의 두 변의 길이가 담긴 배열 sides이 매개변수로 주어집니다. 나머지 한 변이 될 수 있는 정수의 개수를 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    for(int i=1; i<=max(sides[0], sides[1]); i++){ // 가장 긴 변이 sides 중 큰 값인 경우
        if(min(sides[0], sides[1])+i > max(sides[0], sides[1])) 
           answer++;
    }
    for(int j=max(sides[0], sides[1])+1; j<sides[0]+sides[1]; j++){ // 나머지 한 변이 가장 긴 변인 경우
        if(sides[0]+sides[1]>j)
            answer++;
    }
    return answer;
}
