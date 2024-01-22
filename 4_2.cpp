/*
* @brief：'简单密码翻译'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;


int main(){
    string str;
    while(getline(cin, str)){ // 获取一整行信息（空格不跳过）
    for(int i = 0; i < str.size(); ++i){
        if(str[i] == 'z' || str[i] == 'Z'){
            str[i] -= 25;
        } else if(str[i] <= 'Y' && 'A' <= str[i]
                || str[i] <= 'y' && 'a' <= str[i]){
            str[i]++;
        }
    }

    cout << str << endl;
    }
    
    return 0;
}