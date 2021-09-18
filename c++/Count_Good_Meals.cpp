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
        for(int i=0;i<deliciousness.size();i++){
            for(int j=i+1;j<deliciousness.size();j++){
         number=deliciousness[i]+deliciousness[j];
         if(number!=1){
        while(number % 2==0 && number!=1){
             number/=2;
             if(number==1){
                 count++;
                 
             }}
        }else{count++;}
        }
         }return count;
    }

};
int main(){
Solution s;
 vector<int> vect = {0,1,18,12,0,1,20,22};
s.countPairs(vect);

    return 0;
}