/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
                - 주어진 조건에 따라 문자열을 처리하는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181932
*/

#include <string>
#include <vector>

using namespace std;

string solution(string code) {
  string answer = "";
  bool mode = false;
  for (int i = 0; i < code.size(); i++) {
    if (code[i] == '1')
      mode = !mode;
    else if (mode && i & 1 || !(mode || i & 1))
      answer += code[i];
  }
  return answer.size() ? answer : "EMPTY";
}