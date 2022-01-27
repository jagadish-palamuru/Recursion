#include<iostream>
using namespace std;

void printDesc(int n)
{
    if(n==0)
        return;
    
    cout<<n<<" ";
    printDesc(n-1);
}

void inc(int n)
{
    if(n==0)
        return;
    inc(n-1);
    cout<<n<<" ";
}
/*void printAsc(int n,int i)
{
    if(i>n)
        return;
    cout<<i<<" ";
    printAsc(n,(++i));
}*/

int main()
{
    int n;
    cin>>n;
    printDesc(n);
    cout<<endl;
    //printAsc(n,0);
    inc(n);
    return 0;
}