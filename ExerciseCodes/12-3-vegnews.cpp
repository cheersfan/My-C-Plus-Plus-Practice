//
// Created by root on 12/9/18.
//

#include "12-3-vegnews.h"

using std::cout;

void callme1(StringBad & rsb){
    cout << "String passed by reference:\n";
    cout << "   \"" << rsb << "\" \n";
}

void callme2(StringBad rsb){
    cout << "String passed by value:\n";
    cout << "   \"" << rsb << "\" \n";
}

void my_vegnews_main(){
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        cout << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;

        callme2(headline2);
        cout << "headline2: " << headline2 << endl;

        cout << endl;

        cout << "Initialize one object to another:\n";
        //(use copy constructor when initialization) the copy constructor has been used implicitly in the next line!
        StringBad sailor = sports;
        cout << "sailor: " << sailor;

        cout << endl;

        cout << "Assign one object to another:\n";
        //at first, the default constructor has been used in the next line, then the copy constructor will be used!
        StringBad knot;
        //(use assignment operator when not initialization)
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }

    cout << "End of main()\n";
}