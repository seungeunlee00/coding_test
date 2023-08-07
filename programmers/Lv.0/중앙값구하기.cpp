/*
  문제 설명
  중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다. 
  예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다. 정수 배열 array가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.

  #include <algorithm>
  sort(array.begin(), array.end()); -> 정렬 함수 알아두기
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer=0;
    
    for(int i=0; i<array.size()-1; i++){ // 선택정렬
        int min = i;
        for(int j=i+1; j<array.size(); j++){
            if(array[min]>array[j]){
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    
    answer=array.size()/2;
    return array[answer];
}
