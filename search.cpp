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


void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }   

    int target;
    cin>>target;

    if(binary_search(v.begin(),v.end(),target))
    {
        auto it = lower_bound(v.begin(),v.end(),target);
        cout<<it-v.begin()<<endl;
    }
    else
    {
        auto it = lower_bound(v.begin(),v.end(),target);
        cout<<it-v.begin()<<endl;
    }
    

}

int main() {

    solve();

    return 0;
}
