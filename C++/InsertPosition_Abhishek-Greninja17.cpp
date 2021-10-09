#include<bits/stdc++.h>
using namespace std;

void insertPosition(vector <int> arr, int n, int k){
    if(binary_search(arr.begin(),arr.end(),k))//binary search for O(log n) complexity
    {
        auto it = lower_bound(arr.begin(),arr.end(),k);
        cout<<it-arr.begin()<<endl;
    }
    else //if search fails, finding position to insert
    {
        auto it = lower_bound(arr.begin(),arr.end(),k);
        cout<<it-arr.begin()<<endl;
    }
}
//Driver code
int main()
{
    int t,n,tar,k; 
    cin>>t; //number of test cases
    while(t--){
        cin>>n;//length of the int vector array;
        vector <int> arr; //declaring int vector array of n length
        for(int i=0; i<n; i++)
        {
            cin>>k; 
            arr.push_back(k); // input in vector
        }
        /* Note: array must be sorted as per the question */
        cin>>tar; //input target
        insertPosition(arr, n, tar);
    }
    return 0;
}
/* test input :
2         <----- test cases
4         <----- length of array 1
1 3 5 6   <----- array 1
5         <----- target 1
4         <----- length of array 2
1 3 5 6   <----- array 2
2         <----- target 2

Expected Output:
2
1
*/
