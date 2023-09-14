#include <iostream>
#include <vector> 

using namespace std;



void rotate(vector<int>& arr,int k){
     int n=arr.size();
     vector<int>newArr(n);
     for(int index=0;index<n;index++){
         int newIndex=(index+k)%n;
         newArr[newIndex]=arr[index];
     }
     arr=newArr;
}
int main() {
  
  vector<int>arr={1,2,3,4,5,6,7};
  int size=arr.size();
  int k=3;
  rotate(arr,k);
   for(int i=0;i<size;i++) {
      cout<<arr[i];
   }
    
    
    return 0;
}
