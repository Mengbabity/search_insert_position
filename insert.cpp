# search_insert_position
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int> nums, int target) {
		int i = 0, j = 0;
		int n = nums.size();

		for (i = 0; i < n; i++)
			if (nums[i] == target)
			{
			    cout << i << endl;
			    return i;
			}
				

		if (nums[0]>target)
			return 0;
		if (nums[n-1] < target)
			return n;

		for (j = 0; j < n; j++)
			if (target>nums[j] && target < nums[j + 1])
			{
				cout << j+1 << endl;
				return j+1;
			}


	}
};

void main()
{
	Solution s;
	s.searchInsert({ 1, 3, 5, 7 }, 6);

}
