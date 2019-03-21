#ifndef JOY_H
#define JOY_H

#include "states.h"

class JoyStick
{
  private:
    int state;
    int sensitivity;

  public:
    JoyStick()
    {
      this->state = OFF;
      this->sensitivity = 0;
    }

    JoyStick(int sensitivity)
    {
      this->state = OFF;
      this->sensitivity = sensitivity;
    }

    JoyStick(int state, int sensitivity)
    {
      this->state = state;
      this->sensitivity = sensitivity;
    }

    // getters / setters
    int get_state() {return this->state;}
    void set_state(int state) {this->state = state;}

    int get_sensitivity() {return this->sensitivity;}
    void set_sensitivity(int sensitivity) {this->sensitivity = sensitivity;}
    
};

#endif