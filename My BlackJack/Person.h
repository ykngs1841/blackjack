#pragma once
#include<iostream>
using namespace std;
class Person {
protected:
    string name="Jocker";  //사람의 이름.   
    int age=35;    //사람의 나이   
public:
    Person();    //사람을 생성함.. 이름 나이 입력 없이..   
    Person(string name);  //사람을 생성함.. 이름만 가지고   
    Person(string name, int age);

    string getName() const;    //사람의 이름을 돌려줌.   
    int getAge() const;      //사람의 나이를 돌려줌.   
    void setName(string name);  //사람의 이름을 설정함.   
    void setAge(int age);    //사람의 나이를 설정함.   
    virtual void Inft() const {}//  !!Player의 Inft와 다형성 사용!!
};