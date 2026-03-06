#include <iostream>
using namespace std;


// 포션 개수 설정 함수
void setPotion(int count, int* p_HPPotion, int* p_MPPotion)

{
    *p_HPPotion = count;
    *p_MPPotion = count;
}

int main()
{
    const int SIZE = 5; // 0=HP 1=MP 2=공격력 3=방어력 4=level
    int stat[SIZE] = { 0 };
    //반복문

    //Hp와 MP 입력받기 
    while (1) {
        cout << "HP를 입력해주세요(50초과): ";
        cin >> stat[0];

        cout << "\nMP를 입력해주세요(50초과); ";
        cin >> stat[1];

        if (stat[0] > 50 && stat[1] > 50) {
            break;
        }
        cout << "\nHP나 MP의 값이 너무 작습니다.\n다시 입력해주세요.\n" << endl;
    }

    //공격력과 방어력 입력받기 
    while (1) {
        cout << "\n공격력을 입력해주세요(0초과): ";
        cin >> stat[2];

        cout << "\n방어력을 입력해주세요(0초과): ";
        cin >> stat[3];

        if (stat[2] > 0 && stat[3] > 0) {
            break;
        }
        cout << "\n공격력이나 방어력의 값이 너무 작습니다.\n다시 입력해주세요.\n" << endl;
    }

    //Level 입력받기
    while (1) {
        cout << "\nLevel을 입력해주세요(최대 100): ";
        cin >> stat[4];

        if (stat[4] <= 100) {
            break;
        }
        cout << "\nLevel이 너무 높습니다.\n" << endl;
    }
    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;


    setPotion(5, &HPPotion, &MPPotion); // 시작시 포션 지급 5개 

    cout << "\n* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
    cout << "=============================================" << endl;
    cout << "<스탯 관리 시스템>" << endl;
    cout << "1. HP UP " << endl;
    cout << "2. MP UP " << endl;
    cout << "3. 공격력 UP" << endl;
    cout << "4. 방어력 UP" << endl;
    cout << "5. 현재능력치" << endl;
    cout << "6. Level UP" << endl;
    cout << "7. 마법 " << endl;
    cout << "0. 나가기" << endl;


    while (1) {
        cout << "\n번호를 선택해주세요: ";
        cin >> choice;

        if (choice == 0) {
            cout << "\n프로그램을 종료합니다." << endl;
            break;
        }
        
        switch (choice) {
        case 1:
            if (HPPotion <= 0) {
                cout << "\n포션이 부족합니다." << endl;
                continue;
            }
            stat[0] += 20;
            HPPotion--;
            cout << "\n* HP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 HP: " << stat[0] << endl;
            cout << "남은 포션 수: " << HPPotion << endl;
            break;
        
        case 2:
            if (MPPotion <= 0) {
                cout << "\n포션이 부족합니다." << endl;
                continue;
            }
            stat[1] += 20;
            MPPotion--;
            cout << "\n* MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "현재 MP: " << stat[1] << endl;
            cout << "남은 포션 수: " << MPPotion << endl;
            break;

        case 3:
            stat[2] *= 2;
            cout << "\n* 공격력이 2배로 증가되었습니다.";
            cout << "현재 공격력: " << stat[2] << endl;
            break;

        case 4:
            stat[3] *= 2;
            cout << "\n* 방어력이 2배로 증가되었습니다.";
            cout << "현재 방어력: " << stat[3] << endl;
            break;

        case 5:
            cout << "\n현재 캐릭터 상태" << endl;
            cout << "Level:" << stat[4] << endl;
            cout << "HP:" << stat[0] << endl;
            cout << "MP:" << stat[1] << endl;
            cout << "공격력:" << stat[2] << endl;
            cout << "방어력:" << stat[3] << endl;
            cout << "HP 포션:" << HPPotion << "개" "MP 포션:" << MPPotion << "개" << endl;
            break;

        case 6:
            stat[4]++;
            HPPotion++;
            MPPotion++;
            cout << "\nLevel UP\n";
            break;

        case 7:
            if (stat[1] <= 0) {
                cout << "\nMP가 부족합니다." << endl;
                continue;
            }
            cout << "\n마법을 사용했습니다! MP를 10 소모하였습니다.\n" << endl;
            stat[1] = stat[1] - 10;
            break;

        }

    }
    return 0;
}