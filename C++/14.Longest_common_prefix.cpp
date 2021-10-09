// NAME: DEBARGHA MUKHERJEE
// Github Username: Debargha-arch
//Problem 14

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.empty()) return "";
        string tmp = str[0];
        int count = tmp.size();
        for(int i = 1;i < str.size();++i){
            for(int j = 0;j < count;++j){
                if(str[i][j] != tmp[j]){
                    tmp = tmp.substr(0,j);
                    count = j;
                    break;
                }
            }
        }
        return tmp;
    }
};
