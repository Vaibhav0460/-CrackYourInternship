class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        set<int> st;
        for(int i=0;i<v.size();i++){
            st.insert(v[i]);
        }
        int i=0;
        for(auto it:st){
            v[i] = it;
            i++;
        }
        return st.size();
    }
};
