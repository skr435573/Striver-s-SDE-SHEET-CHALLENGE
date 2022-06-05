#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int result = -1;
    map<int,int> m;
    int limit = floor(n/2);
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    
    for(int i=0; i<n;i++){
        if(m[arr[i]] > limit){
            return arr[i];
        }
    }
    
    return result;
}#include<bits/stdc++.h>
using namespace std;
void f(){}
int main() {
return 0;
}

