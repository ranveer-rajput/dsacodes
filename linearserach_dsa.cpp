
using namespace std;

//  void doubleOfGivenNo(int arr[],int size){
//     for(int i=0;i<size;i++) {
//      arr[i]=arr[i]*2;
//      cout<<arr[i];
        
//     }
//  }

 
//  int sumOfAllNo(int arr[],int size){
//      int sum=0;
//       for(int i=0;i<size;i++){
//           sum=arr[i]+sum;
//       }
//       return sum;
//  }

//  bool numberisFoundOrNot(int arr[],int size,int value){
//      for(int i=0;i<size;i++){
//          if(arr[i]==value){
//              return true;
//          }
//      }
//      return false;
     
//  }

// void countZerosAndOne(int arr[],int size){
//     int one=0;
//     int zero=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zero++;
//         }
//         else if(arr[i]==1){
//             one++;
            
//         }
//     }
//     cout<<"Zero:"<<zero;
//     cout<<endl;
//     cout<<"one:"<<one;

// }

// int minMum(int arr[],int size){
//     int minNum=INT_MAX;
//   for(int i=0;i<size;i++) {
//       if(arr[i]<minNum){
//           minNum=arr[i];
           
//       }
//   }
//   return minNum;
// }

int main()
{
    
    
 /******************************************    
    int arr[6]={9,5,7,8,6,4};
    int size=6;
  int num=  minMum(arr,size);
  cout<<num;
  ********************************************/ 
  
 /******************************************      
 int arr[6]={0,1,0,0,1,0};
 int size=6;
 countZerosAndOne(arr,size);
 ********************************************/   
    
  /******************************************  
 int arr[5]={2,3,4,5,6};
 int size=5;
 int value=7;
 int variable=numberisFoundOrNot(arr,size,value);
 if(variable==true){
     cout<<"Number is found";
 }
 else{
     cout<<"number is not found";
 }
  ********************************************/
    
 /*******************************
 int arr[5]={1,1,1,1,1};
 int size=5;
 int num= sumOfAllNo(arr,size);
 cout<<num;
 **********************************/
    
/*******************************
 doubleOfGivenNo
//   int arr[5]={1,1,1,1,1};
//   int size=5;
//   doubleOfGivenNo(arr,size);
**********************************/
    return 0;
}


