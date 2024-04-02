#include <string>

class Solution {
public:
    int sanitize_end(string s){
        bool found_char = false;
        int i;
        for(i = s.length()-1; i >= 0 && !found_char; i--){
            if(s[i] != ' ')
                found_char = true;
        }
        return i+1;
    }

    int lengthOfLastWord(string s) {
        int last = sanitize_end(s);
        cout << last;
        s = s.substr(0,last+1);
        int a = s.find_last_of(" ");
        string tmp = s.substr(a+1,(s.length()-a));
        return tmp.length();
    }
};