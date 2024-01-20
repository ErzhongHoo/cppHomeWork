//**
 /* @brief：'九宫格输入需要按几次?输入花费1个时间单位，等待花费2个时间单位'
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/

 #include <iostream>
 #include <cstdio>
 
 using namespace std;
 
 // 九宫格输入法中，26个字母分别需要按的次数
 int keytab[26] = {
    1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4
 };
 
 int main(){
    string str;
    while (cin >> str){
        int time = 0;
        for(int i = 0; i < str.size(); ++i){
            // time += keytab[str[i]- 'a'];
        }
    }
    
    
    return 0;
 }