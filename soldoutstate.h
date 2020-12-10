#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H
#include "state.h"
#include "mightygumball.h"

class GumballMachine;


class SoldOutState : public State{

private:
    GumballMachine *gumballMachine;

public:
    SoldOutState(GumballMachine *gumballMachine);
 
    virtual void insertQuarter();
    virtual void ejectQuarter();
    virtual void turnCrank();
    virtual void dispense();

    QString toString();

};

#endif // SOLDOUTSTATE_H
