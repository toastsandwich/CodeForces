/*
problem name : Beautiful Matrix
link : https://codeforces.com/problemset/problem/263/A
status : accepted
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n = 5;
	int mat[n][n];
	int a,b;
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			cin>>mat[i][j];
			if(mat[i][j]==1){
				a=i;
				b=j;
			}
		}
	}
	a++;b++;
	cout<<abs(a-3)+abs(b-3)<<endl;
	return 0;
}
