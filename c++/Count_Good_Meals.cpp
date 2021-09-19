#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
      //find if it is a power of 2:
        int count=0;
        int number;
        int j=deliciousness.size()-1;
        int i=0;
          while (j!=0)
          {
             number=deliciousness[i]+deliciousness[j];
                if(number==1){count++;}
         
        while(number % 2==0&&number!=0&&i<j){
             number/=2;
             if(number==1){
                 count++;
                
             }
         }
         if(i==j-1){i=0;j--;}else{i++;}
          }
           
         return count;
    }

};
int main(){
Solution s;
 vector<int> vect = {0,1,18,12,0,1,20,22};
s.countPairs(vect);

    return 0;
}