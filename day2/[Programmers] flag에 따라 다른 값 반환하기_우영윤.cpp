/*
	Author: Yeongyun Woo
	Date: 2024-06-27
	Description:
		- flag에 따라 두 정수를 더하거나 빼는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181933
*/

int solution(int a, int b, bool flag)
{
	return flag ? a + b : a - b;
}