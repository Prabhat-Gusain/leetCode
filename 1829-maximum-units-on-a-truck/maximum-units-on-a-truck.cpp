class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
        [](vector<int>& a, vector<int>& b) {
            return a[1] > b[1];
        });

        int totalUnit=0;

        for(int i=0;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]<=truckSize)
            {
                totalUnit+=boxTypes[i][0] * boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else
            {
                totalUnit+=(boxTypes[i][1]*truckSize);
                break;
            }
        }
        return totalUnit;
    }
};