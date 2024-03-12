#pragma once

#include<iostream>
#include<vector>
#include"Card.h"
#include"Person.h"
using namespace std;

class Player :public Person {  //����� ���Ѱ��� ��� �޴´�.   
private:

    int Point;        //���ӿ� ���Ǵ� ���̹� �Ӵ�? (�ʱ⿡ �󸶷� �ұ��? )  
    vector <Card> myCard;  //������ �ִ� ī��   

public:
    Player();
    Player(int Point);
    Player(string name, int Point);
    Player(string name, int age, int Point);

    int getPoint() const;    //����Ʈ�� �󸶳� ���ҳ� Ȯ��..   
    void setPoint(int point);  //����Ʈ�� ����  
    void changePoint(int point);//����Ʈ�� ����.. ����, ������ ���Ͽ� 
    virtual void Inft() const; // !!Person�� Inft�� ������ ���!!

    bool playCard(DeckofCards* deck);  //burst�� ��� false return ;  
    int addCard(Card); // card ������ �� �޴�.   
    void showMyCard(); // card�� �����ش�.   
    int myCardPoint(); // card ������ �����ش�.   
    int clearCard();
};

/*Person* P;
Player Me;
P = &Me;
P -> Inft(); //���� �����... */