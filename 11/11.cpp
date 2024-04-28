#include <raylib.h>
#include "tubue.hpp"

int main(void) {
	
	Color white = { 255, 255, 255, 255 };
	InitWindow(1200, 1000, "Test");
	SetTargetFPS(60);

	tube tube;
	while (WindowShouldClose() == false) {
		BeginDrawing();
		ClearBackground(white);
		tube.draw();
		EndDrawing();

	}

	CloseWindow();
}