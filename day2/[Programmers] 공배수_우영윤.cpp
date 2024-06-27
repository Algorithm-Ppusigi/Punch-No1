/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 공배수 여부를 판별하는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181936
*/

int solution(int number, int n, int m)
{
	return !(number % n) && !(number % m);
}