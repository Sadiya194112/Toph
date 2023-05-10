#include<bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;
int i,j,n,m;


void sieve(){
    vector<bool> isPrime(n, true);
    isPrime[0]=false;
    for(i=2; i<=m; i++){
        if(isPrime[i])  isPrime[i]=false;
        else isPrime[i]=true;
        for(j=2*i; j<=n; j+=i){
                if(isPrime[j])  isPrime[j]=false;
                else    isPrime[j]=true;
            }
        }
    int sum=0;
    for(i=1; i<=n; i++){
        if(isPrime[i])  sum+=i;
    }
    cout<<sum<<endl;
}

void ac(){
    cin>>m>>n;
    sieve();
}

signed main(){
    ac();
    return 0;
}
