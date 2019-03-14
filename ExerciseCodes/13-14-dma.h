//
// Created by root on 12/15/18.
//

#ifndef MYCLIONPROJECT_13_14_DMA_H
#define MYCLIONPROJECT_13_14_DMA_H

#include <iostream>

class baseDMA{
private:
    char * label;
    int rating;

public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &rs);
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);

};

#endif //MYCLIONPROJECT_13_14_DMA_H
