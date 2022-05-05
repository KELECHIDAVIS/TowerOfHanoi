#include "Pole.h"

Pole::Pole(int width, int height)
{
	this->pole = RectangleShape(Vector2f(width, height)); 
	this->pole.setFillColor(Color(Color(210, 180, 140))); 
}

void Pole::draw(RenderWindow& window)
{
	window.draw(this->pole); 
	for (Disk disk : this->disks)
	{
		disk.draw(window); 
	}
}
