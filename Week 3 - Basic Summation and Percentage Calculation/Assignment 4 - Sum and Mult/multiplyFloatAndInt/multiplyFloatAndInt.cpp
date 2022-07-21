/* INSTRUCTIONS
The east cost sales division of a company generates 58% of the total sales. 
Write a program that predict how much the east coast division will generate 
if the company has 1 million in sales this year. Based on that percentage.
*/

#include<iostream>
#include <string>
using namespace std;

string removeDecimals(string withDecimal) { return withDecimal.substr(0, withDecimal.find(".")); }

int main()
{
    int sales = 1000000;
    float eastSalesPercentage = .58;
    string eastSalesGenerated = std::to_string(eastSalesPercentage*sales);
    std::cout << removeDecimals(eastSalesGenerated);
    return 0;
}