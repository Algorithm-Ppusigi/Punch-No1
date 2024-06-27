/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 두 수를 합쳐서 가장 큰 수를 만드는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181939
*/

#include <string>
#include <vector>

using namespace std;

int solution(int a, int b)
{
	return max(stoi(to_string(a) + to_string(b)), stoi(to_string(b) + to_string(a)));
}