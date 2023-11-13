class Solution {
public:
    void reverseString(vector<char>& str) {
        int s=0;
        int e=str.size();
        while(s<e){
            swap(str[s],str[e-1]);
            s++;
            e--;
        }
    }
};