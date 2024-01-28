/*
* @brief：'动物收养领养问题'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

struct animal{
    int number;  // 动物编号int order;
    int order;  // 进入次序
    animal(int n, int o): number(n), order(o){} // 构造函数，相当于把n
};


int main(){
    queue<animal> cats;
    queue<animal> dogs;
    int n;
    int order = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        int method, type;
        scanf("%d%d", &method, &type);
        // 收养模式
        if(method == 1){
            if(type > 0){  // 收养狗
                dogs.push(animal(type, order++));
            } else {  // 收养猫
                cats.push(animal(type, order++));
            }
        } else {
            // 先进先出模式，不考虑动物类型
            if (type == 0 && !dogs.empty() && !cats.empty()){  // 猫狗都有
                if (dogs.front().order < cats.front().order){
                    printf("%d", dogs.front().number);
                    dogs.pop();
                } else {
                    printf("%d", cats.front().number);
                    cats.pop();
                }
            } else if(type == 0 && !dogs.empty() && cats.empty()){  // FIFO有狗没猫
                printf("%d", dogs.front().number);
                dogs.pop();
            } else if(type == 0 && dogs.empty() && !cats.empty()){  // FIFO有猫没狗
                printf("%d", dogs.front().number);
                dogs.pop();
            } else if(type == 1 && !dogs.empty()){  // 指定要狗且有狗
                printf("%d", dogs.front().number);
                dogs.pop();
            } else if(type == -1 && !cats.empty()){  // 指定要猫且有猫
                printf("%d", cats.front().number);
                cats.pop();
            }
        }
    }
    printf("\n");
    return 0;
}