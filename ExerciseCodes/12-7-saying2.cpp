//
// Created by root on 12/10/18.
//

#include "12-7-saying2.h"
#include "12-4-string1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int ArSize = 5;
const int MaxLen = 81;

void my_saying2_main(){
    using namespace std;

    String name;
    cout << "Hi, What`s your name?\n";
    cin >> name;

    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n";

    String sayings[ArSize];
    char temp[MaxLen];
    int i;

    for(i = 0; i < ArSize; i ++){
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);

        while (cin && cin.get() != '\n'){
            continue;
        }

        if(!cin || temp[0] == '\0'){ //empty line, break
            break;
        }else{
            sayings[i] = temp;
        }
    }

    int total = i;

    if(total > 0){
        cout << "Here are you sayings: \n";
        for(i = 0; i < total; i ++){
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        String* shortest = &sayings[0];
        String* first = &sayings[0];

        for(i = 0; i < total; i ++){
            if(sayings[i].length() < shortest->length()){
                shortest = &sayings[i];
            }
            if(sayings[i] < *first){
                first = &sayings[i];
            }
        }

        cout << "Shortest saying:\n" << * shortest << endl;
        cout << "First alphabetically:\n" << * first << endl;
        cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
    }else{
        cout << "No input! Bye. \n";
    }

}