#include<iostream>
#include<vector>
using namespace std;
int main()
{
long long x{};
cin>>x;
long long n{};
cin>>n;
long long INF = 1e9;
vector<long long> dp(n+1,INF);
vector<long long> coins;
while(x>0){
long long t{};
cin>>t;
coins.push_back(t);
x--;
}
dp[0] = 0;
for(long long i = 1; i <= n; ++i){
for(auto c: coins){
if(i-c >= 0){
dp[i] = min(dp[i-c] + 1, dp[i]);
}
}
}
if(dp[n] == INF){
cout<<-1;
}
else cout<<dp[n];
return 0;
}
