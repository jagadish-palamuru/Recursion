#include<iostream>
using namespace std;

void duplicates(string s)
{
    if(s.length()==0)
        return;
    duplicates(s.substr(1));
    cout<<s[0];
}
int main()
{
    duplicates("loathe");
    return 0;
}