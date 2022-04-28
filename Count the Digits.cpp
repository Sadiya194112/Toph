#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;     cin>>tc;
    int c=1;
    while(tc--){
        int m,a,b;
        double res=0;
        cout<<"\n";
        cin>>m;
        for(int i=1; i<=m; i++){
            cin>>a>>b;
           res += b*log2(a);
        }
        cout<<"Case "<<c++<<": "<<ceil(res)<<endl;
    }
    return 0;
}
