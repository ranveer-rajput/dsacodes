   
// #include <iostream>

// using namespace std;

// int uniqNum(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main()
// {
//     int arr[7]={10,20,10,30,40,30,40};
//     int size=7;
    
// int ans=    uniqNum(arr,size);
// cout<<ans;
//     return 0;
// }



//  2.print pair of all numbers

// #include <iostream>

// using namespace std;
// // void pairNumber(int arr[],int size){
// //     for(int i=0;i<size;i++){
// //         for(int j=0;j<size;j++){
// //             cout<<arr[i]<<" "<<arr[j];
// //         }
// //     }
// // }

// int main()
// {
// int arr[3]={10,20,30};
// int size=3;
// // pairNumber(arr,size);
// // for(int i=0;i<size;i++){
// //     for(int j=0;j<size;j++){
// //         cout<<arr[i]<<", "<<arr[j];
// //     }
// // }

//     return 0;
// }
 

 // 3.print all zero's and one's from list in continue

// #include <stdio.h>
// #include <iostream>
// using namespace std;
// void zeroOne(int arr[],int size){
//     int zero=0;
//     int one=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             zero++;
//         }else if(arr[i]==1){
//             one++;
//         }
   
//       }
 
     
//     int index=0;
//     while(zero--){
//         arr[index]=0;
//         index++;
//     }
//     while(one--){
//         arr[index]=1;
//         index++;
//     }
//      for(int i=0;i<size;i++){
//      cout<<arr[i];
//  }
// }
// int main()
// {
//  int arr[8]={0,1,0,1,0,0,1,1};
//  int size=8;
//  zeroOne(arr,size);

//     return 0;
// }


// 4 all negativenumbers in left side using sorting

// #include <iostream>
// using namespace std;
// void moveAllNegToLeft(int arr[],int size){
//     int low=0;
//     int high=size-1;
//     while(low<high){
//         if(arr[low]<0){
//             low++;
//         }
//         else if(arr[high]>0){
//             high--;
//         }
//         else{
//             swap(arr[low],arr[high]);
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
    
    
// }

// int main()
// {
    
    
// int arr[6]={-1,4,9,-3,5,-7} ;
// int size=6;

// moveAllNegToLeft(arr,size);

    

//     return 0;
// }

