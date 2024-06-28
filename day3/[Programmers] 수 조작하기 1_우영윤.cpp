/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
            - 주어진 조건에 따라 수 조작하기
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181926
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
  for (auto &i : control)
    if (i == 'w')
      n++;
    else if (i == 's')
      n--;
    else if (i == 'd')
      n += 10;
    else if (i == 'a')
      n -= 10;
  return n;
}