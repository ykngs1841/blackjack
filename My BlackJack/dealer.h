#pragma once
#include<iostream>
#include<vector>
#include"Card.h"
#include"Person.h"
using namespace std;

class direr1 :public Person {  //사람에 대한것을 상속 받는다.   
private:

    int Point=100000;        //게임에 사용되는 사이버 머니? (초기에 얼마로 할까요? )     

public:
    direr1();
    direr1(int Point);
    direr1(string name, int Point);
    direr1(string name, int age, int Point);  

    void setPoint(int Point);  //포인트를 설정 
    void Losepoint(int point);
    void Winpoint(int point);
    virtual void Inft() const; // !!Person의 Inft와 다형성 사용!!
};

