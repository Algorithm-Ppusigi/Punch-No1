/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
            - 주어진 조건에 따라 체력을 계산하는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/250137
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
  int status = health;
  for (int i = 0; i < attacks.size(); i++) {
    int duration = (i ? attacks[i][0] - attacks[i - 1][0] : attacks[0][0]) - 1;
    status = min(health, status +
                             (bandage[0] * bandage[1] + bandage[2]) *
                                 (duration / bandage[0]) +
                             (bandage[1] * (duration % bandage[0]))) -
             attacks[i][1];
    if (status < 1)
      return -1;
  }
  return status;
}