#include<iostream>
using namespace std;
int main()
{
     int x=1,y=9,z=8,max;
     max=(x>y)?((x>z)?x:z):((y>z)?y:z);
     cout<<max;
}
