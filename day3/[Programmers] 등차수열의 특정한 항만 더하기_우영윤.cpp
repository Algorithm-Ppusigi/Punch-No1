/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
                - 주어진 조건에 따라 수열의 합을 구하는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181931
*/

#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
  int answer = 0;
  for (int i = 0; i < included.size(); i++)
    answer += included[i] * (a + i * d);
  return answer;
}