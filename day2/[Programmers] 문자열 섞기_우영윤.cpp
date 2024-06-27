/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 두 문자열을 번갈아 출력하는 문제
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181942
*/

#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2)
{
	string answer = "";
	for (int i = 0; i < str1.size(); i++)
	{
		answer += str1[i];
		answer += str2[i];
	}
	return answer;
}