class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size()!=t.size())
    return false;
    std::unordered_map<char,int> count;
    // string stored in hashmap
    for( char ch:s)
    {
        count[ch]++;
    }
    for(char ch:t)
    {
        if(count.find(ch)==count.end()|| count[ch]==0)
       {
        return false;
       
    }
     count[ch]--;
     
    }
    return true;
}
};
