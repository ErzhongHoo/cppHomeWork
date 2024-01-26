/*
* @brief：'约瑟夫问题，初始化n个孩子，从第p个孩子开始为1，依次向后m个位置，第m个位置的孩子退出，直到孩子数量为0'
*
* @author zhonghu e
*
* Contact: ezhonghu@qq.com
*/

#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;


int main(){
    int n, p, m;
    while(scanf("%d%d%d", &n, &p, &m)){
        if(n == 0 && m == 0 && p == 0){
            break;
        }

        // 队列初始化
        queue<int> children;
        for(int i = 1; i <= n; ++i){
            children.push(i);
        }

        for(int i = 1; i < p; ++i){  // 使p成为队首
            children.push(children.front()); 
            children.pop();  // 上一步仅仅是获得了一个复制品，并插入了队尾，所以队头要出队才和原始队列一致
        }


        while(!children.empty()){
            for(int i = 1; i < m; ++i){
                children.push(children.front());  //把第m个成为队首
                children.pop();
            }
            if (children.size() == 1){
                printf("%d\n", children.front());
            } else {
                printf("%d,", children.front());
            }
            children.pop();  // 去掉队首（即上一个m位置的元素）
        }

    }
    return 0;

}