#include <iostream>
#include <cstdio>
using namespace std;
int daytab[2][13] = {
{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
bool IsLeapYear(int year) {
return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int NumberOfYear(int year) {
//返回该年天数
if (IsLeapYear(year)) {
    return 366;
} else {
return 365;
}
}
int main() {
int year, month, day;
int number;
int caseNumber;
//记录天数
//组数
scanf("%d", &caseNumber);
while (caseNumber--) {
scanf("%d%d%d%d", &year, &month, &day, &number);
int row = IsLeapYear(year);
for (int j = 0; j < month; ++j) {
number += daytab[row][j];
}
number += day;
while (number > NumberOfYear(year)) {
//确定年
number -= NumberOfYear(year);
year++;
}
month = 0;
row = IsLeapYear(year);
while (number > daytab[row][month]) {
//确定月
number -= daytab[row][month];
month++;
}
day = number;
//确定日
printf("%04d-%02d-%02d\n", year, month, day);
}
return 0;
}