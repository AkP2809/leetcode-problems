#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626
#define ll long long
#define lli long long int
#define fo(i,a,n) for(int i=a;i<n;i++)
#define pr(i,arr) for(auto i:arr)

typedef vector<int> vi;
typedef vector<ll> vl;
typedef map<ll,ll> ml;
typedef map<int,int> mi;


int rev(int n)
{
    int ans = 0;
    while(n>0)
    {
        ans = ans*10+n%10;
        n = n/10;
    }

    return ans;
}

void solve()
{
    int n;
    cin>>n;

    if(n>INT_MAX || n<INT_MIN)
    {
        cout<<"0"<<endl;
    }
    else
    {
        if(n<0)
        {
            int val = -1*rev(abs(n));
            cout<<val;
        }
        else 
        {
            int val = rev(n);
            cout<<val;
        }
    }

}

int main() {

    solve();

    return 0;
}
