#include<iostream>
#include <windows.h>
#include <shellapi.h>
using namespace std;

int main()
{
    string image = "https://i.redd.it/n93k6oc2wab71.png";

    ShellExecuteA(NULL, "open", image.c_str(), NULL, NULL, SW_SHOWNORMAL);
    return 0;
}
