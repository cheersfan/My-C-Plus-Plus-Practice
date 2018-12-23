//
// Created by root on 12/21/18.
//

#include "14-10-workermi.h"

#include <iostream>
using namespace std;

//Worker
Worker::~Worker() {};

void Worker::Data() const {
    cout << "Name: " << fullname << endl;
    cout << "Employee ID: " << id << endl;
}

void Worker::Get() {
    getline(cin, fullname);
    cout << "Enter worker`s ID: ";
    cin >> id;
    while (cin.get() != '\n'){
        continue;
    }
}

void Worker::Show() const {
    cout << "Name: " << fullname << '\n';
    cout << "Employee ID: " << id << '\n';
}

//Waiter

void Waiter::Data() const {
    cout << "Panache rating: " << panache << endl;
}

void Waiter::Get() {
    cout << "Enter the waiter`s panache rating: ";
    cin >> panache;
    while (cin.get() != '\n'){
        continue;
    }
}

void Waiter::Set() {
    cout << "Enter worker`s name: ";
    Worker::Get();
    Get();


}

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Show();
    Data();
}

//Singer
char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Data() const {
    cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get() {
    cout << "Enter number for singer`s vocal range: \n: ";
    int i;
    for(i = 0; i < Vtype; i++){
        cout << i << ": " << pv[i] << " ";
        if(i % 4 == 3){
            cout << endl;
        }
    }

    if(i % 4 != 0){
        cout << endl;
    }

    cin >> voice;

    while (cin.get() != '\n'){
        continue;
    }
}

void Singer::Set() {
    cout << "Enter singer`s name: \n";
    Worker::Get();
    Get();
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Show();
    Data();
 }

 //SingingWaiter
void SingingWaiter::Data() const {
    Singer::Data();
    Waiter::Data();
}

void SingingWaiter::Get() {
    Waiter::Get();
    Singer::Get();
}

void SingingWaiter::Set() {
    cout << "Enter singing waiter`s name: ";
    Worker::Get();
    Get();
}

void SingingWaiter::Show() const {
    cout << "Category: singing waiter \n";
    Worker::Data();
    Data();
}
