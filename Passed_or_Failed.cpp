#include<iostream>
using namespace std;
int main()
{
    int e,m,p,c,cs;
    cin>>e>>m>>p>>c>>cs;
    if(e>=35 && m>=35 && p>=35 && c>=35 && cs>=35)
    {
        cout<<"PASSED";
    }
    else
    {
        cout<<"FAILED";
    }
}