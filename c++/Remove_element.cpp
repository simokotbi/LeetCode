#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;

class Solution{

    public:

 int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[count]=nums[i];
                count++;
            }
        }return count;
        cout<<"count : "<<count<<"\n";
    }
};
int main(){
Solution s;
vector<int> vect = {2};
s.removeElement(vect,3);

return 0;
}