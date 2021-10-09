//Leetcode-88
class Solution {
public:
    void merge(vector<int>& a, int n, vector<int>& b, int m) {
       int i=n-1,j=m-1,k=n+m-1;
        while(i>=0 && j>=0)
        {
            if(a[i]>=b[j])
                a[k--]=a[i--];
            else
                a[k--]=b[j--];
        }
        while(j>=0)
            a[k--]=b[j--];
    }
};
