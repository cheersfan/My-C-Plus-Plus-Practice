//
// Created by root on 12/17/18.
//

#include "14-1-student.h"

//not finished yet!

double Student::Average() const {
    if(scores.size() > 0){
        return scores.sum()/scores.size();
    }
}

const std::string& Student::Name() const {
    return name;
}


