//
// Created by root on 12/12/18.
//

#include <iostream>
#include "13-6-usett1.h"
#include "13-4-tabtenn1.h"


void my_usett1_main(){
    using namespace std;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

    rplayer1.Name(); //derived object use base method
    if(rplayer1.HasTable()){
        cout << ": has a table.\n";
    }else{
        cout << ": hasn`t a table. \n";
    }
    player1.Name(); // base object use base method
    if(player1.HasTable()){
        cout << ": has a table.\n";
    }else{
        cout << " hasn`t a table.\n";
    }

    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;

    RatedPlayer rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
}
