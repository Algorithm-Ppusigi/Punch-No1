/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
                - 주어진 조건에 따라 원소들의 곱과 합을 비교하는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181929
*/

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
  long long sum = 0, mul = 1;
  for (auto &i : num_list) {
    sum += i;
    mul *= i;
  }
  return mul < sum * sum;
}