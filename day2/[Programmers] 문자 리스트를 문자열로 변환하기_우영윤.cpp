/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 여러 문자열을 합치는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181941
*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr)
{
	string answer = "";
	for (auto &i : arr)
		answer += i;
	return answer;
}