#pragma once
#include<iostream>
#include<vector>
#include<ctime>
const int CARDNUMBER = 52;
using namespace std;

class Card {
private:
    string spade;//��
    string hart;//��; 
    string diamond;//��  
    string clover;//��  
    int number;
public:
    Card(int number); //ī�忡 ��ȣ �ֱ�   
    void show(); //ī�� �����ֱ�   
    Card()
    {
        number = 51;
        spade = "��";
        hart = "��";
        diamond = "��";
        clover = "��";
    }
    int CardPoint();
};





class DeckofCards {
private:
    vector<Card> number; //ī�� 52��.   
public:

    DeckofCards();

    void init();

    void shuffle();

    Card getCard();
};

