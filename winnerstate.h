#ifndef WINNERSTATE_H
#define WINNERSTATE_H
#include "state.h"
#include "mightygumball.h"

class GumballMachine;


class WinnerState : public State{

private:
    GumballMachine *gumballMachine;

public:
    WinnerState(GumballMachine *gumballMachine);

    virtual void insertQuarter();
    virtual void ejectQuarter();
    virtual void turnCrank();
    virtual void dispense();

    QString toString();

};


#endif // WINNERSTATE_H
