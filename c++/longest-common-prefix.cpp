#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
using std::vector;

class Solution{

    public:
  string longestCommonPrefix(vector<string>& strs) {

    string prefix=strs[0];
    for(int j=0;j<strs[0].length();j++){
 for(int i=1;i<strs.size();i++){
  if(prefix!=strs[i].substr(0,prefix.length())){
  prefix=prefix.substr(0,(prefix.length())-1);
  }
    else if(prefix.size()==0){ 
          return "";}
      }
  
    } 
  
    return prefix;
  }

};
int main()
{
Solution s;
 vector<string> vect = {"flower","fow","flight"};
s.longestCommonPrefix(vect);
    return 0;
}