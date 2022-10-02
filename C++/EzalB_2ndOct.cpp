#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>()) minh;

    for(int i = 0; i < nums.size(); ++i)
    {
      minh.push(nums[i]);

      if(minh.size() > k)
      {
        minh.pop();
      }
    }

    while(!minh.empty())
    {
      int s = minh.top();
      minh.pop();
      cout << s;
    }

    return 0;
}
