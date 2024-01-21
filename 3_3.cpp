//**
 /* @brief：'成绩排序，成绩相同者按照键入顺序优先'
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
    string name;
    int score;
    int order;
};

bool compareAscending(Student x, Student y){
    if(x.score == y.score){
        return (x.order < y.order);
    } else{
        return (x.score < y.score);
    }
}

bool compareDescending(Student x, Student y){
    if(x.score == y.score){
        return (x.order < y.order);
    } else{
        return (x.score > y.score);
    }
}


int main(){
    int studentNumber;
    cin >> studentNumber;
    Student arr[studentNumber];
    for(int i = 0; i < studentNumber; ++i){
        cin >> arr[i].name >> arr[i].score;
        arr[i].order = i;
    }

    // 降序
    sort(arr, arr + studentNumber, compareDescending);
    cout << "从高到低" << " " << "成绩" << endl;
    for(int j = 0; j < studentNumber; j++){
        cout << arr[j].name << " " << arr[j].score << endl;
    }

    //升序
    sort(arr, arr + studentNumber, compareAscending);
    cout << "从低到高" << " " << "成绩" << endl;
    for(int k = 0; k < studentNumber; k++){
        cout << arr[k].name << " " << arr[k].score << endl;
    }

    return 0;
}
 