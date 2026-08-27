class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false; 
        s+=s;
        for(int i=0;i<=s.length()-goal.length();i++){
        string t=s.substr(i,goal.length());
        if(t==goal) return true;
        }
        return false;
    }
};