class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0; i<s.length(); i++){
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
        }

        bool flag = true;
        int left = 0, right = str.length()-1;
        while(left<right){
            if(str[left]==str[right])
            {
                left++; right--;
            }
            else{
            flag = false;
            break;
            }
        }
        return flag;
    }
};