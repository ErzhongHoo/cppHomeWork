//**
 /* @brief：'无输入，输出等于自身9倍的反序数'
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/
#include <iostream>
using namespace std;


int reverseN(int N){
    int revN = 0;
    while(N!=0){
        revN = revN*10 + (N%10);
        N = N/10;
    }
    return revN;
}

int main(){
    for(int N=1000; N<=9999; N++){
        if(N*9==reverseN(N)){
            cout << N << endl;
        }
    }
    return 0;
}