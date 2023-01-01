#include<iostream>
using namespace std;
int main()
{
    int fact=1;
    int n;
    cout<<"enter n\n";
    cin>>n;
     for(int i=1;i<=n;i++)
     {
        fact=fact*i;
     }
     cout<<"factorial is "<<fact;
}