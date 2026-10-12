#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long n{},x{};
cin>>n>>x;
vector<long long> page;
vector<long long> price;
for(int i = 0; i < 2; ++i)
{
for(int j = 0; j < n; ++j)
{
long long t;
cin>>t;
if(i == 0){
price.push_back(t);
}
else{
page.push_back(t);
}
}
}
vector<pair<long long , long long>> list;
int i = 0;
while(n > 0)
{
pair<long long, long long> t = {page[i], price[i]};
list.push_back(t);
i++;
n--;
}
vector<long long> dp(x+1, 0);
for(auto c : list)
{
for(long long i = x; i>=c.second ; --i)
{
dp[i] = max(dp[i], dp[i-c.second] + c.first);
}
}
cout<<dp[x];
return 0;
}
