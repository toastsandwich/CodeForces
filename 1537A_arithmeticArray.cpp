#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int s = 0;
        for(int i =0 ;i<n;i++) {
            int e;
            cin>>e;
            s+=e;
        }
        if(s<=0) {
            cout<<1<<endl;
        }
        else if(s<n) {
            cout<<1<<endl;
        }
        else{
            cout<<abs(s-n)<<endl;
        }
    }
}
