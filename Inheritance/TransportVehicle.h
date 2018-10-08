#include <iostream>

class TransportVehicle
{
public:
	int mfuel;
protected:
	int speed;
	virtual void move() = 0;
public:
	int wheels;
};