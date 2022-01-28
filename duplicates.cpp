#include<iostream>
using namespace std;

void duplicates(string s)
{
    if(s.length()==0)
        return;

   
    if(s[0]==s.substr(1)[0])
        duplicates(s.substr(1));
    else
    {    cout<<s[0];
         duplicates(s.substr(1));
    }
    
}
int main()
{
    duplicates("llloaaaaaalaaaaaaaaathe");
    return 0;
}