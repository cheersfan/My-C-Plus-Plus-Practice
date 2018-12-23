//
// Created by root on 12/21/18.
//

#ifndef MYCLIONPROJECT_14_7_WORKER0_H_H
#define MYCLIONPROJECT_14_7_WORKER0_H_H

#include <string>

class Worker{
private:
    std::string fullname;
    long id;

public:
    Worker():fullname("no one"), id(0L){};
    Worker(const std::string fn, long i) : fullname(fn), id(i){};
    virtual ~Worker();
    virtual void Set();
    virtual void Show() const;
};

class Waiter : public Worker{
private:
    int panache;
public:
    Waiter():Worker(),panache(0){};
    Waiter(const std::string & fn, long i, int p):Worker(fn,i),panache(p){};
    Waiter(const Worker& wk, int p): Worker(wk),panache(p){};
    void Set();
    void Show() const;
};

class Singer : public Worker{
protected:
    enum{other, alto, contralto,  soprano, bass, baritone, tenor};
    enum{Vtype=7};
private:
    static char * pv[Vtype];
    int voice;
public:
    Singer():Worker(),voice(other){};
    Singer(const std::string & fn, long i, int v = other):Worker(fn,i),voice(v){};
    Singer(const Worker& wk, int v): Worker(wk),voice(v){};
    void Set();
    void Show() const;
};


#endif //MYCLIONPROJECT_14_7_WORKER0_H_H
