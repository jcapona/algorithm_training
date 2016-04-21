/**
Two non negative integers are called siblings if they can be obtained from each other by rearranging the digits of their decimal representations. For example, 123 and 213 are siblings, 535 and 355 are also siblings.

A set consisting of a non-negative integer N and all of its siblings is called the family of N. For example, the family of 553 comprises three numbers: 355, 535 and 553.

Write a function:
	int solution(int N);

That given a non-negative integer N, returns the largest number in the family of N. The function should return -1 if the result exceeds 100,000,000.

For example, given N = 213 the function should return 321. Given N = 553, the function should return 553.

Assume that: 
	- N is an integer within the range [0, ..., 2147483647]

Complexity:
	- expected worst-case time complexity: O(1)
	- expected worst-case space complexity: O(1)
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int solution(int N) {
	if(N < 0 || N > 2147483647)
		return -1;
	long long sol = N;
	std::string n = std::to_string(N);
	std::sort(n.begin(), n.end());
	do {
		//std::cout << std::stoi (n) << '\n';
		if(std::stoi(n) > sol)
			sol = std::stoi(n);
		if(sol > 100000000)
	    return -1;
	} while(std::next_permutation(n.begin(), n.end()));
	return sol;
}

int main (int argc, char **argv)
{
	std::cout << solution(123) <<"\n";
	std::cout << solution(553) <<"\n";
	std::cout << solution(18) <<"\n";
	std::cout << solution(-1) <<"\n";
	std::cout << solution(112312312) <<"\n";
	return 0;
}
