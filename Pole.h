#pragma once
#include "Disk.h"
class Pole
{
	RectangleShape pole; 
	vector<Disk> disks; // the disks are going to be ordered from biggest to smallest 
	Pole(); 
	Pole(int width, int height); 
	~Pole(); 

	bool valid(Pole otherPole); // a check performed before the transfer of poles to see if a smaller disk is not in the pole before
	void transfer(Pole otherPole); // transfers the top disks to the other pole
	void draw(RenderWindow& window); 
	 

};

