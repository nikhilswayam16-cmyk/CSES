#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long max_d(long long x)
{
if( x < 10 ){
return x;
}
long long max_digit{};
while(x >= 10)
{
long long t = x % 10;
max_digit = max(t, max_digit);
x = x - t;
x = x/10;
}
max_digit = max(max_digit,x);
return max_digit;
}
int main()
{
long long n{};
cin>>n;
long long count{};
while(n > 0)
{
long long q = max_d(n);
n = n - q;
count++;
}
cout<<count;
return 0;
}
