//
// Created by root on 12/14/18.
//

#ifndef MYCLIONPROJECT_ACCTABC_H
#define MYCLIONPROJECT_ACCTABC_H

#include <iostream>
#include <string>
// didn`t finish yet
class AcctABC{
private:
    std::string fullName;
    long acctNum;
    double balance;

protected:
    struct Formatting{
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };

    const std::string & FullName() const {return fullName;};
    long AcctNum() const {return acctNum;};
    Formatting SetFormat() const;
    void Restore(Formatting & f) const;

public:

};

#endif //MYCLIONPROJECT_ACCTABC_H
