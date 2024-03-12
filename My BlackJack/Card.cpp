#include "Card.h"

Card::Card(int number)
{
    this->number = number;
}

DeckofCards::DeckofCards() //�����ڷ� �ڵ� ���������, ���۽� ī�� ���� 
{
    srand(time(NULL));
    init();
}
int Card::CardPoint()
{
    int score = 0;
    if (number % 13 == 0)  // Kī�� 10�� �ο�
    {
        score = score + 10;
    }
    else if (number % 13 < 10)  //������ŭ ���� �ο�
    {
        score = score + number % 13;
    }
    else  //J�� Qī�� 10�� �ο�
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

    pattern = number / 13;// ���� ���� ���� ����
    cardnumber = number % 13;
    switch (pattern) {
    case 0:
        cout << "��";
        break;
    case 1:
        cout << "��";
        break;
    case 2:
        cout << "��";
        break;
    case 3:
        cout << "��";
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
