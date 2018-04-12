#ifndef GAME_H
#define GAME_H

//@author Oisin Wilson
//@login C00213826
//@Known Bugs:
// no known bugs

#include"Vector3.h"

#include <string>
#include <sstream>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>


using namespace std;
using namespace sf;
using namespace glm;


class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	RenderWindow window;
	Clock clock;
	Time time;
	bool animate = false;
	vec3 animation = vec3(0.0f);
	float rotation = 0.0f;
	bool isRunning = false;

	void initialize();
	void update();
	void render();
	void unload();

	bool shot{ false };

	int score{ 0 };
	int lives{ 5 };

	gpp::Vector3D direction;
};

#endif  // ! GAME_H