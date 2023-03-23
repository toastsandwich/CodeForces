/*
Problem Name : Queue at the school
Link : https://codeforces.com/problemset/problem/266/B
Status : accepted
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	vector<int> v(n,0);
	for(int i = 0;i<t;i++){
		for(int j = 0;j<n-1;j++) {
			if(s[j]=='B'&&s[j+1]=='G'&&v[j]==v[j+1]&&v[j]==0){
				swap(s[j],s[j+1]);
				v[j]=v[j+1]=1;
			}
		}
		fill(v.begin(),v.end(),0);
	}
	cout<<s<<endl;
	return 0;
}
