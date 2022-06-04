#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    if(n==1) return;
    int start = 0;
    int end = n-1;
    int mid = start;
    
    while(mid<=end){
        
        if(arr[mid] == 0){
            swap(arr[start] , arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid] ,arr[end]);
            end--;
        }
    }
  
}
