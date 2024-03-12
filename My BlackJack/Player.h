#pragma once

#include<iostream>
#include<vector>
#include"Card.h"
#include"Person.h"
using namespace std;

class Player :public Person {  //사람에 대한것을 상속 받는다.   
private:

    int Point;        //게임에 사용되는 사이버 머니? (초기에 얼마로 할까요? )  
    vector <Card> myCard;  //가지고 있는 카드   

public:
    Player();
    Player(int Point);
    Player(string name, int Point);
    Player(string name, int age, int Point);

    int getPoint() const;    //포인트가 얼마나 남았나 확인..   
    void setPoint(int point);  //포인트를 설정  
    void changePoint(int point);//포인트를 변경.. 구입, 차감을 위하여 
    virtual void Inft() const; // !!Person의 Inft와 다형성 사용!!

    bool playCard(DeckofCards* deck);  //burst된 경우 false return ;  
    int addCard(Card); // card 한장을 더 받다.   
    void showMyCard(); // card를 보여준다.   
    int myCardPoint(); // card 점수를 보여준다.   
    int clearCard();
};

/*Person* P;
Player Me;
P = &Me;
P -> Inft(); //성구 힘들다... */