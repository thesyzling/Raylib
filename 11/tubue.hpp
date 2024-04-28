#pragma once
#include <raylib.h>

class tube {
	public:
		tube();
		~tube();
		void draw();
		void transferRight();
		void transferLeft();

	private:
		Texture2D image;
		Vector2 position;

};