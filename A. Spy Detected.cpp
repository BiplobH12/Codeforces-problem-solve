#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,h=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<(n-1);i++)
{
if(a[i]!=a[i+1]&&a[i+1]!=a[i+2])
{
h=i+2;
break;
}
else if(a[i]!=a[i+1])
{
h=i+1;
break;
}
}
cout<<h<< endl;
}
return 0;
}