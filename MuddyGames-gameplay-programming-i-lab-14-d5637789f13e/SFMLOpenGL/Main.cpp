#include <Game.h>

//@author Oisin Wilson
//@login C00213826
//@Known Bugs:
// no known bugs

int main(void)
{

	ContextSettings settings;
	settings.depthBits = 24u; // for depth buffer Z-Buffer
	settings.antialiasingLevel = 4u;

	// Create a reference to the game and run
	Game& game = Game(settings);
	game.run();
}