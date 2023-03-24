/*
Problem Name : Garland
Link : https://codeforces.com/contest/1809/problem/A
Status : Accepted
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		map<char,int> m;
		for(auto i:s) {
			m[i]++;
		}
		int mf = INT_MIN;
		for(auto x:m) {
			if(x.second>mf){
				mf = x.second;
			}
		}
		if(mf == 4){
			cout<<-1<<endl;
		}
		if(mf == 3){
			cout<<6<<endl;
		}
		if(mf == 2){
			cout<<4<<endl;
		}
		if(mf == 1){
			cout<<4<<endl;
		}
	}
	return 0;
}
