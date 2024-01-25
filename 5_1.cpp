/*
* @brief：'因子和等于本身称为完数；因子和大于本身称为盈数'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> numberE;
vector<int> numberG;

int Sum(int x){
    int sum = 0;
    for(int i = 1; i < x; ++i){
        if(x % i == 0){  // 能整除，即为因子
            sum += i;
        }
    }
    return sum;
}


int main(){
    for(int i = 2; i < 60; ++i){
        if(i == Sum(i)){  // 完数
            numberE.push_back(i);
        } else if(i < Sum(i)){  // 盈数
            numberG.push_back(i);
        }
    }

    printf("E:");
    for (int i = 0; i < numberE.size(); ++i){
        printf(" %d", numberE[i]);
    }

    printf("\n");
    printf("G:");
    for (int i = 0; i < numberG.size(); ++i){
        printf(" %d", numberG[i]);
    }

    return 0;
}
   
   
   
   
   
   