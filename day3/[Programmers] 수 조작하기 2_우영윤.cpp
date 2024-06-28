/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
            - 인접한 두 수의 차이에 따라 문자열을 만드는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181925
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
  string answer = "";
  int t;
  for (int i = 1; i < numLog.size(); i++) {
    t = numLog[i] - numLog[i - 1];
    if (t == 1)
      answer += 'w';
    else if (t == -1)
      answer += 's';
    else if (t == 10)
      answer += 'd';
    else if (t == -10)
      answer += 'a';
  }
  return answer;
}