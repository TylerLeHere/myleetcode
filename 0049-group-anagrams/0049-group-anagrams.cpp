class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> ans;

        for (string& s : strs){
            string buffer = s;
            sort(buffer.begin(), buffer.end());
            ans[buffer].push_back(s);
            // std::cout << s << std::endl;
        }
        vector<vector<string>> result;
        for (auto& entry: ans){
            result.push_back(entry.second);
        }
        return result;
    }
};