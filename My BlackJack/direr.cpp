#include "direr.h"
void direr1::Inft() const {
    cout << "(딜러의 이름은 " << Person::getName() << " 나이는 " << Person::getAge() << " 포인트는 " << Point << ")\n";
}

direr1::direr1() {
}

direr1::direr1(int _Point) {
    Point = _Point;
}

direr1::direr1(string _name, int _Point) :Person(_name) {
    Point = _Point;
}

direr1::direr1(string name, int age, int point) : Person(name, age) {
    this->Point = Point;
}



void direr1::setPoint(int Point) {
    this->Point = Point;

}
void direr1::Losepoint(int point)
{
    this->Point = -point;
}
void direr1::Winpoint(int point)
{
    this->Point = +point;
}

