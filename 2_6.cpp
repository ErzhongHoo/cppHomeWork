//**
 /* @brief：'输入年 月 日，返回这一天是当年的第几天'
 /*
 /* @author zhonghu e
 /*
 /* Contact: ezhonghu@qq.com
 /*/
#include <iostream>

using namespace std;

//以空间换时间
int daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

//0平年, 1闰年
bool isLeapYear(int year){
    return (year%4==0 && year%100!=0) || (year%400==0);
}


int main(){
    int year, month, day;
    cin >> year >> month >> day;

    int number=0;  // 天数
    int row = isLeapYear(year);
    for(int j=0; j<month; ++j){
        number += daytab[row][j];
    }
    number += day;
    cout << number << endl;

    return 0;
}
