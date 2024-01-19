/**
 * @brief：输入要输入几组数据，再输入某天日期和往后推的第几天，返回推算后的日期。
 *
 * @author zhonghu e
 *
 * Contact: ezhonghu@qq.com
 */
#include <iostream>
#include <cstdio>

using namespace std;

int daytab[2][13]={
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool isLeapYear(int year){
    return ((year%4==0 && year!=0) || year%4==0);
}

int main(){
    int m, year, month, day, number;
    cin >> m;
    while(m!=0){
    cin >> year >> month >> day >> number;
    int row = isLeapYear(year);
    while(number > daytab[row][month]){
        number -= daytab[row][month];
        month += 1;
    }
    day = day + number;
    printf("%04d-%02d-%02d\n", year, month, day);
    m--;
    }

}