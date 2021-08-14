#include <iostream>
#include <vector>

using namespace std;
using std::vector;
   
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target&& i!=j)
                {
                    // int index =std::distance(nums.begin(), nums.end());
                    vect.push_back(i);
                    break;
                }
            }
        }
        return vect;
    }
};

int main()
{
    Solution s;
    vector<int> vect = {3,2,4};
    int target = 6;
    vector<int> result = s.twoSum(vect, 6);
    for (int i = 0; i < result.size(); i++)
        std::cout << result.at(i) << ' ';
    return 0;
}