/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 대소문자 변환 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181949
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	for (auto &i : str)
	{
		if (i >= 'a' && i <= 'z')
			cout << (char)(i - 32);
		else
			cout << (char)(i + 32);
	}
}