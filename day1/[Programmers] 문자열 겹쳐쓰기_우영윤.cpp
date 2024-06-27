/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 문자열과 숫자를 입력받아 특정 위치부터 덮어쓰기하는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181943
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
	for (int i = 0; i < overwrite_string.size(); i++)
	{
		my_string[i + s] = overwrite_string[i];
	}
	return my_string;
}