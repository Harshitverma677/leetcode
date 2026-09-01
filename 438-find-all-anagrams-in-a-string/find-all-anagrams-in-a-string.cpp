class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.length()>s.length()) return ans;
        unordered_map<char,int> mp;
        unordered_map<char,int> temp;
        for(int i=0;i<p.length();i++) mp[p[i]]++;
        int i=0,m=p.length();
        for(int j=0;j<s.length();j++){
            temp[s[j]]++;
            if(j-i+1>m){
                temp[s[i]]--;
                if(temp[s[i]]==0) temp.erase(s[i]);
                i++;
            }
            if(j-i+1==m){
                if(temp==mp) ans.push_back(i);
            }
        }
        return ans;
    }
};