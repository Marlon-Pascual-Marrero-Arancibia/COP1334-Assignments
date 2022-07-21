/* INSTRUCTIONS:
Write a program that stores the integers 50 and 100 in variables, 
Store the sum of these two in a variable named total. 
Also printout this last variable. 
*/

#include<iostream>
using namespace std;

int main()
{
    int fifty = 50;
    int oneHundred = 100;
    int result = fifty+oneHundred;

    std::cout << result;
    return 0;
}