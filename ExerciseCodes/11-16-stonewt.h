//
// Created by root on 12/6/18.
//

#ifndef MYCLIONPROJECT_11_16_STONEWT_H
#define MYCLIONPROJECT_11_16_STONEWT_H

class StoneWt{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

public:
    StoneWt(double lbs);
    StoneWt(int stn, double lbs);
    StoneWt();
    ~StoneWt();

    void show_lbs() const;
    void show_stn() const;
};

#endif //MYCLIONPROJECT_11_16_STONEWT_H
