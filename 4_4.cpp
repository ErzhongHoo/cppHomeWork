/*
* @brief：'统计字符'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int number[128];

int main(){
    string str1, str2;  //str1<5, str2<80
    while(getline(cin, str1)){
        if(str1 == "#"){
            break;
        }

        getline(cin ,str2);

        // 初始化
        memset(number, 0, sizeof(number));
        
        for(int i = 0; i < str2.size(); ++i){
            number[str2[i]]++;  // str2中，统计所有字母出现的次数
        }
        
        for (int j = 0; j < str1.size(); ++j) {
            printf("%c %d\n", str1[j], number[str1[j]]);
            }

    }
    
    return 0;
}