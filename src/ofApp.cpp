#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < BOIDS; i++) {
		boids[i] = new boid(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()), ofRandom(-10, 10), ofRandom(-10, 10), boids, BOIDS);
	}
	ofSetFrameRate(25);
	//ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < BOIDS; i++) {
		boids[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);
	for (int i = 0; i < BOIDS; i++) {
		boids[i]->draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	for (int i = 0; i < BOIDS; i++) {
		boids[i]->align();
	}
}

