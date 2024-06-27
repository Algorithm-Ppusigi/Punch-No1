/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 2의 배수 판별 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181944
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n << " is " << (n % 2 ? "odd" : "even");
}