#ifndef ARDY_H
#define ARDY_H

#include "joystick.h"
#include "pulse_gen.h"
#include "ultra.h"
#include "lever.h"

class Ardy
{
  private:
	// objects
    Joystick joy;
    Lever lever;
    PulseGenerator pgen;
    Ultrasonic ultra;

  public:
    Ardy(){};
    ~Ardy(){};

	// TODO: JOYSTICK STUFF
    Joystick get_joystick() { return this->joy; }

	void set_joy_state(int state) { this->joy.set_state(state); }

    // PULSE GENERATOR STUFF
    PulseGenerator get_pgen() { return this->pgen; }

    void set_pgen_frq(int frq) { this->pgen.set_frequency(frq); }
    void set_pgen_state(int state) { this->pgen.set_state(state); }

	// actually turn the pulse generator on
    void pulse()
    {
      this->pgen.pulse();
    }

	Ultrasonic get_ultra() { return this->ultra; }

	// set key features
	void set_ultra_state(int state) { this->ultra.set_state(state); }
	void set_ultra_trig(int trig) { this->ultra.set_trig(trig); }
	void set_ultra_echo(int echo) { this->ultra.set_echo(echo); }
	void set_pins(int trig, int echo)
	{
		set_ultra_trig(trig);
		set_ultra_echo(echo);
	}

	// turn on ultrasonic
	void start_ultra()
	{
		this->ultra.start();
	}

  // TODO: finish servo interface
  Lever get_lever() { return this->lever; }
  void set_lever_ang(int ang) { this->lever.set_ang(ang); }
  void set_init_lever() { this->lever.init_write(); }


};

#endif
