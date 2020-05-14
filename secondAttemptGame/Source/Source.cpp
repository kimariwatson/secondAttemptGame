#include<string>
#include"Engine.h"

using namespace std;

int main() {
	string path{ "...." };
	Engine* engine = new Engine(path);
	while (engine->run()) {};
	return 0;
}