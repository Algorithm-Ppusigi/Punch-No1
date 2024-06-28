/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
                - 주어진 조건에 따라 이어 붙인 수를 구하는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181928
*/

#include <stack>
#include <string>
#include <vector>

using namespace std;

int power(int base, int exp) {
  if (exp == 0)
    return 1;
  else {
    int res = power(base, exp / 2);
    return res * res * ((exp & 1) ? base : 1);
  }
}

int solution(vector<int> num_list) {
  int odd_sum = 0, even_sum = 0, odd_digit = 0, even_digit = 0;
  stack<int> odd, even;

  for (auto &i : num_list)
    i & 1 ? odd.push(i) : even.push(i);

  while (!odd.empty()) {
    odd_sum += odd.top() * power(10, odd_digit++);
    odd.pop();
  }
  while (!even.empty()) {
    even_sum += even.top() * power(10, even_digit++);
    even.pop();
  }
  return odd_sum + even_sum;
}