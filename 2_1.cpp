//2.1
#include <iostream>

int main(){
    for(int a=0; a<=9; a++){
        for(int b=0; b<=9; b++){
            for(int c=0; c<=9; c++){
                int matched = (a*100 + b*10 +c )+(b*100 + c*10 + c);
                if(matched == 532){
                    std::cout << a;
                    std::cout << b;
                    std::cout << c << std::endl;
                    // printf('%d %d %d\n', a, b, c);
                }
            }
        }
    }
    return 0;
}