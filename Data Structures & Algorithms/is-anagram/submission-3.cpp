class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char , int> count ;
        //for adding values of s in empty map 
        for(int i =0 ; i < s.size(); i++){
            count[s[i]]++; 
        }

        //for subtracting 
        for(int i = 0 ; i < t.size(); i++){
            count[t[i]]--;
        }
        //compareing if the values are 0 ;
        for(auto& x : count){
            if(x.second != 0){
            return false;
            }
            return true;
        }

    }
};
