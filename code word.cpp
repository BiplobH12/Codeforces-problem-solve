#include<bits/stdc++.h>
using namespace std;
int main()
{ 
string s;
s.reserve(200);
cin>>s;
for(int i=0;i<s.size();i++)
{
if(s[i]=='-'&&s[i+1]=='.')
{
cout <<1;
i++;
}
else if(s[i]=='-'&&s[i+1]=='-')
{
cout<<2;
i++;
}
else
cout <<0;
}
return 0;
}