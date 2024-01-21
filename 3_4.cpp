//**
 /* @brief：'查找算法'
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/

 #include <iostream>
 #include <cstdio>
 
 using namespace std;
 
 int main(){
    int n, x;
    int answer = -1;

    cout << "请输入n" << endl;
    cin >> n;
    int arr[n];

    cout << "请输入数组" << endl;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    
    cout << "请输入x" << endl;
    cin >> x;
    for(int j = 0; j < n; ++j){
        if(x == arr[j]){
            answer = j;
            break;
        }
    }
    cout << answer;
    
    return 0;
 }