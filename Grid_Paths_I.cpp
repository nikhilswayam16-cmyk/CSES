#include<iostream>
#include<vector>
using namespace std;
int main()
{
long long n{};
cin>>n;
vector<vector<char>> grid;
for(int i = 0; i < n; ++i)
{
vector<char> temp{};
for(int j = 0; j < n; ++j)
{
char t;
cin>>t;
temp.push_back(t);
}
grid.push_back(temp);
}
vector<vector<long long>> dp(n,vector<long long>(n,0));
if(grid[0][0] == '.')
{
dp[0][0] = 1;
}
else
{
cout<<0;
return 0;
}
long long MOD = 1e9 + 7;
for(int p = 0; p < n; ++p)
{
for(int q = 0; q < n; ++q)
{
if(grid[p][q] == '.' && q-1 >=0)
{
dp[p][q] = (dp[p][q-1] + dp[p][q])%MOD;
}
if(grid[p][q] == '.' && p-1 >=0 )
{
dp[p][q] = (dp[p-1][q] + dp[p][q])%MOD;
}
}
}
cout<<dp[n-1][n-1];
return 0;
}

