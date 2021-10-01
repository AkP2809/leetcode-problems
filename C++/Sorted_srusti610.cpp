#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& a, int target)
{
    int n = a.size();
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] >= target)
            return i;
    }
    return n;
}
int main()
{
    vector <int> a = {1 , 3 , 5 , 7 , 9};
    int target = 8;
    cout << searchInsert(a , target) << '\n';
}
