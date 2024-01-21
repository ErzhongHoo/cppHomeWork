/*
* @brief：'特殊乘法'
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
    string str1, str2;
    cin >> str1 >> str2;

    int answer = 0;

    for(int i = 0; i < str1.size(); ++i){
        for(int j = 0; j < str2.size(); ++j){
            answer = answer + (str1[i] - '0') * (str2[j] - '0');  // ASCLL中，字母减'a'，数字减0
        }
    }

    cout << answer << endl;
    
    return 0;
}