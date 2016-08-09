#pragma once

#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "boid.h"


#define BOIDS 100

class ofApp : public ofBaseApp{
	private:
		boid *boids[BOIDS];

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
};
#endif
