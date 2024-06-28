/*
        Author: Yeongyun Woo
        Date: 2024-06-28
        Description:
            - 주어진 조건에 따라 수열의 원소를 바꾸는 문제
        Link: https://school.programmers.co.kr/learn/courses/30/lessons/181924
*/

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
  for (auto &q : queries)
    swap(arr[q[0]], arr[q[1]]);
  return arr;
}