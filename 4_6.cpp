/*
* @brief：'模式匹配算法（KMP）'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>
#include <vector>

// NEXT数组创建
std::vector<int> buildPartialMatchTable(const std::string &pattern){
    int m = pattern.length();
    std::vector<int> lps(m, 0);  // 长度为m的数组，初始化为0 (longest proper prefix which is also suffix)

    int sameMaxLen = 0;
    int i = 1;

    while(i < m){
        if(pattern[i] == pattern[sameMaxLen]){  // 各个字母前缀相同的最大值
            sameMaxLen++;             
            lps[i] = sameMaxLen;
            i++;
        } else {
            // 不匹配
            if(sameMaxLen != 0){
                // 通过lps数组回退
                sameMaxLen = lps[ sameMaxLen -1 ];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// KMP搜索算法
void KMPSearch(const std::string &text, const std::string &pattern){
    int n = text.length();
    int m = pattern.length();

    std::vector<int> lps = buildPartialMatchTable(pattern);

    int i = 0; // text index
    int j = 0; // pattern index

    while (i < n) {
        if (pattern[j] == text[i]) {
            j++;
            i++;
        }
    
        if ( j == m) {
            std::cout << "Found pattern at index " << i - j << std::endl;
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            // 不匹配，找lps表
            if (j != 0){
                j = lps[j - 1];
            } else {
                i = i + 1;
            }
        }
    }
}


int main(){
std::string text = "ABABAABACDABABCABAB";
    std::string pattern = "ABABCABAB";
    KMPSearch(text, pattern);
    return 0;
}