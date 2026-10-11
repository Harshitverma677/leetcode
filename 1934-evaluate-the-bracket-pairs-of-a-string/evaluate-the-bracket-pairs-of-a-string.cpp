class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        string t="";
    for(int i=0;i<knowledge.size();i++){
    mp[knowledge[i][0]]=knowledge[i][1];
    }
        int i=0,j=0;
        while(i<s.length()){
            j=i+1;
            if(s[i]=='('){
                while(s[j]!=')') j++;
    string temp=s.substr(i+1,j-i-1);
if(mp.find(temp)!=mp.end())t+=mp[temp];
    else t+='?';
                i=j;
            }
            else t+=s[i];
            i++;
        }
        return t;
    }
};