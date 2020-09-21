#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int type2, type3;
    int choice, quantity, mushroom = 10, onion = 5, sausage = 10;
    float sum1 = 0, sum2 = 0, total,S,M,L;
    char a,ch;
    bool h = true;

    do {
        cout << " Welcome to our pizza restaurant ! \n"
            << " 1- Super supreme  S=50 /M=75.5/ L=100 \n"
            << " 2- Chicken supreme  S=45/ M=73.88/ L=97.99 \n"
            << " 3- Margherita  S=35/ M=70/ L=95 \n"
            << " 4- Cheese lovers  S=60.96/ M=87.75/ L=113.16 \n"
            << " 5- Sea food lovers  S= 64.47/ M=94.30/ L=123.25 \n";
        cin >> choice;
        cout << " Enter your quantity \n";
        cin >> quantity;
        switch (choice) {
        case 1:
             S = 50, M = 75.5, L = 100;
            cout << " Enter your size \n"
                << " 1- Small \n"
                << " 2- Medium \n"
                << " 3- Large \n";
            cin >> type2;
            if (type2 == 1)
            {
                sum1 += S;
            }
            else if (type2 == 2)
            {
                sum1 += M;
            }
            else if (type2 == 3)
            {
                sum1 += L;
            }
            break;
        case 2:
              S = 45, M = 73.88, L = 97.99;
            cout << " Enter your size \n"
                << " 1- Small \n"
                << " 2- Medium \n"
                << " 3- Large \n";
            cin >> type2;
            if (type2 == 1)
            {
                sum1 += S;
            }
            else if (type2 == 2)
            {
                sum1 += M;
            }
            else if (type2 == 3)
            {
                sum1 += L;
            }
            break;
        case 3:
            S = 35, M = 70, L = 95;
            cout << " Enter your size \n"
                << " 1- Small \n"
                << " 2- Medium \n"
                << " 3- Large \n";
            cin >> type2;
            if (type2 == 1)
            {
                sum1 += S;
            }
            else if (type2 == 2)
            {
                sum1 += M;
            }
            else if (type2 == 3)
            {
                sum1 += L;
            }
            break;
        case 4:
              S = 60.96, M = 87.75, L = 113.16;
            cout << " Enter your size \n"
                << " 1- Small \n"
                << " 2- Medium \n"
                << " 3- Large \n";
            cin >> type2;
            if (type2 == 1)
            {
                sum1 += S;
            }
            else if (type2 == 2)
            {
                sum1 += M;
            }
            else if (type2 == 3)
            {
                sum1 += L;
            }
            break;
        case 5:
               S = 64.47, M = 94.30, L = 123.25;
            cout << " Enter your size \n"
                << " 1- Small \n"
                << " 2- Medium \n"
                << " 3- Large \n";
            cin >> type2;
            if (type2 == 1)
            {
                sum1 += S;
            }
            else if (type2 == 2)
            {
                sum1 += M;
            }
            else if (type2 == 3)
            {
                sum1 += L;
            }
            break;
        default:
            cout << "Invalid Input \n";
        }
        cout << " Do you want another topping ? (y/n)\n";
        cin >> a;
        if (a == 'Y' || a == 'y')
        {

            cout << "1- Mushroom \n";
            cout << " 2- Onion \n";
            cout << " 3- Sausage \n";
            cin >> type3;
            if (type3 == 1)
            {
                sum2 += mushroom;
            }
            else if (type2 == 2)
            {
                sum2 += onion;
            }
            else if (type2 == 3)
            {
                sum2 += sausage;
            }
        }
        else {}
        cout << "Do you want another item ? (y/n) \n";
        cin >> ch;

    }while (ch == 'y' || ch == 'Y');
    total = sum1 + sum2;
    cout << " thank you your bill is" << total << "\n";



}


