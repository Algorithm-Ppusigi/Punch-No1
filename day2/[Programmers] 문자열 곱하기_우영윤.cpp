/*
	Author: Yeongyun Woo
	Date: 2024-06-26
	Description:
		- 문저열 my_string을 k번 반복하여 반환하는 함수
	Link: https://school.programmers.co.kr/learn/courses/30/lessons/181940
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k)
{
	string answer = "";
	while (k--)
		answer += my_string;
	return answer;
}