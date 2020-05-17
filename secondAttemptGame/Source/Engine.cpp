#include "Engine.h"

Engine::Engine(string path)
{
	loadLevel(path);
}

Engine::~Engine()
{
}

void Engine::loadLevel(string levelPath)
{
	tinyxml2::XMLDocument doc;
	doc.LoadFile(levelPath.c_str());
	tinyxml2::XMLElement* root = doc.FirstChildElement("Game");
	tinyxml2::XMLElement* element{root->FirstChildElement()};
	while (element != nullptr)
	{
		objects.push_back(objectLibrary->library)
	}
}

void Engine::update()
{
}

void Engine::draw()
{
}

bool Engine::run()
{
	return false;
}

void Engine::saveGame()
{
}
