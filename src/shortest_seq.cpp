/**
A positive integer N is given. The goal is to construct the shortest possible sequence of integers ending with N, using the following rules:
	- the first element of the sequence is 1: A[0]=1,
	- each of the following elements is generated by multiplying the previous element by 2 or increasing it by one: A[i]=A[i-1]*2 or A[i]=A[i-1]+1, for i>=1

For example, N=18, the shortest sequence is:
A[0]=1
A[1]=2
A[2]=4
A[3]=8
A[4]=9
A[5]=18

Write a function:
	int solution(int N);

that given a positive integer N, returns the length of the shortest possible sequence of integers satisfying the aboce conditions and ending with N.

For example, given N = 18, the function should return 6, as explained above.

Assume that N is an integer within the range [1, ..., 2147483647]

Complexity:
	- expected worst-case time complexity is O(logN)
	- expected worst-case space complexity is O(1)
*/
#include <iostream>
#include <vector>

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    if(N <= 0)
        return -1;
    
    std::vector<int> reversed_result;
    reversed_result.push_back(N);
    while(1)
    {
        if(N%2 == 0)
            N = N/2;
        else
            N = N - 1;
        
        //std::cout << reversed_result.back() <<"-";
        reversed_result.push_back(N);
        if(reversed_result.back() == 1)
            return reversed_result.size();
    }
}

int main (int argc, char **argv)
{
	std::cout << solution(18) <<"\n";
	std::cout << solution(-1) <<"\n";
	std::cout << solution(112312312) <<"\n";
	return 0;
}