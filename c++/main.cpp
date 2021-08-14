#include <iostream>
using namespace std;
class Base{
    int x;
 public:

    Base(){};
    // Base(int a):x{a}{};
    int iszeroindex;
      void appendnewzero(int iszeroindex,int arr[]){
    
for( int ii=sizeof(arr)-1;ii>=iszeroindex;ii--){
    
    arr[ii]=arr[ii-1];
     arr[iszeroindex-1]=0;

}
   }
   void findzero(int t[]){
   for(int i=0;i<sizeof(t);i++){
       
        if (t[i]==0)
        {
            appendnewzero(i,t);
             cout<<t[i]<<endl;
        }
       
  
   }
 }
    int get(){return this->x;}
    int set(int a){return this->x=a+20;}
};
int main(){
    // std::cout << "Hello World!" << std::endl;
     Base b1;
    // Base b2(10);
    // b1.set(20);
    // cout<<b1.get()<<endl;
    int arr[]={1,2,0,3,4,5,0,6,7,0,8,9};
    b1.findzero(arr);
   return 0;
}