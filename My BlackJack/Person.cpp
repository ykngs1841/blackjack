#include "Person.h"


Person::Person() {
    
}

Person::Person(string name) {
    this->name = name;

}


Person::Person(string name, int age) {
    this->age = age;
    this->name = name;
}

string Person::getName() const
{
    
    return name;
}

void Person::setName(string name)
{
    this->name = name;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int age)
{
    this->age = age;
}