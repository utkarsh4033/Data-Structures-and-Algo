class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int val = INT_MIN;
        int sum;
        for(int i =0; i<accounts.size();i++){
            sum= 0;
        for(int j =0;j<accounts[0].size();j++)
        {
            sum += accounts[i][j];
        }
        val = max(val,sum);
    }
    return val;
    }
};