#include<iostream>
using namespace std;
// exception handling : try , catch , throw
int main()
{
    int n,d,result;
    cout<<"Enter N and D :"<<endl;
    cin>>n>>d;
    try
    {
        if(d==0)
        {
            throw d;
        }
        result=n/d;
    }
    catch(int ex)
    {
        cout<<"Divide by zero not allowed "<<ex;
    }
    
    
    cout<<"Division is :"<<result;
    return 0;


}