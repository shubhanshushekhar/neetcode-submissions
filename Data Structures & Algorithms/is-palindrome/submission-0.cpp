class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (int i=0 ; i< s.length(); i++){
            if(isalnum(s[i])) {
                if (isalpha(s[i]))
                    str += tolower(s[i]);

                else
                    str += s[i];
            }
                
        }

        cerr << str;
        
        for (int i=0 ; i*2<str.length(); i++)
            if(str[i] != str[str.length()-1-i])
                return false;

        return true;

    }
};
