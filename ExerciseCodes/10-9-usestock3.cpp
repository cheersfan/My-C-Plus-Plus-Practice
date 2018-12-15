//
// Created by root on 12/1/18.
//

#include "10-9-usestock3.h"


void my_usestock3_main(){
    Stock3 stocks[STKS] = {
            Stock3{"NanoSmart", 12,20.0},
            Stock3{"Boffo Objects", 200, 2.0},
            Stock3{"Monolithic Obelisks", 130, 3.25},
            Stock3{"Fleep Enterprises",60,6.5}
    };

    std::cout << "Stock holdings:\n";
    int st;
    for(st=0; st< STKS; st++){
        stocks[st].show3();
    }

    //set the point to the first element
    const Stock3 * top = &stocks[0];
    const Stock3 * top2 = stocks;

   for(st = 1; st < STKS; st ++){
        top = &top->topval(stocks[st]);
   }

   //now point tot the most valuable holding
   std::cout << "\n Most valuable holding:\n";
   top->show3();

}