#ifndef LOCATION_H_
#define LOCATION_H_


class Location{
public:
	double getDistance(Location*) const;

	void setX(int);
	void setY(int);

	int getX() const;
	int getY() const;

private:
	int X;
	int Y;
};

#endif /* LOCATION_H_ */
