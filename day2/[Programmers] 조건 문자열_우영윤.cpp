/*
	Author: Yeongyun Woo
	Date: 2024-06-27
	Description:
		- 조건문자열과 비교문자열, 두 정수를 입력받아 조건을 만족하는지 판별하는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181934
*/

#include <string>
using namespace std;

int solution(string ineq, string eq, int n, int m)
{
	if (ineq == ">")
	{
		return eq == "=" ? n >= m : n > m;
	}
	else
	{
		return eq == "=" ? n <= m : n < m;
	}
}