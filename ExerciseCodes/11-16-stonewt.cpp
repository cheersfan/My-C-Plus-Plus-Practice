//
// Created by root on 12/6/18.
//

#include <iostream>
#include "11-16-stonewt.h"
using std::cout;

StoneWt::StoneWt(double lbs) {
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn;
    pounds = lbs;
}

StoneWt::StoneWt() {
    stone = pds_left = pounds = 0;
}

StoneWt::StoneWt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

StoneWt::~StoneWt() {}

void StoneWt::show_lbs() const {
    cout << pounds << " pounds\n";
}

void StoneWt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}