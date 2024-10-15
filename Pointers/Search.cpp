#include<iostream>
using namespace std;
bool search(int*a,int t)
{
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==t)
        return true;
    }
    return false;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int t=67;
    if(search(a,t))
    cout<<"Present";
    else
    cout<<"Not Present";
    
}
