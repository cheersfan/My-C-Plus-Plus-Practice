//
// Created by root on 12/11/18.
//

#include "12-12-bank.h"
#include "12-10-queue.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer

void my_bank_main(){
    using namespace std;

    srand(time(0));

    cout << "Case Study : Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;

    long cyclelimit = MIN_PER_HR * hours;

    cout << "Enter the average number of customers per hours: ";
    double perhour;
    cin >> perhour;

    double min_per_cust;    //average time between arrivals
    min_per_cust = MIN_PER_HR;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    for(int cycle = 0; cycle < cyclelimit; cycle ++){ //simulate 1 as 1 minute
        cout << "the length of line " << line.queuecount() << endl;
        if(newcustomer(min_per_cust)){
            if(line.isFull()){  //turn away
                cout << "line is full" << endl;
                turnaways ++;
            }else{
                cout << "line has position" << endl;
                customers ++; //put in queue
                temp.set(cycle);
                line.enqueue(temp);
                cout << "queue length:" << line.queuecount() << endl;
            }
        }

        //wait and finish
        if(wait_time <= 0 && !line.isEmpty()){
            line.dequeue(temp);
            wait_time = temp.ptime();// waittime = processtime ???
            line_wait += cycle - temp.when();
            served ++;
        }

        if(wait_time > 0){
            wait_time --;
        }
        sum_line += line.queuecount();
    }

    //reporting result
    if(customers > 0){
        cout << "customers accepted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << " turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: " << (double) line_wait / served << " minutes \n";
    }else{
        cout << "No customers! \n";

    }
    cout << "Done!\n";
}

//judge whether there is a new customer
bool newcustomer(double x){
    return (rand() * x / RAND_MAX < 1);
}