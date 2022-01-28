#include<iostream>
using namespace std;

void replacePI(string s)
{
    if(s.length()==0)
        return;

    if(s[0]=='p'&& s[1]=='i')
    {   
        s.replace(0,2,"3.14"); //
        cout<<s.substr(0,4); //cout<<"3.14";
        replacePI(s.substr(4)); //replace(2);
    }
    else
    {
        cout<<s[0];
        replacePI(s.substr(1));
    } 
}
int main()
{
    string s="xpivdpi";
    //cout<<s.substr(1)[0];
    replacePI(s);
    return 0;
}