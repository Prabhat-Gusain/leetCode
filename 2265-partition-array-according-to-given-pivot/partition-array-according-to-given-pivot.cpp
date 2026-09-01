class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>arr3;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                arr1.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                arr2.push_back(nums[i]);
            }
            else
            {
                arr3.push_back(nums[i]);
            }
        }
        vector<int> result;

        for (int num : arr1) {
            result.push_back(num);
        }

        for (int num : arr2) {
            result.push_back(num);
        }

        for (int num : arr3) {
            result.push_back(num);
        }

        return result;
    }
};