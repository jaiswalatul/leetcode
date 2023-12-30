class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                // Kyuki ham last se traverse kar rahe hain to automatically biggest number we get here i+1 define the length of substring
                return num.substr(0,i+1);
            }
        }

        return "";
    }
};