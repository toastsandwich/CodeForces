/*
Problem : Borze
Link :  https://codeforces.com/problemset/problem/32/B
Status : Accpeted
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length();
	string dc = "";
	for(int i = 0;i<n;i++) {
		if(s[i]=='.'){
			dc+='0';
		}
		if(s[i]=='-'&&s[i+1]=='.'){
			dc+='1';
			++i;
		}
		if(s[i]=='-'&&s[i+1]=='-'){
			dc+='2';
			++i;
		}
	}
	cout<<dc<<endl;
	return 0;
}
