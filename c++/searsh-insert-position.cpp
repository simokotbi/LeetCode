#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;

class Solution{

    public:

 int searchInsert(vector<int>& nums, int target) {
 
int a=0;//the start
int b=nums.size()-1;//the end
int position;
while(a<=b){
    int k=(a+b)/2;
    if(nums[k]==target){
        return k;
    }
    else if(target>nums[k]){
        a=k+1;
    }else if(target<nums[k]){
        b=k-1;
    }else if(nums[k]<target&&target<nums[k+1]){
        return position=k+1;
    }
    return a;
} 
 }
};

int main()
{
Solution s;
 
 vector<int> vect = {1};

s.searchInsert(vect,2);
    return 0;
}