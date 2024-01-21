/*
* @brief：''
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/


#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXSIZE = 100;


// 二分查找
bool BinarySearch(int arr[], int target){
   int n = sizeof(arr) / sizeof(arr[0]);
   int left = 0;
   int right = n - 1;

   while(left <= right){
       int middle = (left + right) / 2;
       int middle = left + (right + left) / 2;
       if(arr[middle] < target){
           left = middle + 1;
       } else if(target < arr[middle]) { 
           right = middle - 1;
       } else{
           return true;
       }
   }
   return false;
}

int main(){
    int arr[MAXSIZE];
    int targetArr[MAXSIZE];
    int target;
    int n, m;

   // 原数组
   cin >> n;
   for(int i = 0; i < n; ++i){
       cin >> arr[i];
   }

   // 需要比较的数组
   cin >> m;
   for(int j = 0; j < m; ++j){
       cin >> targetArr[j];
   }

   sort(arr, arr + n); // 二分查找要求原表有序
   for(int k = 0; k < m; ++k){
       if(BinarySearch(arr, targetArr[k])){
           cout << "YES" << endl;
       }else{
           cout << "NO" << endl;
       }
   }  
   return 0;
}