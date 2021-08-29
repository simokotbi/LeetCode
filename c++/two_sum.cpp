#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int> &nums, int target) {
unordered_map<int, int> m;
vector<int> result;

    for (int i=0; i<nums.size(); i++)
    {
        if ( m.find(target-nums[i]) != m.end() )
        {
            result.push_back(m[target - nums[i]]);
            result.push_back(i);
            return result;
        }
        else
        {
            m[nums[i]] = i;
        }
    }
    
    return result;
}
};

int main()
{
    Solution s;
    vector<int> vect = {4,3,2};
    int target = 6;
    vector<int> result = s.twoSum(vect, 6);
    for (int i = 0; i < result.size(); i++)
        std::cout << result.at(i) << ' ';
    return 0;
}