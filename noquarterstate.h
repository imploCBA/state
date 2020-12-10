#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H
#include "state.h"
#include "mightygumball.h"

class GumballMachine;


class NoQuarterState : public State{

private:
    GumballMachine *gumbalMachine;

public:
    NoQuarterState(GumballMachine *gumballMachine);

    virtual void insertQuarter() override;
    virtual void ejectQuarter();
    virtual void turnCrank();
    virtual void dispense();

     QString toString();

};


#endif // NOQUARTERSTATE_H
