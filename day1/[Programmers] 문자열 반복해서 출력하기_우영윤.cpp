/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 문자열과 숫자를 입력받아 반복하여 출력하는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181950
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int n;
	cin >> str >> n;
	while (n--)
		cout << str;
}