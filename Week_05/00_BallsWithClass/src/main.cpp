#include "ofApp.h"


int main()
{
	ofGLWindowSettings settings;
	settings.setGLVersion(3, 2);
	settings.width = 800;
	settings.height = 600;
	ofCreateWindow(settings);
	ofRunApp(std::make_shared<ofApp>());
}
