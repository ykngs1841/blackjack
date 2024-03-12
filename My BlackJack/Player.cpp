#include<iostream>
#include "Player.h"

void Player::Inft() const {
    
    cout << "(����� �̸��� " << name << " ���̴� " << age << " ����Ʈ�� " << Point << ")\n";
}

Player::Player() {
}

Player::Player(int _Point) {
    Point = _Point;
}

Player::Player(string _name, int _Point) :Person(_name) {
    Point = _Point;
}

Player::Player(string name, int age, int point) : Person(name, age) {
    this->Point = Point;
}


int Player::getPoint() const {
    return Point;
}

void Player::setPoint(int point) {
    this->Point = point;

}


void Player::changePoint(int point) {
    this->Point += Point;
}

int Player::clearCard()
{
    myCard.clear();
    return 0;
}

int Player::addCard(Card add)
{
    myCard.push_back(add);
    return 0;
}

void Player::showMyCard()
{
    int temp = 0;
    for (int i = 0; i < myCard.size(); i++)
    {
        myCard[i].show();
        temp = myCardPoint();
    }
    cout << " " << temp;
}
int Player::myCardPoint()
{
    int ret = 0;
    for (int i = 0; i < myCard.size(); i++)
    {
        int temp = myCard[i].CardPoint();

        if (temp > 10)
        {
            ret = ret + 10;
        }
        else
        {
            ret = ret + temp;
        }
    }

    //A�� ����Ʈ�� ����.(1�Ǵ� 11)  
    for (int j = 0; j < myCard.size(); j++)
    {
        int temp2 = myCard[j].CardPoint();
        if (temp2 == 1)
        {
            int temp3 = 0;
            for (int k = 0; k < j; k++)
            {
                temp3 = temp3 + myCard[k].CardPoint();
            }
            if (temp3 < 11)
            {
                ret = ret + 10;
            }
        }
    }

    return ret;

}


bool Player::playCard(DeckofCards* deck) {
    bool ret = false;  //burst;  

    int inputNumber;

    while (1) {
        cout << getName() << " : ";

        showMyCard();
        cout << "\n";

        if (myCardPoint() > 21) {

            cout << "BURST..." << endl;
            //����Ʈ ����..  
            return false;
        }

        cout << getName() << "�� ";
        cout << " ī�带 �� �����ðڽ��ϱ�? ( 1 - �� �޴´�. other-end) ";
        cin >> inputNumber;
        if (inputNumber != 1)
            break;


        addCard(deck->getCard());
        //ī�带 �ϳ� �޴´�.   


    }
    showMyCard();
    return true;
}