//
// Created by root on 12/6/18.
//

#include "11-18-stone.h"
#include <iostream>
using std::cout;



void my_stone_main(){
    StoneWt incognito = 275; // uses constructor to initialize
    StoneWt wolfe(287.5); // same as StoneWt wolfe = 287.5
    StoneWt taft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    taft.show_lbs();
    incognito = 276.8;
    taft = 325;
    cout << "Agter dinner, the celebrity weighed:";
    incognito.show_stn();
    cout << "After dinner, the President weighed:";
    taft.show_lbs();

    display(taft, 2);
    cout << "The wrestler weighed even more. \n";
    display(422,2);
    cout << "No stone left unearned \n";
}

void display(const StoneWt & st, int n){
    for(int i = 0; i < n; i ++){
        cout << "Wow! ";
        st.show_stn();
    }
}