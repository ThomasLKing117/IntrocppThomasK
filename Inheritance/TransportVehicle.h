#include <iostream>

class TransportVehicle
{
public:
	int mfuel;
protected:
	int speed;
public:
	int wheels;
	virtual int move() = 0;
};