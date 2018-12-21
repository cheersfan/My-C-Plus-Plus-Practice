//
// Created by root on 12/21/18.
//

#include "14-7-Worker0.h.h"

#include <iostream>
using namespace std;

//Worker
Worker::~Worker() {};

void Worker::Set() {
    cout << "Enter worker`s name: " ;
    getline(cin, fullname);
    cout << "Enter worker`s ID: ";
    cin >> id;

    while(cin.get() != '\n')
        continue;
}

void Worker::Show() const {
    cout << "Name: " << fullname << '\n';
    cout << "Employee ID: " << id << '\n';
}

//Waiter
void Waiter::Set() {
    Worker::Set();
    cout << "Enter worker`s ID: ";
    cin >> panache;
    while(cin.get() != '\n')
        continue;

}

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Show();
    cout << "Panache rating: " << panache << endl;
}

//Singer
char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set() {
    Worker::Set();
    cout << "Enter number for singer`s vocal range: \n";
    int i ;
    for(i = 0; i < Vtype; i++){
        cout << i << ": " << pv[i] << " ";
        if(i % 4 == 3){
            cout << endl;
        }
    }

    if(i % 4 != 0){
        cout << endl;
    }

    while (cin >> voice && (voice < 0 || voice >= Vtype)){
        cout << "Please enter a value >= 0 and < " << Vtype << endl;
    }

    while (cin.get() != '\n'){
        continue;
    }
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Show();
    cout << "Vocal range: " << pv[voice] << endl;
}
