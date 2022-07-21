/* INSTRUCTIONS
The east cost sales division of a company generates 58% of the total sales. 
Write a program that predict how much the east coast division will generate 
if the company has 1 million in sales this year. Based on that percentage.
*/

#include<iostream>
#include <string>
using namespace std;

string removeDecimals(string withDecimal) { return withDecimal.substr(0, withDecimal.find(".")); }

string format(string unformatted)
{
    int numbersPassed = 0; 
    string formatted = "";

    unformatted = removeDecimals(unformatted);

    for (int i = unformatted.length()-1; i>=0; i--)
    {
        formatted = formatted.insert(0,unformatted.substr(i,1));
        numbersPassed += 1;

        if (numbersPassed % 3 == 0 && (unformatted.length() - numbersPassed) > 0) 
        {
            formatted = formatted.insert(0, ",");
        }
        
    }
    return formatted;
}

int main()
{
    int sales = 1000000;
    float eastSalesPercentage = .58;
    string eastSalesGenerated = std::to_string(eastSalesPercentage*sales);
    std::cout << format(eastSalesGenerated);
    return 0;
}