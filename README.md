BlackJack (C++)

간단한 콘솔 기반 블랙잭 게임입니다.
플레이어와 딜러가 카드를 뽑아 21에 가까운 사람이 승리합니다.

기능
플레이어 정보 입력 (이름, 나이, 포인트)
카드 덱 생성 및 셔플
블랙잭 룰 기반 게임 진행
베팅 시스템
딜러 자동 플레이 (16 이하 히트)

실행 방법
g++ *.cpp -o blackjack
./blackjack

구조
Card : 카드 정보 및 출력
DeckofCards : 카드 생성 및 셔플
Person : 기본 사용자 정보
Player : 플레이어 및 딜러 역할 (통합)

참고
UTF-8 콘솔 설정 필요 (한글 출력 깨짐 방지)
Windows 환경 기준 (SetConsoleOutputCP(65001) 사용)