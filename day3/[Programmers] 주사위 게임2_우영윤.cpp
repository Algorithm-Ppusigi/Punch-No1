/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
                - 주어진 조건에 따라 주사위의 합을 구하는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181930
*/

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
  int con1 = a + b + c;
  int con2 = con1 * (a * a + b * b + c * c);
  int con3 = con2 * (a * a * a + b * b * b + c * c * c);
  if (a == b && a == c && b && c)
    return con3;
  else if (a != b && a != c && b != c)
    return con1;
  else
    return con2;
}