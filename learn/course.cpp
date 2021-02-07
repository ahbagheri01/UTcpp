//
// Created by asus on 2/7/2021.
//
#include <iostream>
using namespace std;
#include "course.h"
course::course(string _name,int _price){
    this->name = _name;
    this->price = _price;
}
course:: course(){
    cout<<"hi";
}