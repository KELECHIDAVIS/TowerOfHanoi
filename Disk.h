#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std; using namespace  sf;
class Disk
{
public:
	
	RectangleShape disk; 
	
	Disk(); 
	Disk(int width, int height ); 
	~Disk(); 
	void draw(RenderWindow& window);
};

