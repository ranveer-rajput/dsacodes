//bainary search
 
#include <iostream>

using namespace std;

int bainarySearch(int arr[],int size,int target){
     int start=0;
     int end=size-1;
     int mid=(start+end)/2;
      while(start<=end){
      
          if(arr[mid]==target){
              return mid;
          }
          else if(arr[mid]<target){
              start=mid+1;
          }
          else if(arr[mid]>target){
              end=mid-1;
          }
         mid=(start+end)/2;
      }
     return -1;
}

int main()
{
   int arr[]={10,20,30,40,50,60,70,80,90};
   int size=9;
   int target=90;
 int result=  bainarySearch(arr,size,target);
   if(result==-1){
       cout<<"target not found";
       
   }
   else{
       cout<<"target found at:"<<result;
   }

    return 0;
}



/******************************************************************************
 find firstOccurance using binary search
*******************************************************************************/
#include <iostream>

using namespace std;
int firstAccucrance(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(target==arr[mid]){
            ans=mid;
            e=mid-1;
            
        }
        else if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
    }
    return ans;
    
}

int main()
{
  int arr[]={10,30,30,30,40,50,60};
  int size=7;
  int target=30;
 int result= firstAccucrance(arr,size,target);
 
  if(result==-1){
      cout<<"target not found";
  }
  else{
      cout<<"the firstAccucrance found at:"<<result;
  }

    return 0;
}

/******************************************************************************
 find lastAccurance using binary search
*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int lastAccurance(vector<int>& arr,int target){
    int size=arr.size();
    int s=0;
    int e=size-1;
    int ans=-1;
    
   while(s<=e){
       int mid=(s+e)/2;
      if(target==arr[mid]){
          ans=mid;
          s=mid+1;
      } 
      else if(target>arr[mid]){
           s=mid+1;
      }
      else if(target<arr[mid]){
          e=mid-1;
      }
      
      
   }
   return ans;
    
}

int main()
{
  vector<int> arr={10,20,30,30,30,30,40,40,60,70};
  int target=40;
  int result=lastAccurance(arr,target);
  if(result==-1){
      cout<<"target not found";
  }
 else{
     cout<<"last accurance is:"<<result;
 }
   

    return 0;
}


/******************************************************************************
 total count of accurance using binary search
*******************************************************************************/
#include <iostream>

using namespace std;

int firstAccucrance(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (target == arr[mid]) {
            ans = mid;
            e = mid - 1;
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else if (target < arr[mid]) {
            e = mid - 1;
        }
    }
    return ans;
}

int lastAccucrance(int arr[], int size, int target) {
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (target == arr[mid]) {
            ans = mid;
            s = mid + 1;
        } else if (target > arr[mid]) {
            s = mid + 1;
        } else if (target < arr[mid]) {
            e = mid - 1;
        }
    }
    return ans;
}

int totalAccurance(int arr[], int size, int target) {
    int first = firstAccucrance(arr, size, target);
    int last = lastAccucrance(arr, size, target);
    int total = last - first + 1;
    return total;
}

int main() {
    int arr[] = {10, 30, 30, 30, 30, 50, 60};
    int size = 7;
    int target = 30;
    int total = totalAccurance(arr, size, target);
    
    if (total == 0) {
        cout << "Target not found";
    } else {
        cout << "Total occurrences of " << target << " is: " << total << endl;
    }

    return 0;
}

