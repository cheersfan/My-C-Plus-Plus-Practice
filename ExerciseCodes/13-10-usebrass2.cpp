//
// Created by root on 12/12/18.
//

#include "13-10-usebrass2.h"
#include <iostream>
#include <string>
#include "13-7-brass.h"

const int CLIENTS = 2;

void my_usebrass2_main(){
    using namespace std;

    Brass * p_clients[CLIENTS];
    string temp;
    long tempnum;
    double tempbal;
    char kind;

    for(int i = 0; i < CLIENTS; i ++){
        cout << "Enter client`s name: ";
        getline(cin, temp);
        cout << "Enter client`s account nunmber: ";
        cin >> tempnum;
        cout << "Enter opening balance:$ ";
        cin >> tempbal;
        cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";
        while (cin >> kind && (kind != '1') && (kind != '2')){
            cout << "Enter either 1 or 2: ";
        }
        if(kind == '1'){
            p_clients[i] = new Brass(temp,tempnum, tempbal);
        }else{
            double tmax, trate;
            cout << "Enter the overdraft limit:$ ";
            cin >> tmax;
            cout << "Enter the interest rate as a deco,a; fraction: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }

        while (cin.get() != '\n'){
            continue;
        }
    }
    cout << endl;
    for(int i = 0; i < CLIENTS; i ++){
        p_clients[i]->ViewAcct();
        cout << endl;
    }

    for(int i = 0; i < CLIENTS; i ++){
        delete p_clients[i];
    }
    cout << "Done!\n";
}
