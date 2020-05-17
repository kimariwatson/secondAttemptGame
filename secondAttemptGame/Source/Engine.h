#ifndef ENGINE_H
#define ENGINE_H

#include<string>
#include<vector>
#include"Library.h"
#include"Object.h"
using namespace std;
class Engine {
public:
	Engine()=delete;
	Engine(string path);
	~Engine();
	void loadLevel(string levelPath);
	void update();
	void draw();
	bool run();
	void saveGame();
private:
	Library* objectLibrary;
	vector<Object*>objects;
};
#endif // !ENGINE_H

