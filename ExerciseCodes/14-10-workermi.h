//
// Created by root on 12/21/18.
//

#ifndef MYCLIONPROJECT_14_10_WORKERMI_H
#define MYCLIONPROJECT_14_10_WORKERMI_H

#include <string>
using namespace std;

class Worker{
private:
    std::string fullname;
    long id;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Worker():fullname("no one"), id(0L){};
    Worker(const std::string fn, long i) : fullname(fn), id(i){};
    virtual ~Worker() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter : virtual public Worker{
private:
    int panache;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Waiter():Worker(),panache(0){};
    Waiter(const std::string & fn, long i, int p):Worker(fn,i),panache(p){};
    Waiter(const Worker& wk, int p): Worker(wk),panache(p){};
    void Set();
    void Show() const;
};

class Singer : virtual public Worker{
protected:
    enum{other, alto, contralto,  soprano, bass, baritone, tenor};
    enum{Vtype=7};

    virtual void Data() const;
    virtual void Get();

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

//multiple inheritance
class SingingWaiter : public Singer, public Waiter{
protected:
    virtual void Data() const;
    virtual void Get();

public:
    SingingWaiter(){};
    SingingWaiter(const std::string & fn, long n, int p = 0, int v = other):Worker(fn,n),Waiter(fn,n,p),Singer(fn,n,v){};
    SingingWaiter(const Worker & wk, int p = 0, int v = other):Worker(wk), Waiter(wk, p), Singer(wk, v){};
    SingingWaiter(const Waiter & wt, int v = other):Worker(wt),Waiter(wt), Singer(wt, v){};
    SingingWaiter(const Singer & wt, int p = 0) : Worker(wt), Waiter(wt,p), Singer(wt){};
    void Set();
    void Show() const;
};

#endif //MYCLIONPROJECT_14_10_WORKERMI_H
