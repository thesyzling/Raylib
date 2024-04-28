#include "tubue.hpp"

tube::tube()
{
	image = LoadTexture("tubes.png");
	position.x = 50;
	position.y = 50;
}



tube::~tube() {
	UnloadTexture(image);
}

void tube::draw() {
	DrawTextureV(image, position, WHITE);
}