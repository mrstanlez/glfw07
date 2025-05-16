// Filename: objects.h
// Action: draw, generate objects from loaded structures

#include "files.h"

const float axesSize = 3.0;

//----- FUNCTIONS ------------------------------------------------------
void drawLine2D(float sx, float sy, float ex, float ey);
void drawLine(float sx, float sy, float sz, float ex, float ey,
	float ez);
void drawChar3D(int n);
void drawText3D(const char *text, unsigned textLineWidth, 
	float posx, float posy, float posz,
	float rotx, float roty, float rotz, float scale1);
void drawAxes(float axesSize, unsigned lineWidth);
void drawGrid2D(float gridLength, float gridCell);
void drawGrid(float gridLength, float gridCell);
void drawModel();

//----------------------------------------------------------------------

void drawLine2D(float sx, float sy, float ex, float ey){
	glVertex2f(sx, sy); glVertex2f(ex, ey);
}

void drawLine(float sx, float sy, float sz, float ex, float ey,
	float ez){
	glVertex3f(sx, sy, sz); glVertex3f(ex, ey, ez);
}

void drawChar3D(int n){
	glBegin(GL_LINES);
	if (n == 40) {
		// (		
		glVertex2f(0.25, 0.7); glVertex2f(0.35, 1.0);
		glVertex2f(0.25, 0.3); glVertex2f(0.25, 0.7);
		glVertex2f(0.25, 0.3); glVertex2f(0.35, 0.0);
	} else if (n == 41) {
		// )		
		glVertex2f(0.25, 0.7); glVertex2f(0.15, 1.0);
		glVertex2f(0.25, 0.3); glVertex2f(0.25, 0.7);
		glVertex2f(0.25, 0.3); glVertex2f(0.15, 0.0);		
	} else if (n == 42) {
		// *		
		glVertex2f(0.1, 0.5); glVertex2f(0.4, 0.5);
		glVertex2f(0.25, 0.5); glVertex2f(0.25, 0.7);
		glVertex2f(0.15, 0.2); glVertex2f(0.25, 0.5);
		glVertex2f(0.35, 0.2); glVertex2f(0.25, 0.5);
	} else if (n == 43) {
		// +
		glVertex2f(0.05, 0.5); glVertex2f(0.45, 0.5);
		glVertex2f(0.25, 0.15); glVertex2f(0.25, 0.85);
	} else if (n == 44) {
		// ,
		glVertex2f(0.2, -0.2); glVertex2f(0.3, 0.2);		
	} else if (n == 45) {
		// -
		glVertex2f(0.05, 0.5); glVertex2f(0.45, 0.5);		
	} else if (n == 46) {
		// .
		glVertex2f(0.25, 0.0); glVertex2f(0.3, 0.0);		
	} else if (n == 47) {
		// /
		glVertex2f(0.1, 0.0); glVertex2f(0.4, 1.0);		
	} else if (n == 48) {
		// 0
		glVertex2f(0.05, 0.2); glVertex2f(0.05, 0.8);
		glVertex2f(0.05, 0.8); glVertex2f(0.15, 1.0);
		glVertex2f(0.15, 1.0); glVertex2f(0.35, 1.0);
		glVertex2f(0.35, 1.0); glVertex2f(0.45, 0.8);
		glVertex2f(0.45, 0.8); glVertex2f(0.45, 0.2);
		glVertex2f(0.45, 0.2); glVertex2f(0.35, 0.0);
		glVertex2f(0.35, 0.0); glVertex2f(0.15, 0.0);
		glVertex2f(0.15, 0.0); glVertex2f(0.05, 0.2);
		glVertex2f(0.15, 0.0); glVertex2f(0.35, 1.0);
	} else if (n == 49) {
		// 1
		glVertex2f(0.25, 0.0); glVertex2f(0.25, 1.0);
		glVertex2f(0.0, 0.75); glVertex2f(0.25, 1.0);
	} else if (n == 50) {
		// 2
		glVertex2f(0.0, 0.75); glVertex2f(0.0, 0.9);
		glVertex2f(0.0, 0.9); glVertex2f(0.1, 1.0);
		glVertex2f(0.1, 1.0); glVertex2f(0.4, 1.0);	
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.9);
		glVertex2f(0.5, 0.9); glVertex2f(0.5, 0.6);
		glVertex2f(0.5, 0.6); glVertex2f(0.0, 0.0);
		glVertex2f(0.0, 0.0); glVertex2f(0.5, 0.0);
	} else if (n == 51) {
		// 3
		glVertex2f(0.0, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.4, 0.5);
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.4, 0.0);
		glVertex2f(0.1, 0.5); glVertex2f(0.4, 0.5);		
		glVertex2f(0.0, 0.0); glVertex2f(0.4, 0.0);
	} else if (n == 52) {
		// 4
		glVertex2f(0.4, 0.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.0, 0.3); glVertex2f(0.4, 1.0);
		glVertex2f(0.0, 0.3); glVertex2f(0.5, 0.3);
	} else if (n == 53) {
		// 5
		glVertex2f(0.0, 1.0); glVertex2f(0.4, 1.0);		
		glVertex2f(0.0, 1.0); glVertex2f(0.0, 0.5);
		glVertex2f(0.0, 0.5); glVertex2f(0.4, 0.5);		
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.4, 0.0);
		glVertex2f(0.0, 0.0); glVertex2f(0.4, 0.0);
	} else if (n == 54) {
		// 6
		glVertex2f(0.0, 0.2); glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.8); glVertex2f(0.1, 1.0);
		glVertex2f(0.1, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.4, 0.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.4, 0.5);
		glVertex2f(0.0, 0.2); glVertex2f(0.1, 0.0);		
		glVertex2f(0.1, 0.0); glVertex2f(0.4, 0.0);
	} else if (n == 55) {
		// 7
		glVertex2f(0.0, 1.0); glVertex2f(0.5, 1.0);
		glVertex2f(0.5, 1.0); glVertex2f(0.25, 0.0);
	} else if (n == 56) {
		// 8
		glVertex2f(0.0, 0.75); glVertex2f(0.1, 1.0);
		glVertex2f(0.0, 0.75); glVertex2f(0.1, 0.5);
		glVertex2f(0.1, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.4, 0.5);
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.4, 0.0);
		glVertex2f(0.1, 0.5); glVertex2f(0.4, 0.5);		
		glVertex2f(0.1, 0.0); glVertex2f(0.4, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.0, 0.25);
		glVertex2f(0.0, 0.25); glVertex2f(0.1, 0.5);
	} else if (n == 57) {
		// 9
		glVertex2f(0.1, 0.5); glVertex2f(0.5, 0.5);
		glVertex2f(0.0, 0.75); glVertex2f(0.1, 1.0);
		glVertex2f(0.0, 0.75); glVertex2f(0.1, 0.5);
		glVertex2f(0.1, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.5, 0.2);
		glVertex2f(0.5, 0.2); glVertex2f(0.4, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.4, 0.0);
	} else if (n == 58) {
		// :
		glVertex2f(0.25, 0.3); glVertex2f(0.3, 0.3);
		glVertex2f(0.25, 0.7); glVertex2f(0.3, 0.7);
	} else if (n == 61) {
		// =
		glVertex2f(0.1, 0.3); glVertex2f(0.4, 0.3);
		glVertex2f(0.1, 0.7); glVertex2f(0.4, 0.7);
	} else if ( n == 65) {
		// A
		glVertex2f(0.0, 0.0); glVertex2f(0.25, 1.0);
		glVertex2f(0.25, 1.0); glVertex2f(0.5, 0.0);
		glVertex2f(0.06, 0.25); glVertex2f(0.44, 0.25);
	} else if ( n == 66) {
		// B
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.4, 0.5);
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.4, 0.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.4, 0.5);		
		glVertex2f(0.0, 0.0); glVertex2f(0.4, 0.0);
	} else if ( n == 67) {
		// C
		glVertex2f(0.0, 0.2); glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.8); glVertex2f(0.1, 1.0);
		glVertex2f(0.1, 1.0); glVertex2f(0.5, 1.0);
		glVertex2f(0.0, 0.2); glVertex2f(0.1, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.5, 0.0);
	} else if ( n == 68) {
		// D
		glVertex2f(0.05, 0.0); glVertex2f(0.05, 1.0);
		glVertex2f(0.3, 1.0); glVertex2f(0.05, 1.0);
		glVertex2f(0.3, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.3, 0.0);
		glVertex2f(0.3, 0.0); glVertex2f(0.05, 0.0);		
		
		//~ glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		//~ glVertex2f(0.4, 1.0); glVertex2f(0.0, 1.0);
		//~ glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.5);
		//~ glVertex2f(0.5, 0.5); glVertex2f(0.4, 0.0);
		//~ glVertex2f(0.0, 0.0); glVertex2f(0.4, 0.0);
	} else if ( n == 69) {
		// E
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.5, 1.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.3, 0.5);
		glVertex2f(0.0, 0.0); glVertex2f(0.5, 0.0);
	} else if ( n == 70) {
		// F
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.5, 1.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.3, 0.5);
	} else if ( n == 71) {
		// G
		glVertex2f(0.0, 0.2); glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.8); glVertex2f(0.1, 1.0);
		glVertex2f(0.1, 1.0); glVertex2f(0.5, 1.0);
		glVertex2f(0.0, 0.2); glVertex2f(0.1, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.5, 0.0);
		glVertex2f(0.5, 0.0); glVertex2f(0.5, 0.5);
		glVertex2f(0.5, 0.5); glVertex2f(0.3, 0.5);
	} else if ( n == 72) {
		// H
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.5, 0.5);
		glVertex2f(0.5, 0.0); glVertex2f(0.5, 1.0);
	} else if ( n == 73) {
		// I
		glVertex2f(0.15, 0.0); glVertex2f(0.35, 0.0);
		glVertex2f(0.25, 0.0); glVertex2f(0.25, 1.0);
		glVertex2f(0.15, 1.0); glVertex2f(0.35, 1.0);
	} else if ( n == 74) {
		// J		
		glVertex2f(0.1, 0.0); glVertex2f(0.4, 0.0);
		glVertex2f(0.4, 0.0); glVertex2f(0.5, 0.2);		
		glVertex2f(0.5, 0.2); glVertex2f(0.5, 1.0);		
	} else if ( n == 75) {
		// K
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.5, 1.0);
		glVertex2f(0.0, 0.5); glVertex2f(0.5, 0.0);
	} else if ( n == 76) {
		// L
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 0.0); glVertex2f(0.5, 0.0);
	} else if ( n == 77) {
		// M
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.25, 0.5);		
		glVertex2f(0.25, 0.5); glVertex2f(0.5, 1.0);		
		glVertex2f(0.5, 0.0); glVertex2f(0.5, 1.0);
	} else if ( n == 78) {
		// N
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.5, 0.0);
		glVertex2f(0.5, 0.0); glVertex2f(0.5, 1.0);
	} else if ( n == 79) {
		// O
		glVertex2f(0.05, 0.2); glVertex2f(0.05, 0.8);
		glVertex2f(0.05, 0.8); glVertex2f(0.15, 1.0);
		glVertex2f(0.15, 1.0); glVertex2f(0.35, 1.0);
		glVertex2f(0.35, 1.0); glVertex2f(0.45, 0.8);
		glVertex2f(0.45, 0.8); glVertex2f(0.45, 0.2);
		glVertex2f(0.45, 0.2); glVertex2f(0.35, 0.0);
		glVertex2f(0.35, 0.0); glVertex2f(0.15, 0.0);
		glVertex2f(0.15, 0.0); glVertex2f(0.05, 0.2);
	} else if ( n == 80) {
		// P
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.4, 0.5);
		glVertex2f(0.0, 0.5); glVertex2f(0.4, 0.5);
	} else if ( n == 81) {
		// Q
		glVertex2f(0.0, 0.2); glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.8); glVertex2f(0.1, 1.0);
		glVertex2f(0.1, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.8);
		glVertex2f(0.5, 0.8); glVertex2f(0.5, 0.2);
		glVertex2f(0.5, 0.2); glVertex2f(0.4, 0.0);
		glVertex2f(0.4, 0.0); glVertex2f(0.1, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.0, 0.2);
		glVertex2f(0.4, 0.2); glVertex2f(0.5, 0.0);		
	} else if ( n == 82) {
		// R
		glVertex2f(0.0, 0.0); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.4, 1.0);
		glVertex2f(0.4, 1.0); glVertex2f(0.5, 0.75);
		glVertex2f(0.5, 0.75); glVertex2f(0.4, 0.5);
		glVertex2f(0.0, 0.5); glVertex2f(0.4, 0.5);
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.0);
	} else if ( n == 83) {
		// S
		glVertex2f(0.1, 1.0); glVertex2f(0.5, 1.0);		
		glVertex2f(0.0, 0.75); glVertex2f(0.1, 1.0);
		glVertex2f(0.0, 0.75); glVertex2f(0.1, 0.5);
		glVertex2f(0.1, 0.5); glVertex2f(0.4, 0.5);		
		glVertex2f(0.4, 0.5); glVertex2f(0.5, 0.25);
		glVertex2f(0.5, 0.25); glVertex2f(0.4, 0.0);
		glVertex2f(0.0, 0.0); glVertex2f(0.4, 0.0);
	} else if ( n == 84) {
		// T
		glVertex2f(0.0, 1.0); glVertex2f(0.5, 1.0);
		glVertex2f(0.25, 0.0); glVertex2f(0.25, 1.0);		
	} else if ( n == 85) {
		// U
		glVertex2f(0.0, 0.2); glVertex2f(0.0, 1.0);
		glVertex2f(0.0, 0.2); glVertex2f(0.1, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.4, 0.0);
		glVertex2f(0.4, 0.0); glVertex2f(0.5, 0.2);
		glVertex2f(0.5, 0.2); glVertex2f(0.5, 1.0);
	} else if ( n == 86) {
		// V
		glVertex2f(0.0, 1.0); glVertex2f(0.25, 0.0);
		glVertex2f(0.25, 0.0); glVertex2f(0.5, 1.0);		
	} else if ( n == 87) {
		// W
		glVertex2f(0.0, 1.0); glVertex2f(0.1, 0.0);
		glVertex2f(0.1, 0.0); glVertex2f(0.25, 0.5);
		glVertex2f(0.25, 0.5); glVertex2f(0.4, 0.0);
		glVertex2f(0.4, 0.0); glVertex2f(0.5, 1.0);		
	} else if ( n == 88) {
		// X
		glVertex2f(0.0, 0.0); glVertex2f(0.5, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.5, 0.0);
	} else if (n == 89) {
		// Y
		glVertex2f(0.0, 1.0); glVertex2f(0.25, 0.5);
		glVertex2f(0.5, 1.0); glVertex2f(0.25, 0.5);
		glVertex2f(0.25, 0.5); glVertex2f(0.25, 0.0);
	} else if (n == 90) {
		// Z
		glVertex2f(0.0, 0.0); glVertex2f(0.5, 0.0);
		glVertex2f(0.0, 0.0); glVertex2f(0.5, 1.0);
		glVertex2f(0.0, 1.0); glVertex2f(0.5, 1.0);
	} 
	glEnd();
}

void drawText3D(const char *text, unsigned textLineWidth, 
	float posx, float posy, float posz,
	float rotx, float roty, float rotz, float scale1){
	
	glTranslatef(posx, posy, posz);
	glScalef(scale1, scale1, scale1);
	glRotatef(rotx, 0.0, 0.0, 1.0);
	glRotatef(roty, 1.0, 0.0, 0.0);
	glRotatef(rotz, 0.0, 1.0, 0.0);	
	
	textureHide();
	glLineWidth(textLineWidth);	

	float spaceChar = 0.6f;
	for(int i=0; i<strlen(text); i++) {
		glTranslatef(i*spaceChar, 0.0, 0.0);
		drawChar3D((int)text[i]);
		glTranslatef(-(i*spaceChar), 0.0, 0.0);
	}	
	
	glRotatef(-rotx, 0.0, 0.0, 1.0);
	glRotatef(-roty, 1.0, 0.0, 0.0);
	glRotatef(-rotz, 0.0, 1.0, 0.0);
	glScalef(1.0/scale1, 1.0/scale1, 1.0/scale1);
	glTranslatef(-posx, -posy, -posz);	
}

void drawAxes(float axesSize, unsigned lineWidth){
	textureHide();
	glLineWidth(lineWidth);
	glBegin(GL_LINES);
		glColor3f(1.0, 0.0, 0.0);
			drawLine(-axesSize, 0.0, 0.0, axesSize, 0.0, 0.0);
		glColor3f(0.0, 1.0, 0.0);		
			drawLine(0.0, 0.0, -axesSize, 0.0, 0.0, axesSize);		
		glColor3f(0.0, 0.0, 1.0);
			drawLine(0.0, -axesSize, 0.0, 0.0, axesSize, 0.0);
	glEnd();
	glColor4f(1.0, 1.0, 1.0, 1.0);
}

void drawGrid2D(float gridLength, float gridCell){
	textureHide();
	glLineWidth(1);
	glColor4f(0.3, 0.3, 0.3, 0.3);
	glBegin(GL_LINES);	
	for(int k=0; k<(1/gridCell)*gridLength; k++) {		
		drawLine2D(0, gridCell*k, gridLength, gridCell*k);
		drawLine2D(gridCell*k, 0, gridCell*k, gridLength);
	}
	glEnd();
	glColor4f(1.0, 1.0, 1.0, 1.0);
}

void drawGrid(float gridLength, float gridCell){
	textureHide();
	glLineWidth(1);
	glColor4f(0.3, 0.3, 0.3, 0.3);
	glBegin(GL_LINES);	
	for(int k=0; k<gridLength*(1/gridCell); k++) {
		drawLine(-gridLength, 0.0, gridCell*(1+k), gridLength, 0.0, gridCell*(1+k));
		drawLine(-gridLength, 0.0, -gridCell*(1+k), gridLength, 0.0, -gridCell*(1+k));
		drawLine(gridCell*(1+k), 0.0, -gridLength, gridCell*(1+k), 0.0,gridLength);
		drawLine(-gridCell*(1+k), 0.0, -gridLength, -gridCell*(1+k), 0.0,gridLength);
	}
	glEnd();
	glColor4f(1.0, 1.0, 1.0, 1.0);
}

void drawModel(){
	// Points
	glColor4f(1, 1, 1, 1);
	glPointSize(g_pointSize);
	glBegin(GL_POINTS);
		for(int k=0; k<numPoints; k++){
			glVertex3f(points[k].x,points[k].y,points[k].z );
		}
	glEnd();
	
	// Faces
	for(int l=0; l<numFaces; l++){
		glColor4f(1, 1, 1, 1);
		textureBind(tex[faces[l].id].id);
		glBegin(GL_TRIANGLES);
			glTexCoord2f(faces[l].ta.x, faces[l].ta.y);
			glVertex3f(points[faces[l].a].x, points[faces[l].a].y, points[faces[l].a].z );
			glTexCoord2f(faces[l].tb.x, faces[l].tb.y);
			glVertex3f(points[faces[l].b].x, points[faces[l].b].y, points[faces[l].b].z );
			glTexCoord2f(faces[l].tc.x, faces[l].tc.y);
			glVertex3f(points[faces[l].c].x, points[faces[l].c].y, points[faces[l].c].z );
		glEnd();
	}
	glFlush();
}
