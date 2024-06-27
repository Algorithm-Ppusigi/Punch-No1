/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 문자열 사이 줄바꿈 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181945
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin >> str;
	for (auto &i : str)
		cout << i << '\n';
}