#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H
#include "state.h"
#include "mightygumball.h"
#include <QDateTime>


class HasQuarterState : public State{

private:
    GumballMachine *gumballMachine;

public:
    HasQuarterState(GumballMachine *gumballMachine);

    virtual void insertQuarter();
    virtual void ejectQuarter();
    virtual void turnCrank();
    virtual void dispense();

    QString toString();

};


#endif // HASQUARTERSTATE_H
