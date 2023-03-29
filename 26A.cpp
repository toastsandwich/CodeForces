#include<bits/stdc++.h>
#define int long long
#define N 100000

using namespace std;

vector<int> primeSieve(int n) {
    vector<int> primes;
    vector<int> vec(N,1);
	vec[0]=vec[1]=0;
	for(int i=2;i<=N;i++) {
		if(vec[i]) {
			for(int j= i*i;j<=N;j=j+i){
				vec[j]=0;
			}
		}
	}
    for(int i = 0;i<n;i++){
        if(vec[i]) primes.push_back(i);
    }
    return primes;
}

vector<int> primeFactors(int n){
    vector<int> primeFact;
    while (n % 2 == 0){
        primeFact.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0){
            primeFact.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        primeFact.push_back(n);
    return primeFact;
}
void solve(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2;i<=n;i++){
        vector<int> temp = primeFactors(i);
        set<int> s;
        for(auto x:temp) s.insert(x);
        if(s.size()==2)
        cnt++;
    }
    cout<<cnt<<endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // !ONLINE_JUDGE
    // int T;
    // cin >> T;
    // while (T--){
    //     solve();
    // }
    solve();
    return 0;
}
