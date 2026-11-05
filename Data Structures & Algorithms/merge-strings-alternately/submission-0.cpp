class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        
        for (int i=0, j=0; i<word1.length() || j<word2.length() ; i++,j++) {
            if(i<word1.length()) {
                ans += word1[i];
            }

            if(j<word2.length())
                ans += word2[j];

            
        }
        return ans;
    }
};