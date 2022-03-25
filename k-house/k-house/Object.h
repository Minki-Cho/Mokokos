#pragma once

class Object
{
private:
	double object_x;
	double object_y;

public:
	Object(double x, double y);

	~Object();

	void Update();
	void Draw() const;


	double Get_x() const { return object_x; }
	double Get_y() const { return object_y; }

};