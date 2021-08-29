#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;
class Solution {
public:

 int removeDuplicates(vector<int>& nums) {
//    int count=0;
//    int n=nums.size();
//    int prev=nums[n - 1];
//       for(int i=n-2;i>=0;i--){
//           if(nums[i]==nums[i+1]){
               
//             ++count;
//             int cur=nums[i];
//             nums[i+1]=prev;
//             prev=cur;n=n-1;
//           }
//       } for(int j=0;j<=n;j++){
//           cout<<"array:"<<nums[j]<<"\n";
//       }
      
//        cout<<" the number removed is:"<<count<<"n is:"<<n<<"\n";
//   //  cout<<" nums size:"<<nums.size()<<"n is:"<<n<<"\n";
//       return count; 
  int n=nums.size();
int count=1;
 for(int i=1;i<n;i++){
          if(nums[i-1]!=nums[i]){
            nums[count]=nums[i];
              count++;
          }
      } 


    }
};

int main()
{
Solution s;
vector<int> vect = {0,0,1,1,1,2,2,3,3,4};
s.removeDuplicates(vect);
    return 0;
}