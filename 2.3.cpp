#include <iostream>

using namespace std;

int reverseNumber(int number){
    int reversed = 0;
    while(number !=0){
        reversed = reversed*10 + number%10;
        number = number/10;
    }
    return reversed;
}


int sqrNumber(int number){
    int sqred = 0;
    sqred = number * number;
    return sqred;
}

int main(){
    for(int number=0; number<=256; number++){
        if(sqrNumber(number)==reverseNumber(sqrNumber(number))){
            cout << number << endl;
        }
    }
    return 0;
}