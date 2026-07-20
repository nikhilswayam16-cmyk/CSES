#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//There could be several rooie mistakes here.
//First is that we may think that the answer is solvable 
//using two directly . Even though,the core idea is true,
//nonetheless, it still needs some tweaking.
//First thing to notice here is that the problem input array
//doesn't strictly follow monotonicity.
//The values are not unique. 
//So one would be tempted to use this thinking. Let's use
//map. We will use values as keys and indices as values.
//However, values aren't unique!
//So, one would be tempted to use indices as keys
//But again this is a trap! but we will be sorting the
//array and original indices are going to be lost anyway!!!!!
//why not store these indices as well?
//But that would be lot of tedious error prone work.
//Best option: use pair data structure.
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
