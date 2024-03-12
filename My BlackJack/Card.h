#pragma once
#include<iostream>
#include<vector>
#include<ctime>
const int CARDNUMBER = 52;
using namespace std;

class Card {
private:
    string spade;//♠
    string hart;//♡; 
    string diamond;//◇  
    string clover;//♣  
    int number;
public:
    Card(int number); //카드에 번호 넣기   
    void show(); //카드 보여주기   
    Card()
    {
        number = 51;
        spade = "♠";
        hart = "♡";
        diamond = "◇";
        clover = "♣";
    }
    int CardPoint();
};





class DeckofCards {
private:
    vector<Card> number; //카드 52장.   
public:

    DeckofCards();

    void init();

    void shuffle();

    Card getCard();
};

