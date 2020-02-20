#include "ofxBitznBobz.h"

using namespace ofxBitznBobz;
void ofxBitznBobz::drawGradientBackground(ofColor col1, ofColor col2)
{
	glBegin(GL_QUADS);
	glColor3f(col1.r / 255.0, col1.g / 255.0, col1.b / 255.0);
	glVertex2i(0, 0);
	glColor3f(col1.r / 255.0, col1.g / 255.0, col1.b / 255.0);
	glVertex2i(ofGetWidth(), 0);

	glColor3f(col2.r / 255.0, col2.g / 255.0, col2.b / 255.0);
	glVertex2i(ofGetWidth(), ofGetHeight());
	glColor3f(col2.r / 255.0, col2.g / 255.0, col2.b / 255.0);
	glVertex2i(0, ofGetHeight());
	glEnd();
}
