/* INSTRUCTIONS
The east cost sales division of a company generates 58% of the total sales. 
Write a program that predict how much the east coast division will generate 
if the company has 1 million in sales this year. Based on that percentage.
*/

//Funny: Come back to this and make this configurable in GUI.

#include<iostream>
#include <string>
using namespace std;

//45580000

int roundDownToDivisibleBy3(int number)
{
    while(!number%3)
    {  
        number -= 1;
    }
    
    return number;
} 

string removeDecimals(string withDecimal) { return withDecimal.substr(0, withDecimal.find(".")); }

string format(string unformatted)
{
    unformatted = removeDecimals(unformatted);

    string formatted = "";
    string unformattedReady ="";
    int commaCount = 0;

    int unformattedDiv3Length = roundDownToDivisibleBy3(unformatted.length());

    if (unformattedDiv3Length != unformatted.length()) 
    {
        unformattedReady = unformatted.substr(0, unformattedDiv3Length);
    } else {
        unformattedReady = unformatted;
    }

    for (int i = 0; i<unformattedReady.length(); i+=3)
    {
        if (i<3)
        {
            formatted += unformattedReady.substr(i,i+3);
        } else {
            formatted += ","+unformattedReady.substr(i,i+3);
        }
        
    }

    if (unformatted.length() != formatted.length()+commaCount) 
    {
        formatted = unformatted.substr(0,unformatted.find(formatted));
    }

    return formatted;
}

int main()
{
    int sales = 1000000;
    float eastSalesPercentage = .58;
    string eastSalesGenerated = std::to_string(eastSalesPercentage*sales);
    std::cout << format(eastSalesGenerated); //580000
    return 0;
}