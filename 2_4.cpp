#include <iostream>
#include <cstdio>

using namespace std;

//输出梯形
//因为要求输出靠右，所以左侧是通过空格进行填充的
//遍历整个大的矩形方块
int trapezoid(int h){
    int high=h;
    int width=h + (h-1)*2;  //整个大矩形的宽（梯形底边）
    for(int i=0; i<high; ++i){  //高
           for(int j=0; j<width; ++j){  //宽
                if(j < (width - (2*i + high))){
                    cout << " ";
                }else{
                    cout << "*";
                }
            }
            cout << endl;
    }
    return 0;
}

int main(){
    int h;
    // cin >> h;
    while(scanf("%d", &h) !=EOF){  //EOF代表错误,只要输入不错，才能进入循环
        trapezoid(h);
    }
}