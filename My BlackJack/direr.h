#pragma once
#include<iostream>
#include<vector>
#include"Card.h"
#include"Person.h"
using namespace std;

class direr1 :public Person {  //����� ���Ѱ��� ��� �޴´�.   
private:

    int Point=100000;        //���ӿ� ���Ǵ� ���̹� �Ӵ�? (�ʱ⿡ �󸶷� �ұ��? )     

public:
    direr1();
    direr1(int Point);
    direr1(string name, int Point);
    direr1(string name, int age, int Point);  

    void setPoint(int Point);  //����Ʈ�� ���� 
    void Losepoint(int point);
    void Winpoint(int point);
    virtual void Inft() const; // !!Person�� Inft�� ������ ���!!
};

