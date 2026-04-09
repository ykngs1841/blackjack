#include "dealer.h"
void Dealer::Inft() const {
    cout << "(딜러의 이름은 " << Person::getName() << " 나이는 " << Person::getAge() << " 포인트는 " << Point << ")\n";
}

Dealer::Dealer() {
}

Dealer::Dealer(int _Point) {
    Point = _Point;
}

Dealer::Dealer(string _name, int _Point) :Person(_name) {
    Point = _Point;
}

Dealer::Dealer(string name, int age, int point) : Person(name, age) {
    this->Point = Point;
}



void Dealer::setPoint(int Point) {
    this->Point = Point;

}
void Dealer::Losepoint(int point)
{
    this->Point = -point;
}
void Dealer::Winpoint(int point)
{
    this->Point = +point;
}

