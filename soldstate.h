#ifndef SOLDSTATE_H
#define SOLDSTATE_H
#include "state.h"
#include "mightygumball.h"

class GumballMachine;


class SoldState : public State{

private:
    GumballMachine *gumballMachine;

public:
    SoldState(GumballMachine *gumballMachine);

   virtual void insertQuarter();
   virtual void ejectQuarter();
   virtual void turnCrank();
   virtual void dispense();

    QString toString();

};


#endif // SOLDSTATE_H
