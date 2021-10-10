class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n = grid.size();
        vector<int>v;
        for(int i=0;i<grid.size();i++){
                    for(int j=0;j<grid[i].size();j++){
                        v.push_back(grid[i][j]);
                    }
        }
        sort(v.begin(),v.end());
        int n1=v.size();
                int ans=0;
                for(int i=0;i<grid.size();i++){
                    for(int j=0;j<grid[i].size();j++){
                        if(abs(v[n1/2]-grid[i][j])%x!=0){
                            return -1;
                        }
                        else
                            ans+=(abs(v[n1/2]-grid[i][j])/x);
                    }
                }
                return ans;
    }
};