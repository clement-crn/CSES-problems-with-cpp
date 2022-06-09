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


