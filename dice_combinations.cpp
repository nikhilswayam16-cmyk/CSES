#include<iostream>
#include<vector>
using namespace std;
int main()
{
long long n{};
cin>>n;
long long MOD = 1e9 + 7;
vector<long long> dp(n+1,0);
dp[0] = 1;
for(long long i = 1; i<=n; ++i){
for(long long j = 1; j <= 6; ++j){
if(i-j>=0){
dp[i] = (dp[i-j] + dp[i])%MOD;
}
}
}
cout<<dp[n]<<'\n';
return 0;
}
