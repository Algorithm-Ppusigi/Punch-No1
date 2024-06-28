/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
                - 주어진 조건에 따라 마지막 두 원소를 비교하여 새로운 원소를
   추가하는 문제 Link:
   https://school.programmers.co.kr/learn/courses/30/lessons/181927
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
  int last = num_list.size();
  int a = num_list[last - 1], b = num_list[last - 2];
  num_list.push_back(a > b ? a - b : a * 2);
  return num_list;
}