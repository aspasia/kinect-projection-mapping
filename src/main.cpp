#include "ofMain.h"
#include "ofApp.h"

int w = 1024;
int h = 768;

//========================================================================
int main( ){
	ofSetupOpenGL(w,h,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
