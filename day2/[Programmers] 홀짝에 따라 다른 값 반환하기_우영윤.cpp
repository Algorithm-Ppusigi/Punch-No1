/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 홀수에 대해서는 그대로, 짝수에 대해서는 제곱을 더하는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181935
*/

int solution(int n)
{
	int ans = 0;
	for (int i = n & 1; i <= n; i += 2)
		ans += n & 1 ? i : i * i;
	return ans;
}