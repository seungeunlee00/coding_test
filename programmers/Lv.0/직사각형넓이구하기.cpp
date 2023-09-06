/*
문제 설명
2차원 좌표 평면에 변이 축과 평행한 직사각형이 있습니다. 
직사각형 네 꼭짓점의 좌표 [[x1, y1], [x2, y2], [x3, y3], [x4, y4]]가 담겨있는 배열 dots가 매개변수로 주어질 때, 
직사각형의 넓이를 return 하도록 solution 함수를 완성해보세요.
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int tmp = 0;
    if(dots[0][0]!=dots[1][0]) answer=dots[0][0]-dots[1][0];
    if(dots[1][0]!=dots[2][0]) answer=dots[2][0]-dots[1][0]; 
    if(dots[0][1]!=dots[1][1]) tmp=dots[0][1]-dots[1][1];
    if(dots[1][1]!=dots[2][1]) tmp=dots[2][1]-dots[1][1];
    answer*=tmp;
    if(answer<0) answer*=-1;
    return answer;
}
