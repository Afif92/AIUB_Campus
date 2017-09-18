#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>


using namespace  std;
bool ca1=false;
bool ca2=false;
bool ca3=false;
bool ca4=false;
bool ro1=false;
bool ro2=false;
bool ro3=false;
bool ro4=false;
bool fullScreen=false;

// angle of rotation for the camera direction
float angle=0.0;
float _angle=90.0;
// actual vector representing the camera’s direction
float lx=0.0,lz=-1.0;
// XZ position of the camera
float x=46.0,z=49.0;

float b,c1,c2,c3,c4,r1,r2,r3,r4,bldl=0,s=1,ll=0.5,m=0,m1=0,bl1=1,bl2=1,bl3=1,bl4=1,z1=0,z2=0;



void initRendering() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}


void drawCircle(int x1, int y1, int radius)
{
	float x2, y2;
	float angle;
	glBegin(GL_POLYGON);
	for (angle = .1f; angle<360.0f; angle += 1.0f)
	{
		x2 = x1 + sin(angle)*radius;
		y2 = y1 + cos(angle)*radius;
		glVertex2f(x2, y2);
	}
	glEnd();
}

void moon(){
    glPushMatrix();
    glColor3f(1, 1, s);
    glTranslatef(19, 0.7, -14.0);
	drawCircle(1, 5, 1);
	glPopMatrix();


}

void nx1(){
    glPushMatrix();

glPushMatrix();

    glPushMatrix(); //wall_1
    glTranslatef(23, 0.1, 39.5);
    glScalef(0.1,4,25.0);

    glPushMatrix();
    glColor3f(0.9,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


    glPushMatrix(); //wall_2
    glTranslatef(25, 0.1, 39.5);
    glScalef(0.1,4,25.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();

    glPushMatrix(); //wall_3
    glTranslatef(28, 0.1, 39.5);
    glScalef(0.1,4,25.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


    glPushMatrix(); //wall_4
    glTranslatef(30, 0.1, 39.5);
    glScalef(0.1,4,25.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();
    glPopMatrix();
glPopMatrix();
//part_2
glPushMatrix();
    glPushMatrix(); //wall_1
    glTranslatef(23, 0.1, 15);
    glScalef(0.1,4,22.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


    glPushMatrix(); //wall_2
    glTranslatef(25, 0.1, 15);
    glScalef(0.1,4,22.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();

    glPushMatrix(); //wall_3
    glTranslatef(28, 0.1, 15);
    glScalef(0.1,4,22.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


    glPushMatrix(); //wall_4
    glTranslatef(30, 0.1, 15);
    glScalef(0.1,4,22.0);

    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();

glPopMatrix();

glPushMatrix();



    glPushMatrix(); //side_wall_1
    glTranslatef(27, 0.1, 49.3);
    glRotatef(90,0,1,0);

    glScalef(0.1,4,12.0);


    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();

glPushMatrix();



    glPushMatrix(); //side_wall_2
    glTranslatef(27, 0.1, 6.3);
    glRotatef(90,0,1,0);

    glScalef(0.1,4,12.0);


    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


glPushMatrix();



    glPushMatrix(); //side_wall_l1
    glTranslatef(29, 0.1, 29.5);
    glRotatef(90,0,1,0);

    glScalef(0.1,4,2.8);


    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


glPushMatrix();



    glPushMatrix(); //side_wall_l2
    glTranslatef(24, 0.1, 29.5);
    glRotatef(90,0,1,0);

    glScalef(0.1,4,2.8);


    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


glPushMatrix();



    glPushMatrix(); //side_wall_r1
    glTranslatef(29, 0.1, 23.8);
    glRotatef(90,0,1,0);

    glScalef(0.1,4,2.8);


    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();


glPushMatrix();



    glPushMatrix(); //side_wall_r2
    glTranslatef(24, 0.1, 23.8);
    glRotatef(90,0,1,0);

    glScalef(0.1,4,2.8);


    glPushMatrix();
    //glColor3f(0.2,0.4,0.3);
    glTranslatef(0, 0.2, 0.0);
    glutSolidCube(.8);
    glPopMatrix();

glPopMatrix();



glPopMatrix();


}

void nx1road(){

    // Draw road
glPushMatrix();
glColor3f(0.5, 0.5, 0.5);
glBegin(GL_QUADS);
glVertex3f(22.0f, 0.01, 23.5f);
glVertex3f(22.0f, 0.01, 29.5f);
glVertex3f( 43.0f, 0.01, 29.5f);
glVertex3f( 43.0f, 0.01, 23.5f);
glEnd();
glPopMatrix();



}

void nx1floor(){

    // Draw road
glPushMatrix();
glColor3f(0.5, 0.5, 0.5);
glBegin(GL_QUADS);
glVertex3f(21.5f, 0.01, 6.5f);
glVertex3f(31.5f, 0.01, 6.5f);
glVertex3f(31.5f, 0.01, 49.5f);
glVertex3f(21.5f, 0.01, 49.5f);
glEnd();
glPopMatrix();



}



void footpathL(){

     glPushMatrix(); //Save the current state of transformations
    glTranslatef(42.65, 0.0, 5.0);
    glScalef(1.8,0.5,1.3);

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,0.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,0.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,1.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,1.70);
    glutSolidCube(.5);
    glPopMatrix();
      glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,2.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,2.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,3.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,3.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,4.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,4.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,5.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,5.70);
    glutSolidCube(.5);
    glPopMatrix();
      glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,6.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,6.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,7.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,7.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,8.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,8.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,9.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,9.70);
    glutSolidCube(.5);
    glPopMatrix();
      glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,10.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,10.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,11.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,11.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,12.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,12.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,13.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,13.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,14.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,14.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,15.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,15.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,16.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,16.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,17.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,17.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,18.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,18.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,19.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,19.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,20.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,20.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,21.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,21.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,22.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,22.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,23.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,23.70);
    glutSolidCube(.5);
    glPopMatrix();


     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,24.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,24.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,25.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,25.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,26.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,26.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,27.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,27.70);
    glutSolidCube(.5);
    glPopMatrix();








glPopMatrix();

glPushMatrix();
    glColor3f(0.6,0,0);
    glTranslatef(42.57, 0.2, 23.0);
    glScalef(1.6,0.1,70.0);
    glutSolidCube(.5);
    glPopMatrix();

}

void footpathL1(){

     glPushMatrix(); //Save the current state of transformations
    glTranslatef(42.65, 0.0, 5.0);
    glScalef(1.8,0.5,1.3);

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,0.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,0.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,1.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,1.70);
    glutSolidCube(.5);
    glPopMatrix();
      glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,2.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,2.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,3.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,3.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,4.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,4.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,5.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,5.70);
    glutSolidCube(.5);
    glPopMatrix();
      glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,6.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,6.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,7.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,7.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,8.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,8.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,9.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,9.70);
    glutSolidCube(.5);
    glPopMatrix();
      glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,10.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,10.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,11.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,11.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,12.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,12.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,13.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,13.70);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,14.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,14.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,15.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,15.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,16.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,16.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,17.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,17.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,18.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,18.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,19.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,19.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,20.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,20.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,21.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,21.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,22.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,22.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,23.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,23.70);
    glutSolidCube(.5);
    glPopMatrix();


     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,24.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,24.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,25.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,25.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,26.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,26.70);
    glutSolidCube(.5);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glTranslatef(-0.055,0.15,27.20);
    glutSolidCube(.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-0.055,0.15,27.70);
    glutSolidCube(.5);
    glPopMatrix();








glPopMatrix();

glPushMatrix();
    glColor3f(0.6,0,0);
    glTranslatef(42.57, 0.2, 23.0);
    glScalef(1.6,0.1,70.0);
    glutSolidCube(.5);
    glPopMatrix();

}


void nx1roof(void)
{


    glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    glColor3f(0.5,1.0,0.5);    // Color Blue
    glVertex3f(22.0,3.0,24);    // Top Right Of The Quad (Top)
    glVertex3f(31.0,3.0,24.0);    // Top Left Of The Quad (Top)
    glVertex3f(31.0,3.0,5.0);    // Bottom Left Of The Quad (Top)
    glVertex3f(22.0,3.0,5.0);    // Bottom Right Of The Quad (Top)

   // glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(22,2.5,24.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(31,2.5,24.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(31,2.5,5.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22,2.5,5.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,1.0f,1.0f);    // Color Red
    glVertex3f(22.0,2.5,24.0);    // Top Right Of The Quad (Front)
    glVertex3f(22.0,3.0,24.0);    // Top Left Of The Quad (Front)
    glVertex3f(22.0,3.0,5.0);    // Bottom Left Of The Quad (Front)
    glVertex3f(22.0,2.5,5.0);    // Bottom Right Of The Quad (Front)

    //glColor3f(1.0f,1.0f,0.0f);    // Color Yellow
    glVertex3f(22.0,2.5,5.0);    // Top Right Of The Quad (Back)
    glVertex3f(22,3.0,5.0);    // Top Left Of The Quad (Back)
    glVertex3f(31,3.0,5.0);    // Bottom Left Of The Quad (Back)
    glVertex3f(31,2.5,5.0);    // Bottom Right Of The Quad (Back)

    //glColor3f(0.0f,0.8f,1.0f);    // Color Blue
    glVertex3f(31,3.0,5.0);    // Top Right Of The Quad (Left)
    glVertex3f(31,2.5,5.0);    // Top Left Of The Quad (Left)
    glVertex3f(31,2.5,24.0);    // Bottom Left Of The Quad (Left)
    glVertex3f(31,3.0,24.0);    // Bottom Right Of The Quad (Left)

    //glColor3f(1.0f,0.0f,1.0f);    // Color Violet
    glVertex3f(22.0,2.5,24.0);    // Top Right Of The Quad (Right)
    glVertex3f(22,3,24.0);    // Top Left Of The Quad (Right)
    glVertex3f(31,3,24.0);    // Bottom Left Of The Quad (Right)
    glVertex3f(31,2.5,24.0);    // Bottom Right Of The Quad (Right)


    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}


void nx1roof1(void)
{


    glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    glColor3f(0.5,1.0,0.5);    // Color Blue
    glVertex3f(22.0,3.0,29);    // Top Right Of The Quad (Top)
    glVertex3f(31.0,3.0,29.0);    // Top Left Of The Quad (Top)
    glVertex3f(31.0,3.0,49.0);    // Bottom Left Of The Quad (Top)
    glVertex3f(22.0,3.0,49.0);    // Bottom Right Of The Quad (Top)

   // glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(22,2.5,29.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(31,2.5,29.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(31,2.5,49.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22,2.5,49.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,1.0f,1.0f);    // Color Red
    glVertex3f(22.0,2.5,29.0);    // Top Right Of The Quad (Front)
    glVertex3f(22.0,3.0,29.0);    // Top Left Of The Quad (Front)
    glVertex3f(22.0,3.0,49.0);    // Bottom Left Of The Quad (Front)
    glVertex3f(22.0,2.5,49.0);    // Bottom Right Of The Quad (Front)

    //glColor3f(1.0f,1.0f,0.0f);    // Color Yellow
    glVertex3f(22.0,2.5,49.0);    // Top Right Of The Quad (Back)
    glVertex3f(22,3.0,49.0);    // Top Left Of The Quad (Back)
    glVertex3f(31,3.0,49.0);    // Bottom Left Of The Quad (Back)
    glVertex3f(31,2.5,49.0);    // Bottom Right Of The Quad (Back)

    //glColor3f(0.0f,0.8f,1.0f);    // Color Blue
    glVertex3f(31,3.0,49.0);    // Top Right Of The Quad (Left)
    glVertex3f(31,2.5,49.0);    // Top Left Of The Quad (Left)
    glVertex3f(31,2.5,29.0);    // Bottom Left Of The Quad (Left)
    glVertex3f(31,3.0,29.0);    // Bottom Right Of The Quad (Left)

    //glColor3f(1.0f,0.0f,1.0f);    // Color Violet
    glVertex3f(22.0,2.5,29.0);    // Top Right Of The Quad (Right)
    glVertex3f(22,3,29.0);    // Top Left Of The Quad (Right)
    glVertex3f(31,3,29.0);    // Bottom Left Of The Quad (Right)
    glVertex3f(31,2.5,29.0);    // Bottom Right Of The Quad (Right)


    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}


void nx1roof2(void)
{


    glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    glColor3f(0.5,1.0,0.5);    // Color Blue
    glVertex3f(22.0,4.0,30);    // Top Right Of The Quad (Top)
    glVertex3f(31.0,4.0,30);    // Top Left Of The Quad (Top)
    glVertex3f(31.0,4.0,23.0);    // Bottom Left Of The Quad (Top)
    glVertex3f(22.0,4.0,23.0);    // Bottom Right Of The Quad (Top)

   // glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(22,3.0,30);    // Top Right Of The Quad (Bottom)
    glVertex3f(31,3.0,30.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(31,3.0,23.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22,3.0,23.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,1.0f,1.0f);    // Color Red
    glVertex3f(22.0,3,30.0);    // Top Right Of The Quad (Front)
    glVertex3f(22.0,4.0,30.0);    // Top Left Of The Quad (Front)
    glVertex3f(22.0,4.0,23.0);    // Bottom Left Of The Quad (Front)
    glVertex3f(22.0,3,23.0);    // Bottom Right Of The Quad (Front)

    //glColor3f(1.0f,1.0f,0.0f);    // Color Yellow
    glVertex3f(22.0,4,30.0);    // Top Right Of The Quad (Back)
    glVertex3f(22,3.0,30.0);    // Top Left Of The Quad (Back)
    glVertex3f(31,3.0,23.0);    // Bottom Left Of The Quad (Back)
    glVertex3f(31,4,23.0);    // Bottom Right Of The Quad (Back)

    //glColor3f(0.0f,0.8f,1.0f);    // Color Blue
    glVertex3f(31,3.0,30.0);    // Top Right Of The Quad (Left)
    glVertex3f(31,4,30.0);    // Top Left Of The Quad (Left)
    glVertex3f(31,4,23.0);    // Bottom Left Of The Quad (Left)
    glVertex3f(31,3.0,23.0);    // Bottom Right Of The Quad (Left)

    //glColor3f(1.0f,0.0f,1.0f);    // Color Violet
    glVertex3f(22.0,4,23.0);    // Top Right Of The Quad (Right)
    glVertex3f(22,3,23.0);    // Top Left Of The Quad (Right)
    glVertex3f(31,3,23.0);    // Bottom Left Of The Quad (Right)
    glVertex3f(31,4,23.0);    // Bottom Right Of The Quad (Right)


    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}


void dim(){

	glPushMatrix();

glPushMatrix();
    glColor3f(0.5,0.5,1.0);
    glTranslatef(12.0,0.02,14.0);
    glScalef(6,9.0,5);
    glutSolidCube(.5); //(GLdouble size)
    glPopMatrix();
	glPushMatrix();

	glTranslatef(11.95, 6, 13.98);
	glutSolidSphere(5,20,45);
	glDisable(GL_LIGHTING);
	glPopMatrix();

    glPopMatrix();

}


void wall_left(void)
{


    glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(0.2,2.0,50.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(0.2,0.0,50.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(0.2,0.0,0.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(0.2,2.0,0.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}

void wall_right1(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(0.2,2.0,50.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(0.2,0.0,50.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(43.2,0.0,50.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(43.2,2.0,50.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}

void wall_right3(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(0.2,2.0,1.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(0.2,0.0,1.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(49.2,0.0,1.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(49.2,2.0,1.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}



void wall_right2(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.5f,0.0f);    // Color Orange
    glVertex3f(49.2,2.0,50.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(49.2,0.0,50.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(49.2,0.0,0.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(49.2,2.0,0.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();
}

void car3(){

glPushMatrix();

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(45.6, 0.3, 2.0);
    glTranslatef(0.0, 0.0, c3); //Move to the center of the triangle
    glRotatef(180,0.0,1.0,0.0);


//Car body
         glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();
    glColor3f( 0.7,0.7,0.7);     // Color Blue
    glVertex3f( 0.15, 0.25,0.6);    // Top Right Of The Quad (Top)
    glVertex3f(-0.15, 0.25,0.6);    // Top Left Of The Quad (Top)
    glVertex3f(-0.15, 0.05, 0.8);    // Bottom Left Of The Quad (Top)
    glVertex3f( 0.15, 0.05, 0.8);    // Bottom Right Of The Quad (Top)

   glColor3f(0.7,0.7,0.7);   // Color Orange
    glVertex3f( 0.15, 0.25,-0.1);    // Top Right Of The Quad (Bottom)
    glVertex3f(-0.15, 0.25,-0.1);    // Top Left Of The Quad (Bottom)
    glVertex3f(-0.15, 0.05,-0.3);    // Bottom Left Of The Quad (Bottom)
    glVertex3f( 0.15, 0.05,-0.3);    // Bottom Right Of The Quad (Bottom)

       // Color Red
    glVertex3f(-0.15,0.05,0.8);    // Top Right Of The Quad (Front)
    glVertex3f( 0.15,0.05,0.8);    // Top Left Of The Quad (Front)
    glVertex3f( 0.15, 0.05,-0.3);    // Bottom Left Of The Quad (Front)
    glVertex3f(-0.15, 0.05,-0.3);    // Bottom Right Of The Quad (Front)

    glColor3f(1.0,0.3,0.3);    // Color Yellow
    glVertex3f(-0.15,0.25,0.6);    // Top Right Of The Quad (Back)
    glVertex3f(0.15,0.25,0.6);    // Top Left Of The Quad (Back)
    glVertex3f(0.15, 0.25,-0.1);    // Bottom Left Of The Quad (Back)
    glVertex3f( -0.15, 0.25,-0.1);    // Bottom Right Of The Quad (Back)

    glColor3f(1.0,0.0,0.0);    // Color Blue
    glVertex3f(-0.15, 0.25, 0.6);    // Top Right Of The Quad (Left)
    glVertex3f(-0.15, 0.05,0.8);    // Top Left Of The Quad (Left)
    glVertex3f(-0.15,0.05,-0.3);    // Bottom Left Of The Quad (Left)
    glVertex3f(-0.15,0.25, -0.1);    // Bottom Right Of The Quad (Left)

    glColor3f(1.0,0.0,0.0);    // Color Violet
    glVertex3f( 0.15, 0.05,0.8);    // Top Right Of The Quad (Right)
    glVertex3f( 0.15, 0.25, 0.6);    // Top Left Of The Quad (Right)
    glVertex3f( 0.15,0.25, -0.1);    // Bottom Left Of The Quad (Right)
    glVertex3f( 0.15,0.05,-0.3);    // Bottom Right Of The Quad (Right)


    glEnd();

    glPushMatrix();
    glColor3f(1.0,0,0.0);
    glTranslatef(0.00,0.05,0.21);
    glScalef(0.35,0.1,1.2);
    glutSolidCube(.9);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1.0);
    glTranslatef(0.00,0.1,0.3);
    glScalef(0.36,0.2,0.2);
    glutSolidCube(.9);
    glPopMatrix();


    //light back
    glPushMatrix();
    glColor3f(1.0,bl3,0.0);   //yellow light
    glTranslatef(0.11,0.11,0.75);
    glutSolidCube(.04);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,bl3,0.0);   //yellow light
    glTranslatef(-0.09,0.11,0.75);
    glutSolidCube(.04);
    glPopMatrix();

      //light front
    glPushMatrix();
    glColor3f(1.0,1.0,bldl);
    glTranslatef(0.11,0.11,-0.28);
    glutSolidCube(.04);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,bldl);   //yellow light
    glTranslatef(-0.09,0.11,-0.28);
    glutSolidCube(.04);
    glPopMatrix();

    //wheel_left
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(-0.13,0.0,0.0);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();

    //wheel_right
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(0.13,0.0,0.0);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();

    //wheel_left1
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(-0.13,0.0,0.5);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();

    //wheel_right1
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(0.13,0.0,0.5);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();


if(m1==0){
        //light on
      glPushMatrix();
      glTranslatef(-0.09,0.11,-0.3);


      glColor4f(1.0, 1.0,0.0,0.8);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.1,-0.1,-0.5);
    glVertex3f(-0.1,-0.1,-0.5);

    glEnd();

    glPopMatrix();
     //light on
      glPushMatrix();
      glTranslatef(0.11,0.11,-0.3);


      glColor4f(1.0, 1.0,0.0,0.8);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.1,-0.1,-0.5);
    glVertex3f(-0.1,-0.1,-0.5);

    glEnd();

    glPopMatrix();



   glPopMatrix();
   }
   if(m1==1){
    glPopMatrix();
   }
glPopMatrix();
}


void car4(){

glPushMatrix();

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(44.4, 0.3, 0.0);
    glScalef(1.6,1.4,1.6);
    glTranslatef(0.0, 0.0, c4); //Move to the center of the triangle



//Car body
         glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();
    glColor3f( 0.7,0.7,0.7);     // Color Blue
    glVertex3f( 0.15, 0.25,0.6);    // Top Right Of The Quad (Top)
    glVertex3f(-0.15, 0.25,0.6);    // Top Left Of The Quad (Top)
    glVertex3f(-0.15, 0.05, 0.8);    // Bottom Left Of The Quad (Top)
    glVertex3f( 0.15, 0.05, 0.8);    // Bottom Right Of The Quad (Top)

   glColor3f(0.7,0.7,0.7);   // Color Orange
    glVertex3f( 0.15, 0.25,-0.1);    // Top Right Of The Quad (Bottom)
    glVertex3f(-0.15, 0.25,-0.1);    // Top Left Of The Quad (Bottom)
    glVertex3f(-0.15, 0.05,-0.3);    // Bottom Left Of The Quad (Bottom)
    glVertex3f( 0.15, 0.05,-0.3);    // Bottom Right Of The Quad (Bottom)

       // Color Red
    glVertex3f(-0.15,0.05,0.8);    // Top Right Of The Quad (Front)
    glVertex3f( 0.15,0.05,0.8);    // Top Left Of The Quad (Front)
    glVertex3f( 0.15, 0.05,-0.3);    // Bottom Left Of The Quad (Front)
    glVertex3f(-0.15, 0.05,-0.3);    // Bottom Right Of The Quad (Front)

    glColor3f(1.0,0.3,0.3);    // Color Yellow
    glVertex3f(-0.15,0.25,0.6);    // Top Right Of The Quad (Back)
    glVertex3f(0.15,0.25,0.6);    // Top Left Of The Quad (Back)
    glVertex3f(0.15, 0.25,-0.1);    // Bottom Left Of The Quad (Back)
    glVertex3f( -0.15, 0.25,-0.1);    // Bottom Right Of The Quad (Back)

    glColor3f(1.0,0.0,0.0);    // Color Blue
    glVertex3f(-0.15, 0.25, 0.6);    // Top Right Of The Quad (Left)
    glVertex3f(-0.15, 0.05,0.8);    // Top Left Of The Quad (Left)
    glVertex3f(-0.15,0.05,-0.3);    // Bottom Left Of The Quad (Left)
    glVertex3f(-0.15,0.25, -0.1);    // Bottom Right Of The Quad (Left)

    glColor3f(1.0,0.0,0.0);    // Color Violet
    glVertex3f( 0.15, 0.05,0.8);    // Top Right Of The Quad (Right)
    glVertex3f( 0.15, 0.25, 0.6);    // Top Left Of The Quad (Right)
    glVertex3f( 0.15,0.25, -0.1);    // Bottom Left Of The Quad (Right)
    glVertex3f( 0.15,0.05,-0.3);    // Bottom Right Of The Quad (Right)


    glEnd();

    glPushMatrix();
    glColor3f(1.0,0,0.0);
    glTranslatef(0.00,0.05,0.21);
    glScalef(0.35,0.1,1.2);
    glutSolidCube(.9);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1.0);
    glTranslatef(0.00,0.1,0.3);
    glScalef(0.36,0.2,0.2);
    glutSolidCube(.9);
    glPopMatrix();


    //light back
    glPushMatrix();
    glColor3f(1.0,bl4,0.0);   //yellow light
    glTranslatef(0.11,0.11,0.75);
    glutSolidCube(.04);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,bl4,0.0);   //yellow light
    glTranslatef(-0.09,0.11,0.75);
    glutSolidCube(.04);
    glPopMatrix();

      //light front
    glPushMatrix();
    glColor3f(1.0,1.0,bldl);
    glTranslatef(0.11,0.11,-0.28);
    glutSolidCube(.04);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,bldl);   //yellow light
    glTranslatef(-0.09,0.11,-0.28);
    glutSolidCube(.04);
    glPopMatrix();

    //wheel_left
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(-0.13,0.0,0.0);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();

    //wheel_right
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(0.13,0.0,0.0);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();

    //wheel_left1
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(-0.13,0.0,0.5);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();

    //wheel_right1
     glPushMatrix();
    glColor3f(0.27,0.27,0.27);
    glTranslatef(0.13,0.0,0.5);
    //glRotatef(-90,1.0,1.0,0.0);
    glRotatef(_angle,0.0,1.0,0.0);
    glutSolidTorus(.05, .05, 30, 30); //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
    glPopMatrix();


if(m1==0){
        //light on
      glPushMatrix();
      glTranslatef(-0.09,0.11,-0.3);


      glColor4f(1.0, 1.0,0.0,0.8);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.1,-0.1,-0.5);
    glVertex3f(-0.1,-0.1,-0.5);

    glEnd();

    glPopMatrix();
     //light on
      glPushMatrix();
      glTranslatef(0.11,0.11,-0.3);


      glColor4f(1.0, 1.0,0.0,0.8);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.1,-0.1,-0.5);
    glVertex3f(-0.1,-0.1,-0.5);

    glEnd();

    glPopMatrix();



   glPopMatrix();
   }
   if(m1==1){
    glPopMatrix();
   }
glPopMatrix();
}


void mode(){
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
  if(m==1){
    glClearColor(0.0,0.0,0.0,1.0);
    glClearColor(0.529,0.808,0.922,1.0);
}
  if(m==0){
    glClearColor(0.0,0.0,0.0,1.0);
    glClearColor(0.0,0.0,0.0,1.0);

}
}

void tree1(){

    	 //Move forward 5 units

  glPushMatrix();

      glTranslatef(1.0, 1.3, 1.0);
      glScalef(1.2,2,1.2);

    glPushMatrix();
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.0,-0.20,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCone(.25,.50,15,15); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();

      glPushMatrix();
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.0,0.0,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCone(.25,.50,15,15); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();

      glPushMatrix();
    glColor3f(0.0,0.50,0.0);
    glTranslatef(0.0,0.2,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCone(.25,.50,15,15); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.5,0.50,0.5);
    glTranslatef(0.0,-0.24,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCube(.12); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.5,0.5,0.5);
    glTranslatef(0.0,-0.36,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCube(.12); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();
     glPushMatrix();
    glColor3f(0.5,0.50,0.5);
    glTranslatef(0.0,-0.48,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCube(.12); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();

      glPushMatrix();
    glColor3f(0.5,0.50,0.5);
    glTranslatef(0.0,-0.58,0.0);
    glRotatef(-90,1.0,0.0,0.0);
    //glRotatef(_angle,1.0,1.0,0.0);
    glutSolidCube(.12); //(GLdouble base, GLdouble height,GLint slices, GLint stacks);
    glPopMatrix();


	glPopMatrix();



}

void tree2(){

	glPushMatrix();

	glTranslatef(25.5,0.6,7.0);
	glScalef(.7,0.5,.7);

    glPushMatrix();
    glColor3f(1.0,1,1);
    glColor3f(0.0,.5,.0);
    glTranslatef(0.0,0.0,0.0);
    glRotatef(50,0.0,1.0,0.0);
    glutSolidSphere(.20,07,10);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1);
    glColor3f(0.0,.5,.0);
    glTranslatef(0.0,0.1,0.0);
    glRotatef(-10,0.0,1.0,1.0);
    glutSolidSphere(.20,13,20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1);
    glColor3f(0.0,.5,.0);
    glTranslatef(0.2,0.1,0.0);
    glRotatef(90,0.0,1.0,1.0);
    glutSolidSphere(.20,13,20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1);
    glColor3f(0.0,.5,.0);
    glTranslatef(-0.2,0.1,0.0);
    glRotatef(90,0.0,1.0,1.0);
    glutSolidSphere(.20,13,20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1);
    glColor3f(0.0,.5,.0);
    glTranslatef(0.0,0.1,0.2);
    glRotatef(90,0.0,1.0,1.0);
    glutSolidSphere(.20,13,20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1,1);
    glColor3f(0.0,.5,.0);
    glTranslatef(0.0,0.1,-0.2);
    glRotatef(90,0.0,1.0,1.0);
    glutSolidSphere(.20,13,20);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6,0.3,0.3);
    glTranslatef(0.0,-0.2,0.0);
    glutSolidCube(.1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6,0.3,0.3);
    glTranslatef(0.0,-0.3,0.0);
    glutSolidCube(.1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6,0.3,0.3);
    glTranslatef(0.0,-0.4,0.0);
    glutSolidCube(.1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6,0.3,0.3);
    glTranslatef(0.0,-0.5,0.0);
    glutSolidCube(.1);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.6,0.3,0.3);
    glTranslatef(0.0,-0.6,0.0);
    glutSolidCube(.1);
    glPopMatrix();

 glPopMatrix();



}


void roadside(){

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(18,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();



}

void r_footpath(){

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(42.95, 0.0, 5.0);
    glScalef(0.4,14.5,0.3);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(41.95, 0.0, 5.0);
    glScalef(0.4,14.5,0.3);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(42.95, 0.0, 15.0);
    glScalef(0.4,14.5,0.3);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(41.95, 0.0, 15.0);
    glScalef(0.4,14.5,0.3);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();
    glPopMatrix();

        glPushMatrix(); //Save the current state of transformations
    glTranslatef(42.95, 0.0, 27.0);
    glScalef(0.4,14.5,0.3);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); //Save the current state of transformations
    glTranslatef(41.95, 0.0, 27.0);
    glScalef(0.4,14.5,0.3);

    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glTranslatef(0,0.0, 16);
    glutSolidCube(.2);
    glPopMatrix();
    glPopMatrix();


    glPushMatrix();
    glColor3f(0.6,1,0.5);
    glTranslatef(42.57, 1.4, 21.0);
    glScalef(3,0.1,60.0);
    glutSolidCube(.5);
    glPopMatrix();

}


void window1(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(22.95,2.1,42.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(22.95,1.0,42.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(22.95,1.0,44.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22.95,2.1,44.0);    // Bottom Right Of The Quad (Bottom)


    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(25.05,2.1,42.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(25.05,0.0,42.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(25.05,0.0,43.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(25.05,2.1,43.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(27.95,2.1,43.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(27.95,0.0,43.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(27.95,0.0,42.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(27.95,2.1,42.0);    // Bottom Right Of The Quad (Bottom)






    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}



void window2(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(22.95,2.1,38.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(22.95,1.0,38.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(22.95,1.0,40.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22.95,2.1,40.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(25.05,2.1,37.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(25.05,0.0,37.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(25.05,0.0,38.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(25.05,2.1,38.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(27.95,2.1,37.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(27.95,0.0,37.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(27.95,0.0,38.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(27.95,2.1,38.0);    // Bottom Right Of The Quad (Bottom)





    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}


void window3(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(22.95,2.1,34.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(22.95,1.0,34.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(22.95,1.0,36.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22.95,2.1,36.0);    // Bottom Right Of The Quad (Bottom)


    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(25.05,2.1,33.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(25.05,0.0,33.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(25.05,0.0,34.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(25.05,2.1,34.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(27.95,2.1,33.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(27.95,0.0,33.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(27.95,0.0,34.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(27.95,2.1,34.0);    // Bottom Right Of The Quad (Bottom)





    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}


void window4(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(22.95,2.1,8.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(22.95,1.0,8.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(22.95,1.0,10.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22.95,2.1,10.0);    // Bottom Right Of The Quad (Bottom)


    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(25.05,2.1,18.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(25.05,0.0,18.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(25.05,0.0,19.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(25.05,2.1,19.0);    // Bottom Right Of The Quad (Bottom)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(27.95,2.1,18.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(27.95,0.0,18.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(27.95,0.0,19.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(27.95,2.1,19.0);    // Bottom Right Of The Quad (Bottom)






    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}


void window5(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(22.95,2.1,12.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(22.95,1.0,12.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(22.95,1.0,14.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22.95,2.1,14.0);    // Bottom Right Of The Quad (Bottom)


    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(25.05,2.1,10.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(25.05,0.0,10.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(25.05,0.0,8.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(25.05,2.1,8.0);    // Bottom Right Of The Quad (Bottom)


    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(27.95,2.1,10.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(27.95,0.0,10.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(27.95,0.0,8.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(27.95,2.1,8.0);    // Bottom Right Of The Quad (Bottom)





    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}



void window6(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(22.95,2.1,16.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(22.95,1.0,16.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(22.95,1.0,18.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(22.95,2.1,18.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}

void window7(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(30.2,2.1,16.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(30.2,1.0,16.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(30.2,1.0,18.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(30.2,2.1,18.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}
void window8(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)

    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(30.2,2.1,12.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(30.2,1.0,12.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(30.2,1.0,14.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(30.2,2.1,14.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}
void window9(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)
    glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(30.2,2.1,8.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(30.2,1.0,8.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(30.2,1.0,10.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(30.2,2.1,10.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}
void window10(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)
glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(30.2,2.1,42.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(30.2,1.0,42.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(30.2,1.0,44.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(30.2,2.1,44.0);    // Bottom Right Of The Quad (Bottom)


    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}
void window11(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)
glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(30.2,2.1,40.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(30.2,1.0,40.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(30.2,1.0,38.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(30.2,2.1,38.0);    // Bottom Right Of The Quad (Bottom)



    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}
void window12(){

       glBegin(GL_QUADS);        // Draw The Cube Using quads


    glPushMatrix();


    // Bottom Right Of The Quad (Top)
glColor3f(1.0f,0.9f,0.90f);    // Color Orange
    glVertex3f(30.2,2.1,36.0);    // Top Right Of The Quad (Bottom)
    glVertex3f(30.2,1.0,36.0);    // Top Left Of The Quad (Bottom)
    glVertex3f(30.2,1.0,34.0);    // Bottom Left Of The Quad (Bottom)
    glVertex3f(30.2,2.1,34.0);    // Bottom Right Of The Quad (Bottom)


    glEnd();            // End Drawing The Cube
    glPopMatrix();
glFlush();




}


void renderScene(void) {

// Clear Color and Depth Buffers


 mode();

// Reset transformations
glLoadIdentity();
// Set the camera
gluLookAt( x, 1.1f, z,
x+lx, 1.0f, z+lz,
0.0f, 2.0f, 0.0f);


glPushMatrix();

//car1



 moon();

nx1();

window1();
window2();
window3();
window4();
window5();
window6();
window7();
window8();
window9();
window10();
window11();
window12();

nx1roof();
nx1roof1();
nx1roof2();
nx1floor();
dim();


 glPushMatrix();
 glTranslatef(1,0,48);
 glRotatef(90,0,1,0);
 footpathL1();
 glPopMatrix();


//wall left

wall_left();

r_footpath();

car3();
car4();
nx1road();


wall_right1();
wall_right2();
wall_right3();

// Draw road
glPushMatrix();
glColor3f(0.04, 0.04, 0.04);
glBegin(GL_QUADS);
glVertex3f(43.0f, 0.01, 0.0f);
glVertex3f(43.0f, 0.01, 45.0f);
glVertex3f( 48.0f, 0.01, 45.0f);
glVertex3f( 48.0f, 0.01, 0.0f);
glEnd();
glPopMatrix();



// Draw ground
glPushMatrix();
glColor3f(0.412f, 0.412f, 0.412f);
glBegin(GL_QUADS);
glVertex3f(0.0f, 0.0, 0.0f);
glVertex3f(0.0f, 0.0, 50.0f);
glVertex3f( 50.0f, 0.0, 50.0f);
glVertex3f( 50.0f, 0.0, 0.0f);
glEnd();
glPopMatrix();



for(int j=1; j < 49; j++) {
    glPushMatrix();
glTranslatef(j*0.8,0,0.0);
tree1();
glPopMatrix();
}


for(int j=1; j < 49; j++) {
    glPushMatrix();

glTranslatef(0.40,0,j*0.8);
tree1();
glPopMatrix();
}

//footpath left
footpathL();



//footpath Right


glPopMatrix();

glutSwapBuffers();
}

void update(int value) {
 //car 1

    if(!ca1){
        c1+= (0.03f+z1);

    if (c1 > 28) {
        c1 -= 26;

    }
    }
    //car2
    if(!ca2){
    c2-= 0.03f;
    if (c2<1) {
        c2 += 26;
    }
    }
    //car 3

    if(!ca3){
        c3+= 0.04f;

    if (c3 > 50) {
        c3 -= 48;

    }
    }
    //car4
    if(!ca4){
    c4-= (0.06f + z2);
    if (c4<3) {
        c4 += 38;
    }
    }
    //robot 1
    if(!ro1){
        r1+= 0.006f;
    if (r1 > 13) {
        r1 -= 13;

    }
    }
    //robot 2
    if(!ro2){
    r2-= 0.007f;
    if (r2<9) {
        r2 += 13;
    }
    }

    if(!ro3){
    r3-= 0.01f;
    if (r3<4) {
        r3 += 17.6;
    }
    }
     if(!ro4){
        r4+= 0.006f;
    if (r4 > 8) {
        r4 -= 10;

    }
    }

    glutPostRedisplay(); //Tell GLUT that the display has changed

    //Tell GLUT to call update again in 25 milliseconds
    glutTimerFunc(25, update, 0);
}


void keyboard(unsigned char key, int x, int y)
{
if(key=='d'){
    b=1.0;
    bldl=1.0;
    ll=0.0;
    s=0.0;
    m=1;
    m1=1;
}
if(key=='n'){
    b=0.0;
    bldl=0.0;
    ll=0.5;
    s=1.0;
    m=0;
    m1=0;
}
if(key=='p'){
    ca1=true;
    bl1=0.0;
}
if(key=='P'){
    ca1=false;
    bl1=1.0;
}
if(key=='o'){
    ca2=true;
    bl2=0.0;
}
if(key=='O'){
    ca2=false;
    bl2=1.0;
}
if(key=='i'){
    ca3=true;
    bl3=0.0;
}
if(key=='I'){
    ca3=false;
    bl3=1.0;
}
if(key=='u'){
    ca4=true;
    bl4=0.0;
}
if(key=='U'){
    ca4=false;
    bl4=1.0;
}

if(key=='l'){
    ro1=true;
}
if(key=='z'){
    z1=0.04f;
}
if(key=='Z'){
    z1=0;
}
if(key=='x'){
    z2=0.04f;
}
if(key=='X'){
    z2=0;
}


if(key=='L'){
    ro1=false;
}

if(key=='k'){
    ro2=true;
}


if(key=='K'){
    ro2=false;
}

if(key=='j'){
    ro3=true;
}


if(key=='J'){
    ro3=false;
}

if(key=='h'){
    ro4=true;
}


if(key=='H'){
    ro4=false;
}

    if(key=='f'){ //toggle screenmode
    fullScreen = !fullScreen;
    if (!fullScreen) {
        glutFullScreen();
    } else {
        glutReshapeWindow(1200, 900);
        glutPositionWindow(10,50);

    }
    }


//default:
//break;
}



void changeSize(int w, int h) {

// Prevent a divide by zero, when window is too short
// (you cant make a window of zero width).
if (h == 0)
h = 1;
float ratio = w * 1.0 / h;

// Use the Projection Matrix
glMatrixMode(GL_PROJECTION);

// Reset Matrix
glLoadIdentity();

// Set the viewport to be the entire window
glViewport(0, 0, w, h);

// Set the correct perspective.
gluPerspective(45.0f, ratio, 0.1f, 100.0f);

// Get Back to the Modelview
glMatrixMode(GL_MODELVIEW);
}

void processNormalKeys(unsigned char key, int x, int y) {

if (key == 27)
exit(0);
}
void processSpecialKeys(int key, int xx, int yy) {

float fraction = 0.2f;

switch (key) {
case GLUT_KEY_LEFT :
angle -= 0.03f;
lx = sin(angle);
lz = -cos(angle);
break;
case GLUT_KEY_RIGHT :
angle += 0.03f;
lx = sin(angle);
lz = -cos(angle);
break;
case GLUT_KEY_UP :

x += lx * fraction;
z += lz * fraction;
if(x<=3){
    x=3;
}
else if(x>=47){x=47;}
else if(z<=3){z=3;}
else if(z>=47){z=47;}

break;
case GLUT_KEY_DOWN :

x -= lx * fraction;
z -= lz * fraction;
if(x<=3){
        x=3;
}
else if(x>=47){x=47;}
else if(z>=47){z=47;}
else if(z<=3){z=3;}
break;
}


}


int main(int argc, char **argv) {
//to hide console

// init GLUT and create window

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

glutInitWindowSize(1224,1000);
glutCreateWindow("AIUB Permanent Campus");
initRendering();
glutInitWindowPosition(100,100);
// register callbacks
glutDisplayFunc(renderScene);
glutReshapeFunc(changeSize);
glutIdleFunc(renderScene);
glutKeyboardFunc(processNormalKeys);
glutSpecialFunc(processSpecialKeys);
glutKeyboardFunc(keyboard);


glutFullScreen();
glutTimerFunc(25, update, 0); //Add a timer



// OpenGL init
glEnable(GL_DEPTH_TEST);

// enter GLUT event processing cycle
glutMainLoop();

}
