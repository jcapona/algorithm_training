/**
= Simple Array Sum - Hackerrank =

Given an array of  integers, can you find the sum of its elements?

Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers representing the array's elements.

Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output

31
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        int sum = 0;
        for(int arr_i = 0; arr_i < n; arr_i++){
           scanf("%d",&arr[arr_i]);
           sum += arr[arr_i];
        }
        printf("%d", sum);
        return 0;
}

