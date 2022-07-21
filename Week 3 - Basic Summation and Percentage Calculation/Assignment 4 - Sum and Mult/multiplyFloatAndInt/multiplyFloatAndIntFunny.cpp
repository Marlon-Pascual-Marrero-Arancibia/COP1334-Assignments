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
    while(number%3 != 0)
    {  
        std::cout << "while loop running" << endl;
        std::cout << "number is now: "<< number << endl;
        number -= 1;
        std::cout << "number is now: "<< number << endl;
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

    std::cout << "unformatted is: " << unformatted << endl;

    if (unformatted.length() < 4) { return unformatted;}

    int unformattedDiv3Length = roundDownToDivisibleBy3(unformatted.length());

    std::cout <<boolalpha<<(unformattedDiv3Length != unformatted.length()) << endl;

    if (unformattedDiv3Length != unformatted.length()) 
    {
        unformattedReady = unformatted.substr(unformatted.length()-unformattedDiv3Length);
        std::cout << "First if ran" << endl;
        std::cout << "unformattedRead is: " << unformattedReady <<endl;
    } else {
        std::cout << "First else ran" << endl;
        unformattedReady = unformatted;
        std::cout << "unformattedReady is: " << unformattedReady <<endl;
    }
 
    for (int i = 0; i<unformattedReady.length(); i+=3)
    {
        std::cout << "For loop running" << endl;
        if (i<3)
        {
            std::cout << "Second if ran" << endl;
            formatted += unformattedReady.substr(i,i+3);
            std::cout << "formatted is now:" + formatted << endl;
        } else {
            std::cout << "Second else ran" << endl;
            formatted += ","+unformattedReady.substr(i,i+3);
            std::cout << "formatted is now:" + formatted << endl;
            commaCount += 1;
            std::cout << "commaCount is: " <<commaCount <<endl;
        }
        
    }

    if (formatted.length() != unformatted.length()+commaCount)
    {
        std::cout << "Third if ran" <<endl;
        formatted = formatted.insert (0, 1, ',');
        commaCount += 1;
        std::cout << "unformatted is: " << unformatted << endl;
        std::cout << "formatted is: " << formatted <<endl;
        int unformattedLength = unformatted.length();
        int formattedLength = formatted.length();
        std::cout << "formatted length is: " << formattedLength <<endl;       
        std::cout << "unformatted length is: "<<unformattedLength<<endl;
        std::cout << "commaCount is:"<<commaCount<<endl;
        std::cout << "formatted length - commaCount is: " << (formattedLength-commaCount) <<endl;
        std::cout << "substring of numbers to be prepended: " << unformatted.substr(0,(unformattedLength-(formattedLength-commaCount))) << endl;
        formatted = formatted.insert(0, unformatted.substr(0,(unformattedLength-(formattedLength-commaCount))));
        std::cout << "formatted is now: " << formatted <<endl;
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