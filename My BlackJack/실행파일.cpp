#include <vector>  
#include <ctime>  
#include <string>  
#include <iostream> 
#include<Windows.h>
#include"Card.h"
#include"Person.h"
#include"Player.h"
#include "direr.h"

using namespace std;
int main()
{
    cout << "   \n";
    cout << "  │                                                                        │ \n";
    cout << "  │       ⊙⊙      ⊙       ⊙⊙⊙⊙⊙  ⊙⊙⊙  ⊙      ⊙  ⊙⊙⊙⊙⊙    │ \n";
    cout << "  │     ⊙         ⊙⊙      ⊙            ⊙    ⊙⊙    ⊙  ⊙      ⊙    │ \n";
    cout << "  │   ⊙          ⊙  ⊙     ⊙            ⊙    ⊙⊙    ⊙  ⊙      ⊙    │ \n";
    cout << "  │ ⊙           ⊙    ⊙    ⊙            ⊙    ⊙ ⊙   ⊙  ⊙      ⊙    │ \n";
    cout << "  │ ⊙          ⊙      ⊙   ⊙⊙⊙⊙⊙    ⊙    ⊙  ⊙  ⊙  ⊙      ⊙    │ \n";
    cout << "  │ ⊙         ⊙        ⊙          ⊙    ⊙    ⊙   ⊙ ⊙  ⊙      ⊙    │ \n";
    cout << "  │ ⊙         ⊙⊙⊙⊙⊙⊙          ⊙    ⊙    ⊙   ⊙ ⊙  ⊙      ⊙    │ \n";
    cout << "  │   ⊙       ⊙        ⊙          ⊙    ⊙    ⊙    ⊙⊙  ⊙      ⊙    │ \n";
    cout << "  │     ⊙     ⊙        ⊙          ⊙    ⊙    ⊙    ⊙⊙  ⊙      ⊙    │ \n";
    cout << "  │       ⊙⊙ ⊙        ⊙  ⊙⊙⊙⊙⊙  ⊙⊙⊙  ⊙      ⊙  ⊙⊙⊙⊙⊙    │ \n";
    cout << "  │                                                                        │ \n";
    cout << "   \n";
    cout << "카지노에 오신것을 환영합니다!." << endl;
    cout << "카지노에 입장하기 전, 간단한 설문지 작성 부탁드리겠습니다.\n";
    int i;
    DeckofCards Deck;
    //카드를 잘 섞는다.   
    Deck.shuffle();
    int playerCount;
    cout << "총 몇분이신가요??\n";
    cin >> playerCount;
    direr1 Direr;
    Person DIRER;
    DIRER.setName("Jocker");
    DIRER.setAge(35);
    Direr.setPoint(1000000);
    Player* gamer = new Player[playerCount];
    Person* Met = new Player[playerCount];


    //딜러설정  
    Player direr("딜러", 25, 100000);
    for (i = 0; i < playerCount; i++)
    {
        string inputName;
        cout << endl << direr.getName() << ":" << i + 1 << "번째 게임하는 사람 이름이 어떻게 되시나요? ";
        cin >> inputName;
        gamer[i].setName(inputName);
        //Met[i].setName(inputName);

        int inputAge;
        cout << direr.getName() << ":" << inputName << "의 나이는 어떻게 되시나요? ";
        cin >> inputAge;
        gamer[i].setAge(inputAge);
        Met[i].setAge(inputAge);
        int point;
        cout << inputName << "님의 포인트는 얼마입니까? ";
        cin >> point;
        gamer[i].setPoint(point);
    }
    cout << " 입력해 주셔서 감사합니다. " << endl << endl;

    cout << " 입력 정보를 확인해 주세요 " << endl;
    cout << " *********************************** " << endl;

    //for (int  i = 0 ; i < playerCount; i ++ ) {  
    for (i = 0; i < playerCount; i++)
    {
        cout << "이름:" << gamer[i].getName() << ", age : " << gamer[i].getAge() << ", Point " << gamer[i].getPoint() << endl;
    }
    cout << " *********************************** " << endl;

    cout << " 게임을 시작하겠습니다. " << endl << endl;

    //게임의 대한 간단한 안내.  
    cout << direr.getName() << "블랙잭 코너에 오신것을 환영합니다.\n";
    cout << direr.getName() << ":간단하게 게임 방법을 설명해드리겠습니다." << endl;
    Sleep(500);
    cout << direr.getName() << ":게이머는 저, 딜러로부터 카드를 2장이상의 카드를 원하는 만큼 받습니다." << endl;
    Sleep(500);
    cout << direr.getName() << ":받은 카드의 합이 21을 넘지 않고, 상대방보다 포인트가 높으면 이깁니다. " << endl;
    Sleep(500);
    cout << direr.getName() << ":카드는 총 13종류이고, 10,J,Q,K카드는 모두 10포인트를 나타냅니다." << endl;
    Sleep(500);
    cout << direr.getName() << ":카드 중 A는 이전의 받은 카드의 합이 10이하일 경우 11을 나타내고, " << endl;
    Sleep(500);
    cout << direr.getName() << ":11이상일 경우에는 1을 나타냅니다. " << endl;
    Sleep(500);
    cout << direr.getName() << ":그럼 게임 시작하겠습니다." << endl;

    int end = 0;
    vector<int> beting;

    while (end == 0)
    {
        int betpoint = 0;
        //플레이어의 포인터 안내.  
        for (i = 0; i < playerCount; i++)
        {
            cout << gamer[i].getName() << " 님의 남은 포인트는 ";
            cout << gamer[i].getPoint() << endl;
        }


        //포인트 걸기.  

        for (i = 0; i < playerCount; i++)
        {
            if ((gamer[i].getPoint() == 0))
            {
                int point;
                cout << gamer[i].getName() << ":뭐야... 포인트가 다 떨어졌잖아...?\n"; "조금만 더 충전해야겠다. (충전할 포인트를 입력해주세요.)\n";
                cin >> point;
                gamer[i].setPoint(point);
            }
            cout << gamer[i].getName() << " 님 포인트는 얼마를 거시겠습니까?(포인트가 없다면 - 0)\n";
            for (i = 0; i < playerCount; i++)
            {
                gamer[i].Inft();
            }
            // 다형성
            Person* people;
            direr1 direr; 
            people = &direr;
            people->Inft();
           

            cin >> betpoint;

            if (betpoint > gamer[i].getPoint())
            {
                cout << "가지고 있는 포인트보다 더 많이 말한거 아냐?\n";
                cout << "어디서 밑장빼기야?\n";
                cout << "걸 수 있는 포인트를 다시 입력해봐";
                Sleep(500);
                betpoint = gamer[i].getPoint();
                betpoint = 0;
                cin >> betpoint;
                if (gamer[i].getPoint() == 0)//포인트를 가지고 있음에도 0으로 입력하면 5포인트를 쉽게 얻고 시작함;
                {
                    cout << "머야 너 포인트가 다 떨어졌잖아?\n";
                    cout << "에휴.. 불쌍하니 5포인트라도 줄테니 다시 해봐!\n";
                    betpoint = 5;
                }
            }
            else if (betpoint > 50)
            {
                cout << "배팅의 최대포인트는 50포인트 입니다." << endl;
                betpoint = 50;
            }
            else if (betpoint == 0)
            {
                cout << "머야 너 포인트가 다 떨어졌잖아?\n";
                cout << "에휴.. 불쌍하니 5포인트라도 줄테니 다시 해봐!\n";
                betpoint = 5;
            }
            else
            {
                betpoint = 0 + betpoint;
            }
            beting.push_back(betpoint);
        }

        //첫번째 카드 받기..   
        for (i = 0; i < playerCount; i++)
        {
            Card temp = Deck.getCard();
            gamer[i].addCard(temp);
            cout << gamer[i].getName() << " : ";
            gamer[i].showMyCard();
            cout << "\n";
        }
        //딜러 첫번째.  
        Card temp = Deck.getCard();
        direr.addCard(temp);
        cout << direr.getName() << " : ";
        direr.showMyCard();
        cout << "\n";


        //두번째 카드 받기   
        for (i = 0; i < playerCount; i++)
        {
            Card temp1 = Deck.getCard();
            gamer[i].addCard(temp1);
            cout << gamer[i].getName() << " : ";
            gamer[i].showMyCard();
            cout << "\n";
        }


        //딜러 두번째.  
        cout << direr.getName() << " : ";
        direr.showMyCard();
        cout << "\n";
        Card temp1 = Deck.getCard();
        direr.addCard(temp1);

        //딜러 마지막.  
        if (direr.myCardPoint() < 16)
        {
            while (direr.myCardPoint() < 16)
            {
                Card temp2 = Deck.getCard();
                direr.addCard(temp2);
            }
        }


        //게임 시작.   
        for (i = 0; i < playerCount; i++)
        {
            gamer[i].playCard(&Deck);
            cout << "\n";
        }



        if (direr.myCardPoint() > 21)
        {
            cout << " 딜러가 패배하였습니다..." << endl;
            int winerpoint = 0;
            Direr.Losepoint(betpoint);
            for (i = 0; i < playerCount; i++)
            {
                if (gamer[i].myCardPoint() > winerpoint)
                {
                    winerpoint = gamer[i].myCardPoint();
                }
            }

            for (i = 0; i < playerCount; i++)
            {
                if (gamer[i].myCardPoint() == winerpoint && gamer[i].myCardPoint() < 21)
                {
                    cout << gamer[i].getName() << "님이 이겼습니다. " << endl;
                    gamer[i].setPoint(gamer[i].getPoint() + beting[i]);
                }
                else
                {
                    gamer[i].setPoint(gamer[i].getPoint() - beting[i]);
                }
            }
        }


        else
        {
            cout << direr.getName() << " : ";
            direr.showMyCard();
            cout << endl;

            for (i = 0; i < playerCount; i++)
            {
                cout << gamer[i].getName() << " : ";
                gamer[i].showMyCard();
                cout << "\n";
            }

            int winerpoint = direr.myCardPoint();

            for (i = 0; i < playerCount; i++)
            {
                if (gamer[i].myCardPoint() > winerpoint)
                {
                    if (gamer[i].myCardPoint() > 21);
                    else
                    {
                        winerpoint = gamer[i].myCardPoint();
                    }
                }
            }



            for (i = 0; i < playerCount; i++)
            {
                if (winerpoint == direr.myCardPoint())
                {
                    cout << "딜러가 이겼습니다. " << endl;
                    gamer[i].setPoint(gamer[i].getPoint() - beting[i]);
                    Direr.Winpoint(betpoint);
                }
                else if (gamer[i].myCardPoint() == winerpoint)
                {
                    cout << gamer[i].getName() << "님이 이겼습니다.\n " << endl;
                    gamer[i].setPoint(gamer[i].getPoint() + beting[i]);
                }
                else
                {
                    gamer[i].setPoint(gamer[i].getPoint() - beting[i]);
                }
            }
        }



        cout << " 게임을 계속 하시겠습니까?  ( 0 - 계속, 1 - 종료 )";
        cin >> end;
        direr.clearCard();
        for (i = 0; i < playerCount; i++)
        {
            gamer[i].clearCard();
        }
        beting.clear();
    }
    cout << " 게임은 재미있으셨나요?: " << endl << endl;



    cout << endl << " *********************************** " << endl;
    //for (int  i = 0 ; i < playerCount; i ++ ) {  
    for (i = 0; i < playerCount; i++)
    {
        cout << "이름:" << gamer[i].getName() << ", age : " << gamer[i].getAge() << ", Point " << gamer[i].getPoint() << endl;
    }
    cout << " *********************************** " << endl;
    return 0;
}