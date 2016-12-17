#ifndef FLEET_H
#define FLEET_H

#include "extra_t.h"
#include "ship.h"

class Fleet : public QObject
{
	Q_OBJECT
private:
	PlayerT ptype;			
	QObject *battleship;
    int status;		// number of undamaged ships
    Ship *ship[5];

public:
    Ship* getShip(int i) { return ship[i]; }
    int getStatus() { return status; }
    void setStatus(int i) { status = i; }
	
	Fleet(PlayerT pt, QObject *parent = NULL); // constructor
	
	
	int createShip();
	void reset();
};

#endif
