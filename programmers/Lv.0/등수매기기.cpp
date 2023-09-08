/*
문제 설명
영어 점수와 수학 점수의 평균 점수를 기준으로 학생들의 등수를 매기려고 합니다. 
영어 점수와 수학 점수를 담은 2차원 정수 배열 score가 주어질 때, 영어 점수와 수학 점수의 평균을 기준으로 매긴 등수를 담은 배열을 return하도록 solution 함수를 완성해주세요.
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<float> avg;
    for(int i=0; i<score.size(); i++){
        avg.push_back((score[i][0]+score[i][1])/2.0f);
        answer.push_back(1);
    }
    for(int a=0; a<avg.size(); a++){
        for(int b=0; b<avg.size(); b++){
            if(avg[a]<avg[b]) answer[a]++;
        }
    } 
    return answer;
}
