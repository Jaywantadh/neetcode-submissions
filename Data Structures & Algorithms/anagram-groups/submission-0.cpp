class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (const string& s : strs){
            string sortedKey = s;
            sort(sortedKey.begin(), sortedKey.end());

            anagramGroups[sortedKey].push_back(s);
        }

            vector<vector<string>> results;
            results.reserve(anagramGroups.size());

            for (auto& pair : anagramGroups){
                results.push_back(move(pair.second));
            }

        
        return results;
    }
};
