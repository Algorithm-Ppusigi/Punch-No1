/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 두 수 값 비교하여 가장 큰 수 반환
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181938
*/

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b)
{
	return max(stoi(to_string(a) + to_string(b)), 2 * a * b);
}