class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, bool> map;
        int count = 0;
        for (const string& item : arr) {
            if (map.find(item) != map.end()) {
                map[item] = false;  // Mark as not distinct
            } else {
                map[item] = true;   // Mark as distinct
            }
        }
        for (const string& item : arr) {
            if (map[item]) {  // Check if it's distinct
                count++;
                if (count == k) {
                    return item;
                }
            }
        }
        return "";
    }
};
