class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for (int i = 0; i < words.size(); i++) {
            int sum = 0;
            for (int j = 0; j < (int)words[i].size(); j++) {
                sum += weights[words[i][j] - 'a'];
            }
            int result = sum % 26;
            ans += (char)('z' - result);
        }
        return ans;
    }
};