#pragma once
#include<iostream>
using namespace std;
class Person {
protected:
    string name="Jocker";  //����� �̸�.   
    int age=35;    //����� ����   
public:
    Person();    //����� ������.. �̸� ���� �Է� ����..   
    Person(string name);  //����� ������.. �̸��� ������   
    Person(string name, int age);

    string getName() const;    //����� �̸��� ������.   
    int getAge() const;      //����� ���̸� ������.   
    void setName(string name);  //����� �̸��� ������.   
    void setAge(int age);    //����� ���̸� ������.   
    virtual void Inft() const {}//  !!Player�� Inft�� ������ ���!!
};