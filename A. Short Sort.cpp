#include<iostream>
#include<string>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string s;
cin>>s;
if(s[0]=='a'||s[1]=='b'||s[2]=='c')
cout << "YES" << endl;
else
cout << "No" << endl;
}
return 0;
}