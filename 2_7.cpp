/**
 * @brief：输入年份和该年的第几天，返回当天的日期。
 *
 * @author zhonghu e
 *
 * Contact: ezhonghu@qq.com
 */
#include <iostream>
#include <cstdio>

using namespace std;

int daytab[2][13]={
    {0, 31, 30, 28, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 30, 29, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

bool isLeapYear(int year){
    return ((year%4==0 && year!=0) || year%4==0);
}


int main(){
    int year, number;
    cin >> year >> number;

    int row = isLeapYear(year);
    int month=0;
    while(number > daytab[row][month]){
        number -= daytab[row][month];
        month++;
    }
    int day = number;
    printf("%04d-%02d-%02d\n", year, month, day);

    return 0;
}
