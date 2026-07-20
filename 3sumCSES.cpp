#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long n, target;
bool found  = false;
cin>>n>>target;
long long temp;
vector<pair<long long ,long long>> v;
pair<long long,long long> a={-1,-1},b={-1,-1},c={-1,-1};
for(long long i=1;i<=n;i++)
{
cin>>temp;
v.push_back({temp,i});
}
sort(v.begin(),v.end());
for(long long k=0;k<n-2;k++)
{
long long num1 =  v[k].first;
long long j = k+1;
long long t= n-1;
while(j < t)
{
long long sum = v[j].first + v[t].first;
if(sum >  (target-num1)) t--;
else if(sum < (target-num1)) j++;
else{
a = v[k];b = v[j]; c=v[t]; found =true;break;}
}
}
if(found)
{
cout<<a.second<<" "<<b.second<<" "<<c.second;
}
else{
cout<<"IMPOSSIBLE";
}
return 0;
}

