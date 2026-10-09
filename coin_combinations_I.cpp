#include<iostream>
#include<vector>
using namespace std;
int main()
{
long long x{};
long long n{};
cin>>x>>n;
vector<long long> coins;
while(x>0)
{
long long t{};
cin>>t;
coins.push_back(t);
x--;
}
long long MOD = 1e9 + 7;
vector<long long> dp(n+1,0);
dp[0] = 1;
for(long long i = 1; i<=n; ++i){
for(auto c : coins){
if(i-c >= 0){
dp[i] = (dp[i] + dp[i-c])%MOD;
}
}
}
cout<<dp[n];
return 0;
}
