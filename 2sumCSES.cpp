#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long n,target;
cin>>n>>target;
long long k = 1;
vector<pair<long long,long long>> v;
for(;k<=n;k++)
{
long long temp;
cin>>temp;
v.push_back({temp,k});
}
sort(v.begin(),v.end());
long long i = 0, j= n-1;
pair<long long, long long> a= {-1,-1}, b= {-1,-1};
bool found = false;
while(i<j)
{
long long  sum = v[i].first + v[j].first;
if(sum < target) i++;
else if(sum > target) j--;
else{a=v[i],b=v[j]; found = true; break;}
}
if(found){
cout<<a.second<<" "<<b.second;
}
else{
cout<<"IMPOSSIBLE";
}
return 0;
}
