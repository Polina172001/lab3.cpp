#include <iostream>
#include "Header.h"

using namespace std;
void menu();

void menu() {
    cout << "1. Task 1 summ(int n)\n";
    cout << "2. Task 2 summ2(double eps)\n";
    cout << "3. Task 3 print(int n ,int k)\n";
    cout << "4. Task 4 findFirstElement(double eps)\n";
    cout << "5. Task 5 findFirstNegativeElement(double eps)\n";
    cout << "6. Vihod\nVvedite nomer=";
}

int main()
{
    int n, k, p, h;
    double eps;
tryagain2:
    cout << "Menu = 1" << endl << "Exit = 0" << endl;
    cin >> h;
    switch (h) {
    case 1:
        goto tryagain;
        break;
    default:
        goto exit;
    }
tryagain: //chekpoint
    system("cls");
    menu();
    cout << "Input number task" << endl;
    cin >> p;
    system("cls");
    switch (p) {
    case 1:
        cout << "Input n\n";
        cin >> n;
        sum(n);
        goto tryagain2;
        break;
    case 2:
        cout << "Input eps\n";
        cin >> eps;
        summ2(eps);
        goto tryagain2;
        break;
    case 3:
        cout << "Input n i k\n";
        cin >> n;
        cin >> k;
        print(n, k);
        goto tryagain2;
        break;
    case 4:
        cout << "Input n\n";
        cin >> n;
        sum(n);
        cout << "Input eps\n";
        cin >> eps;
        cout << "First number chlena s tocnhostiu = " << findFirstElement(eps) << endl;
        goto tryagain2;
        break;
    case 5:
        cout << "Input n\n";
        cin >> n;
        sum(n);
        cout << "Input eps\n";
        cin >> eps;
        cout << "First negative number chlena s tocnhostiu = " << findFirstNegativeElement(eps) << endl;
        goto tryagain2;
        break;
    case 6:
    exit:
        system("cls");
        break;
    }
    return 0;
}
