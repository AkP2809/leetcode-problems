/*44. Wildcard Matching

Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).

 

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
Example 2:

Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.
Example 3:

Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
 

Constraints:

0 <= s.length, p.length <= 2000
s contains only lowercase English letters.
p contains only lowercase English letters, '?' or '*'.



*/



class Solution {
public:
    bool isMatch(string s, string p)
    {
        int m = s.length();
        int n = p.length();

        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for(int j = 1; j <= n; j++)
        {
            int k;
            for(k = 1; k <= j; k++)
            {
                if(p[k-1] != '*')
                break;
            }
            if(k == j+1)
            dp[0][j] = 1;
        }
        dp[0][0] = 1;

        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(s[i-1] == p[j-1] || p[j-1] == '?')
                dp[i][j] = dp[i-1][j-1];
                else if(p[j-1] == '*')
                {
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                }
                else
                dp[i][j] = 0;
            }
        }

        return dp[m][n];
    }
};
