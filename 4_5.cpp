/*
* @brief：'统计字符'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>

using namespace std;

int count[128];
string alpahabet;

int main(){
    cin >> alpahabet;

    // 统计
    for(int i = 0; i < alpahabet.size(); ++i){
        count[alpahabet[i]]++;
    }

    // 输出
    for(int j = 0; j < 26; ++j){
        char alpha = 'A' + j;
        cout << alpha << " " << count['A'+ j ] << endl;
    }
    
    return 0;
}
