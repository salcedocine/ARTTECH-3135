#pragma once


#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:
	void setup()
	{
		ofSetWindowShape(1024, 768);

		angleDegrees = 0;
		radius = 100;
		scaleX = 1;
		scaleY = 1;
	}


	void update()
	{
		angleDegrees += 2;

		scaleX += ofRandom(-1,1);
		scaleY += ofRandom(-1,1);
	}


	void draw()
	{
		ofBackground(0);

		float centerX = ofGetWidth() / 2;
		float centerY = ofGetHeight() / 2;

		ofPushMatrix();
		ofTranslate(centerX,centerY); // create a new origin @ centerX, centerY
		ofDrawEllipse(0,0,10,10);

		ofRotateZ(angleDegrees);
		ofDrawLine(0,0,radius,0);

		// this push matrix will inherit the existing transformations
		ofPushMatrix();
		ofTranslate(radius,0);
		ofDrawEllipse(0,0,10,10);

		ofRotateZ(angleDegrees);
		ofDrawLine(0,0,radius,0);

		ofPushMatrix();
		ofTranslate(radius,0);
		ofScale(scaleX,scaleY);
		ofDrawEllipse(0,0,10,10);

		ofPopMatrix();

		ofPopMatrix();

		ofPopMatrix();
	}


	float angleDegrees;
	float radius;

	float scaleX;
	float scaleY;

};
