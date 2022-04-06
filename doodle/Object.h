#pragma once
#include <doodle/doodle.hpp>

class Object
{
private:
	double object_x;
	double object_y;
    double distance_x = 0;
    double distance_y = 0;
    double distance = 0;

	bool pick_up = false;

public:
	Object(double x, double y);

	~Object();

	void Update();
	void Draw() const;

	void Collision();

	double Get_x() const { return object_x; }
	double Get_y() const { return object_y; }

};