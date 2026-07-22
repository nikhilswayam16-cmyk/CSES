#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long n, target;
cin>>n>>target;
long long result{};
vector<long long> v;
long long temp = n;
while(temp)
{
long long i;
cin>>i;
v.push_back(i);
temp--;
}
if(n == 1)
{
if(v[0] == target) cout<<1;
else cout<<0;
return 0;
}
long long i = 0;
long long j = 0;
long long sum = v[0];
while(j < n)
{
if(sum < target)
{
if(j+1 == n) break;
j++;
sum += v[j];
}
else if(sum > target)
{
sum -= v[i];
i++;
}
else{
result++;
sum -=v[i];
i++;
}
if(i > j)
{
j = i;
sum = v[i];
}
}
cout<<result;
return 0;
}

