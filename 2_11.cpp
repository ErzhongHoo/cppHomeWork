//**
 /* @brief：'输入数n(1<=n<=10000)
 /*          如果是偶数，那么把n砍掉一半
 /*          如果是奇数，那么把n变成3n+1后砍掉一半
 /*          直到该数变为1为止
 /*          返回n变为1所需的步数
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/

 #include <iostream>
 #include <cstdio>
 
 using namespace std;
 
 
 int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        if(n == 0){
            break;
        }
        int step = 0;
        while(n != 1){
            if(n%2 == 0){
                n = n/2;
            }else{
                n = (3*n + 1)/2;
            }
            step++;
        }
        printf("%d\n", step);
    }
    
    return 0;
 }