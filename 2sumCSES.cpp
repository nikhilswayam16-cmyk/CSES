#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long n, target;
cin>>n>>target;
vector<long long> v;
long long temp = n;
vector<long long> result(2);
while(n)
{
long long t;
cin>>t;
v.push_back(t);
n--;
}
n = temp;
sort(v.begin(),v.end());
long long  i = 0;
long long j = n-1;
while(true)
{
if((v[i]+v[j]) > target)
{
j--;
if(j  < i) break;
}
else if((v[i]+v[j]) < target)
{
i++;
if(i > j) break;
}
else
{
result[0] = i;
result[1] = j;
break;
}
if(i == j) break;
}
if(result.empty())
{
cout<<"IMPOSSIBLE";
}
else{
cout<<result[0]<<" "<<result[1];
}
return 0;
}

