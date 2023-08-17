#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int sum = 0, n, ip;
    cin >> n;
    for (long long int i = 0; i < n-1; i++)
    {
        cin>>ip;
        sum += ip;
    }

    long long int total = (n*(n+1))/2;

    cout<<(total-sum)<<"\n";
}