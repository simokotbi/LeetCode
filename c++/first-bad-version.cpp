#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;

class Solution{

    public:
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


   bool isBadVersion(int version){
       if(version==4){
        return true;   
       }
       return false;
   }
        int firstBadVersion(int n) {
       
        int low=1;
        
        int high=n;
     int theone;
     while(low<=high){
               int medium=low+(high-low)/2;
           if(isBadVersion(medium)){
               theone=medium;
               high=medium-1;
           }else{
               low=medium+1;
           }
         
        }
           return theone;
      }
    
};
int main(){
Solution s;
s.firstBadVersion(5);
    return 0;
}