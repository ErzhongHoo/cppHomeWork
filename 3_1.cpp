//**
 /* @brief：'调用排序算法'
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/

 #include <iostream>
 #include <cstdio>
 #include <algorithm>
 
 using namespace std;
 
 const int MAXSIZE = 100;
 
 int main(){
    
    int arr[MAXSIZE];
    int size;
    cin >> size;
    for(int i = 0; i < size; ++i){
        cin >> arr[i];
    }
    sort(arr, arr+size);
    for(int j = 0; j < size; j++){
        cout << arr[j] << " " ;
    }
    
    return 0;
 }