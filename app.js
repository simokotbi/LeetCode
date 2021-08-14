

const arr=[1,2,0,3,4,5,0,6,7,0,8,9];
arr.length+=1;
    for(ii=0;ii<arr.length;ii++){
        console.log("table 1");
        console.log(arr[ii]);
        if(arr[ii]==0){
             iszeroindex=ii;
             
        }
        
    }
for( i=arr.length-1;i>=iszeroindex;i--){
    console.log("table 2");
    arr[i]=arr[i-1];
     arr[iszeroindex-1]=0;
console.log(arr[i])
}
