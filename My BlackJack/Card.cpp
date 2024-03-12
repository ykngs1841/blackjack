#include "Card.h"

Card::Card(int number)
{
    this->number = number;
}

DeckofCards::DeckofCards() //생성자로 자동 난수만들기, 시작시 카드 섞기 
{
    srand(time(NULL));
    init();
}
int Card::CardPoint()
{
    int score = 0;
    if (number % 13 == 0)  // K카드 10점 부여
    {
        score = score + 10;
    }
    else if (number % 13 < 10)  //점수만큼 점수 부여
    {
        score = score + number % 13;
    }
    else  //J와 Q카드 10점 부여
    {
        score = score + 10;
    }
    return (score);
}

void DeckofCards::init()
{
    number.clear();
    for (int i = 0; i < 52; i++)
    {
        number.push_back(i + 1);
    }
}

Card DeckofCards::getCard()
{
    Card card;
    if (number.size() >= 1) {

        card = number[number.size() - 1];
        number.pop_back();
    }
    return card;
}

void DeckofCards::shuffle()
{
    for (int i = 0; i < 100; i++)
    {
        Card temp;
        int left;
        int right;
        left = rand() % CARDNUMBER;
        right = rand() % CARDNUMBER;
        temp = number[left];
        number[left] = number[right];
        number[right] = temp;
    }
}

void Card::show()
{
    int pattern;
    int cardnumber;

    pattern = number / 13;// 값에 따라 패턴 지정
    cardnumber = number % 13;
    switch (pattern) {
    case 0:
        cout << "♠";
        break;
    case 1:
        cout << "◇";
        break;
    case 2:
        cout << "♣";
        break;
    case 3:
        cout << "♡";
        break;
    default:
        break;
    }
    if (1 < cardnumber && cardnumber < 11)
    {
        cout << cardnumber << " ";
    }
    else {
        switch (cardnumber) {
        case 0:
            cout << "K ";
            break;
        case 1:
            cout << "A ";
            break;
        case 11:
            cout << "J ";
            break;
        case 12:
            cout << "Q ";
            break;
        }
    }
}
