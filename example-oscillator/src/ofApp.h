#pragma once

#include "ofMain.h"
#include "ofxPedal.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void audioOut(float* buffer, int bufferSize, int nChannels);
		void exit();

  private:

	TSine oscillator;
};
