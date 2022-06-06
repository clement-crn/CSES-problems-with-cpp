/*
 You are given all numbers between 1,2,…,n
 except one. Your task is to find the missing number.

 Input
 The first input line contains an integer n
 
 The second line contains n−1
 n−1 numbers. Each number is distinct and between 1 and n (inclusive).

 Output
 Print the missing number.


 example

 Input:
 5
 2 3 1 5

 Output:
 4
 */


#include <iostream>

int main() {
    long long int n, input, sum = 0;
    std::cin >> n;

    for (int i = 0 ; i < n - 1 ; i++) {
        std::cin >> input;
        sum += input;
    }

    std::cout << ( n * (n + 1) ) / 2 - sum << std::endl;

    return 0;
}

//https://www.cuemath.com/sum-of-natural-numbers-formula/

