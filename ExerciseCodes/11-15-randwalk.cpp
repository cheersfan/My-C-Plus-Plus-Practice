//
// Created by root on 12/6/18.
//

#include "11-15-randwalk.h"

void my_randwalk_main(){

    using namespace std;
    using VECTOR::Vector;

    srand(time(0)); //seed randow-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";

    while (cin >> target){

        cout << "Enter step length: ";

        if(!(cin >> dstep)){
            break;
        }

        while (result.magvalue() < target){
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps ++;
        }

        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << "or\n" << result << endl;
        cout << "Average outward distance per step = " << result.magvalue() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye! \n";
    cin.clear();
    while (cin.get() != '\n'){
        continue;
    }


}
