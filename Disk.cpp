#include "Disk.h"

Disk::Disk()
{
}

Disk::Disk(int width,int height)
{
	this->disk = RectangleShape(Vector2f(width, height )); 
	this->disk.setFillColor(Color(rand() % 255, rand() % 255, rand() % 255)); 


}

Disk::~Disk()
{
}

void Disk::draw(RenderWindow& window)
{
	window.draw(this->disk); 

}
