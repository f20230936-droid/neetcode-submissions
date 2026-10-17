class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<vector<int>,vector<string>> mp;
      
       for (string s:strs)
       {
         vector<int> count(26,0);
       for(char ch:s)
       {
        count[ch-'a']++;
       }
       mp[count].push_back(s);
       }
       vector<vector<string>> result;
       for(auto l:mp)
       {
        result.push_back(l.second);
       }
       return result;

}
};
