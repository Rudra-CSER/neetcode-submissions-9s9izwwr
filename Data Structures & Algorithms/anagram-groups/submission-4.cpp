class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      //cretea a unorderd map list for intize key , <vector> value
      unordered_map< string , vector<string>> map;
      for(int i =0 ; i< strs.size() ; i++){
        string key = strs[i];
        //short them for better map_> stop->opst
        sort(key.begin() , key.end());
        //key-> act , val->{act , act} :; key-> opst , val ->{stop,pots, tops}
        map[key].push_back(strs[i]);
      }
    vector<vector<string>> result;
    for(auto& x: map){
        result.push_back(x.second);
    }
     return result;
    }
};
