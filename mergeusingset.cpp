#include<bits/stdc++.h>
#include<vector>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    set<int>st;
    int n=a.size();
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }
    vector<int>uni;

    for(auto it:st){
        uni.push_back(it);
    }

    return uni;
    
}