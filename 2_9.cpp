//**
 /* @brief：'输入两个数字L和M，分别代表树的数量和分组数量，返回去除分组之后剩余的树的数量'
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/

#include <iostream>
#include <cstdio>

using namespace std;

const int MAXFIELD=10001;  //空地规划总数

bool tree[MAXFIELD];  // 空地数量

// 思路：遍历数组，True有树
int main(){
    
    int L, M;

    while(scanf("%d %d", &L, &M) != EOF){
        //初始化树的数量
        for(int i=0; i<L; i++){
            tree[i] = true;
        }
        int treeNumber = L + 1;
        while(M--){
            int left, right;
            scanf("%d %d", &left, &right);
            for(int j=left; j<=right; j++){
                if(tree[j]==true){
                    tree[j] = false;
                    treeNumber -= 1;
                }
           }
        }
        printf("%d\n", treeNumber);
        
    }
    
    return 0;
}