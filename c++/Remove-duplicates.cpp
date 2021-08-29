#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;
class Solution {
public:

 int removeDuplicates(vector<int>& nums) { 
  int n=nums.size();
int count=1;
 for(int i=1;i<n;i++){
          if(nums[i-1]!=nums[i]){
            nums[count]=nums[i];
              count++;
          }
      } 
      
for(int j=0;j<n-count;j++){
  cout<<"array: "<<nums[j]<<"length:"<<n-count<<"\n";
}
return count;
    }
};

int main()
{
Solution s;
vector<int> vect = {0,0,1,1,1,2,2,3,3,4};
s.removeDuplicates(vect);
    return 0;
}