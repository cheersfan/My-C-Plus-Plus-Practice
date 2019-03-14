//
// Created by root on 11/29/18.
//

#include "10-6-usestock2.h"

void my_usestock2_main(){
    using std::cout;
    cout << "Using constructors to create new object \n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show2();

    Stock stock2 = Stock ("Buffo Objects", 2, 2.0);
    stock2.show2();

    Stock stock3 = 50;

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2:\n";
    stock1.show2();
    stock2.show2();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock ("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    cout << "Done\n";

}