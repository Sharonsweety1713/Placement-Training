#include<iostream>
#include<cstring>
using namespace std;
int check (char a[]){
    
    int n=strlen(a);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        cnt++;
    }
    return cnt;
}

int main()
{
    char a[25];
    cin>>a;
    int n=strlen(a);
    int x=check(a);
    cout<<"vowels: "<<x<<endl<<"consonents: "<<n-x;
    
}
