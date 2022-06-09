/* You are given a DNA sequence: a string consisting of characters A, C, G, and T.
Your task is to find the longest repetition in the sequence.
This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Example
Input:
ATTCGGGA

Output:
3
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int r = 1;
    int i = 0;

    while(i < input.size()-1){
        int count = 1;

        while(input[i] == input[i+1]){
            count++;
            i++;
        }
        r = max(r, count);
        i++;
    }
    cout << r;
}


