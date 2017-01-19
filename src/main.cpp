#include "ofMain.h"
#include "ofApp.h"
#include <ofVideoProjectionApp.h>

int w = 1024;
int h = 768;

//========================================================================
int main( ){
    
    ofGLWindowSettings settings;
    settings.width = w;
    settings.height = h;
    settings.setPosition(ofVec2f(300,0));
    auto mainWindow = ofCreateWindow(settings);
    
    settings.width = w;
    settings.height = h;
    settings.setPosition(ofVec2f(0,0));
    auto videoProjectionWindow = ofCreateWindow(settings);
    
    auto mainApp = make_shared<ofApp>();
    auto videoProjectionApp = make_shared<VideoProjectionApp>();
    
    ofRunApp(videoProjectionWindow, videoProjectionApp);
    ofRunApp(mainWindow, mainApp);
    ofRunMainLoop();

}
