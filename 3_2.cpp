//**
/* @brief：'成绩排序'
/*
/* @author zhonghu e
/*
/* Contact: ezhonghu@qq.com
/*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Student{
    int number; // 学生数量
    int score; // 成绩
};

const int MAXSIZE = 100;

Student arr[MAXSIZE];
int studentNumber;

int i = 0;

// x比y小吗? true则x,y | false则y,x
bool compare(Student x, Student y){
    if(x.score == y.score){
        return x.number < y.number;
    }else{
        return x.score < y.score;
    }
}

int main(){
    cin >> studentNumber;
    for(int i = 0; i < studentNumber; ++i){
        cin >> arr[i].number >> arr[i].score;
    }
    sort(arr, arr+studentNumber, compare);
    for(int j = 0; j< studentNumber; ++j){
        cout << arr[j].number << " " << arr[j].score << endl;
    }
   
   
   return 0;
}