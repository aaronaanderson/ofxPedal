#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

  ofSoundStreamSetup(2, 0, pdlSettings::sampleRate, pdlSettings::bufferSize, 4);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}
//--------------------------------------------------------------
void ofApp::audioOut(float* buffer, int bufferSize, int nChannels){
  for(int i = 0; i < bufferSize; i++){
    float currentSample = oscillator.generateSample();
    buffer[i * nChannels + 0] = currentSample*0.1f;
  }
}
//--------------------------------------------------------------
void ofApp::exit(){
  
}
