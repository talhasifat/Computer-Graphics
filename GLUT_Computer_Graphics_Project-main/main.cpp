///    COMPUTER GRAPHICS (SECTION: J)
///    GROUP MEMBERS:
///    TOUHID ALAM (22-46330-1)
///    NAZIM-E-ALAM (22-47047-1)
///    TALHA HOSSAIN SIFAT (222-46344-1)
///    ABU RAIHAN AFSAN (22-47169-1)
///    MD IFTHAKHAR MAHMUD (20-42281-1)



#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float _move3= 0.0f;
float _move4= 0.0f;
GLfloat speed4= 0.010f;
float _move5= 0.0f;
float _move7= 0.0f;
float _move8= 0.0f;
float _move9= 0.1f;
float _moveM= 0.0f;
float _movecar=0.0f;
GLfloat startStop = 0;
float _movecar2 = 0.0f;

void update_cloud(int value)  ///cloud_move
{
_move3 += 0.1;
    if(_move3 >100)
    {
    _move3 =-50;
    }
glutPostRedisplay();
glutTimerFunc(20, update_cloud, 0);
}

void update_sun(int value)      ///sun_move
{
_move4 -= speed4;
glutPostRedisplay();
glutTimerFunc(20, update_sun, 0);
}

void update_boat(int value)     ///boat_move
{
    _move5-=0.05;
    if(_move5<-100)
    {
    _move5 =60;
    }
    glutPostRedisplay();
glutTimerFunc(20,update_boat,0);
}

void update_car(int value)     ///car_right to left _move
{
    _movecar-=0.15;
    if(_movecar<-100)
    {
    _movecar =70;
    }
    glutPostRedisplay();
glutTimerFunc(20,update_car,0);
}

    void update_car2(int value)     ///car_left to right _move
{
    _movecar2+=0.25;
    if(_movecar2>100)
    {
    _movecar2 =-20;
    }


glutPostRedisplay();
glutTimerFunc(20,update_car2,0);
}

void update_wave(int value)      ///move_wave_642
{
    _move8 -=0.1;
    if(_move8 <-100)
    {
    _move8 =75;
    }
glutPostRedisplay();
glutTimerFunc(20, update_wave, 0);
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,100,0,80);
    glMatrixMode(GL_MODELVIEW);
}

void Evening()
{

///sky
   glColor3ub(249.0f,226.0f,79.0f);
    glBegin(GL_QUADS);
    glVertex2f(0,35);
    glVertex2f(100,35);
    glColor3ub(255.0f,255.0f,51.0f);
    glVertex2f(100,80);
    glColor3ub(255.0f,178.0f,102.0f);
    glVertex2f(0,80);
    glEnd();

///sun
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,_move4, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(245.0f,240.0f,180.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+70);
        }
  glEnd();
  glPopMatrix();

  ///traintrack



///cloud
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15,y+70);
        }

  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {

        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+18.5,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
       glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+16.5,y+72);
        }
  glEnd();
  glPopMatrix();

///cloud 2
  glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+35,y+65);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+38,y+65);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+36.4,y+67);
        }
  glEnd();
  glPopMatrix();

///cloud 3
  glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.5,y+72);
        }
  glEnd();
  glPopMatrix();

///buildings
///mosque
    //base
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(35,40);
    glVertex2f(55,40);
    glVertex2f(54,41);
    glVertex2f(36,41);
    glEnd();

    //Left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36,41);
    glVertex2f(37,41);
    glVertex2f(37,49);
    glVertex2f(36,49);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36,49);
    glVertex2f(37,49);
    glVertex2f(37.5,49.5);
    glVertex2f(35.5,49.5);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36 , 49.5);
    glVertex2f(37,49.5);
    glVertex2f(37,51);
    glVertex2f(36,51);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36.5,51);
    glVertex2f(37,51.5);
    glVertex2f(36.5,52);
    glVertex2f(36,51.5);
    glEnd();

    //second left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(38,45);
    glVertex2f(39,45);
    glVertex2f(39,48);
    glVertex2f(38,48);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(38.5,48);
    glVertex2f(39,48.5);
    glVertex2f(38.5,49);
    glVertex2f(38,48.5);
    glEnd();

    //right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53,41);
    glVertex2f(54,41);
    glVertex2f(54,49);
    glVertex2f(53,49);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53,49);
    glVertex2f(54,49);
    glVertex2f(54.5,49.5);
    glVertex2f(52.5,49.5);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53 , 49.5);
    glVertex2f(54,49.5);
    glVertex2f(54,51);
    glVertex2f(53,51);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53.5,51);
    glVertex2f(54,51.5);
    glVertex2f(53.5,52);
    glVertex2f(53,51.5);
    glEnd();
//
    //second right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(51,45);
    glVertex2f(52,45);
    glVertex2f(52,48);
    glVertex2f(51,48);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(51.5,48);
    glVertex2f(52,48.5);
    glVertex2f(51.5,49);
    glVertex2f(51,48.5);
    glEnd();

    //body
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(37,41);
    glVertex2f(43.5,41);
    glVertex2f(43.5,45);
    glVertex2f(37,45);
    glEnd();

    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(46,41);
    glVertex2f(53,41);
    glVertex2f(53,45);
    glVertex2f(46,45);
    glEnd();

    //front door
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,41);
    glVertex2f(46.5,41);
    glVertex2f(46.5,46);
    glVertex2f(43.5,46);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(44,41);
    glVertex2f(46,41);
    glVertex2f(46,44.5);
    glVertex2f(44,44.5);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(44,44.5);
    glVertex2f(46,44.5);
    glVertex2f(45,45.5);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(38,41);
    glVertex2f(39,41);
    glVertex2f(39,43);
    glVertex2f(38,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(38,43);
    glVertex2f(39,43);
    glVertex2f(38.5,43.5);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(40,41);
    glVertex2f(41,41);
    glVertex2f(41,43);
    glVertex2f(40,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,43);
    glVertex2f(41,43);
    glVertex2f(40.5,43.5);
    glEnd();

    //right doors
     glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(49,41);
    glVertex2f(50,41);
    glVertex2f(50,43);
    glVertex2f(49,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(49,43);
    glVertex2f(50,43);
    glVertex2f(49.5,43.5);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(51,41);
    glVertex2f(52,41);
    glVertex2f(52,43);
    glVertex2f(51,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(51,43);
    glVertex2f(52,43);
    glVertex2f(51.5,43.5);
    glEnd();

//middle miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,46);
    glVertex2f(46.5,46);
    glVertex2f(47.5,47);
    glVertex2f(45,49);
    glVertex2f(42.5,47);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(45,49);
    glVertex2f(45.5,49.5);
    glVertex2f(45,50);
    glVertex2f(44.5,49.5);
    glEnd();
    glFlush();

///rest of the buildings code here

//building1

 glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(1,40);
    glVertex2f(1,65);
    glVertex2f(12,65);
    glVertex2f(12,40);
    glEnd();

    glColor3ub(135,54,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,42);
    glVertex2f(2,62);
    glVertex2f(11,62);
    glVertex2f(11,42);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,60);
    glVertex2f(2,59);
    glVertex2f(11,59);
    glVertex2f(11,60);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,57);
    glVertex2f(2,56);
    glVertex2f(11,56);
    glVertex2f(11,57);
    glEnd();


     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,54);
    glVertex2f(2,53);
    glVertex2f(11,53);
    glVertex2f(11,54);
    glEnd();


     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,51);
    glVertex2f(2,50);
    glVertex2f(11,50);
    glVertex2f(11,51);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,48);
    glVertex2f(2,47);
    glVertex2f(11,47);
    glVertex2f(11,48);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,45);
    glVertex2f(2,44);
    glVertex2f(11,44);
    glVertex2f(11,45);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(4,42);
    glVertex2f(4,62);
    glVertex2f(5,62);
    glVertex2f(5,42);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(7,42);
    glVertex2f(7,62);
    glVertex2f(8,62);
    glVertex2f(8,42);
    glEnd();




//building3

    glColor3ub(0,51,102);
    glBegin(GL_POLYGON);
    glVertex2f(20,40);
    glVertex2f(20,70);
    glVertex2f(34.5,70);
    glVertex2f(34.5,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,68);
    glVertex2f(22,68);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,68);
    glVertex2f(22,68);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(23,40);
    glVertex2f(23,68);
    glVertex2f(24,68);
    glVertex2f(24,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(25,40);
    glVertex2f(25,68);
    glVertex2f(26,68);
    glVertex2f(26,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(27,40);
    glVertex2f(27,68);
    glVertex2f(28,68);
    glVertex2f(28,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(29,40);
    glVertex2f(29,68);
    glVertex2f(30,68);
    glVertex2f(30,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(31,40);
    glVertex2f(31,68);
    glVertex2f(32,68);
    glVertex2f(32,40);
    glEnd();

    glFlush();
//building2

glColor3ub(0,204,204);
    glBegin(GL_POLYGON);
    glVertex2f(9,40);
    glVertex2f(9,60);
    glVertex2f(22,60);
    glVertex2f(25,58);
    glVertex2f(25,40);
    glEnd();

    glColor3ub(0,153,153);
    glBegin(GL_POLYGON);
    glVertex2f(22,40);
    glVertex2f(22,60);
    glVertex2f(25,58);
    glVertex2f(25,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(9,40);
    glVertex2f(9,58);
    glVertex2f(22,58);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,102,102);
    glBegin(GL_POLYGON);
    glVertex2f(22,40);
    glVertex2f(22,59);
    glVertex2f(24,57.5);
    glVertex2f(24,40);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,57);
    glVertex2f(10,56);
    glVertex2f(24,56);
    glVertex2f(24,57);
    glEnd();

     glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,55);
    glVertex2f(10,54);
    glVertex2f(24,54);
    glVertex2f(24,55);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,53);
    glVertex2f(10,52);
    glVertex2f(24,52);
    glVertex2f(24,53);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,51);
    glVertex2f(10,50);
    glVertex2f(24,50);
    glVertex2f(24,51);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,49);
    glVertex2f(10,48);
    glVertex2f(24,48);
    glVertex2f(24,49);
    glEnd();

     glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,47);
    glVertex2f(10,46);
    glVertex2f(24,46);
    glVertex2f(24,47);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,45);
    glVertex2f(10,44);
    glVertex2f(24,44);
    glVertex2f(24,45);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,43);
    glVertex2f(10,42);
    glVertex2f(24,42);
    glVertex2f(24,43);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(11,40);
    glVertex2f(11,58);
    glVertex2f(12,58);
    glVertex2f(12,40);
    glEnd();
    glFlush();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(13,40);
    glVertex2f(13,58);
    glVertex2f(14,58);
    glVertex2f(14,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,58);
    glVertex2f(16,58);
    glVertex2f(16,40);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(17,40);
    glVertex2f(17,58);
    glVertex2f(18,58);
    glVertex2f(18,40);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(19,40);
    glVertex2f(19,58);
    glVertex2f(20,58);
    glVertex2f(20,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,58);
    glVertex2f(22,58);
    glVertex2f(22,40);
    glEnd();


    glFlush();

//building 3

glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(55,40);
    glVertex2f(55,65);
    glVertex2f(72,65);
    glVertex2f(72,40);
    glEnd();

    glColor3ub(0,0,102);
    glBegin(GL_POLYGON);
    glVertex2f(57,43);
    glVertex2f(57,62);
    glVertex2f(72,62);
    glVertex2f(72,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(59,43);
    glVertex2f(59,62);
    glVertex2f(60,62);
    glVertex2f(60,43);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(62,43);
    glVertex2f(62,62);
    glVertex2f(63,62);
    glVertex2f(63,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(65,43);
    glVertex2f(65,62);
    glVertex2f(66,62);
    glVertex2f(66,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(68,43);
    glVertex2f(68,62);
    glVertex2f(69,62);
    glVertex2f(69,43);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(71,43);
    glVertex2f(71,62);
    glVertex2f(72,62);
    glVertex2f(72,43);
    glEnd();

   glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,58);
    glVertex2f(57,60);
    glVertex2f(72,60);
    glVertex2f(72,58);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,56);
    glVertex2f(57,54);
    glVertex2f(72,54);
    glVertex2f(72,56);
    glEnd();

      glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,52);
    glVertex2f(57,50);
    glVertex2f(72,50);
    glVertex2f(72,52);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,48);
    glVertex2f(57,46);
    glVertex2f(72,46);
    glVertex2f(72,48);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,44);
    glVertex2f(57,42);
    glVertex2f(72,42);
    glVertex2f(72,44);
    glEnd();

    // building5

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(77,40);
    glVertex2f(77,68);
    glVertex2f(86.5,68);
    glVertex2f(86.5,40);
    glEnd();

    glColor3ub(130,224,170);
    glBegin(GL_POLYGON);
    glVertex2f(78,44);
    glVertex2f(78,66);
    glVertex2f(85.5,66);
    glVertex2f(85.5,44);
    glEnd();

   glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(80.3,44);
    glVertex2f(80.3,66);
    glVertex2f(80.5,66);
    glVertex2f(80.5,44);
    glEnd();

     glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(82.8,44);
    glVertex2f(82.8,66);
    glVertex2f(83,66);
    glVertex2f(83,44);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,63.5);
    glVertex2f(78,63.7);
    glVertex2f(86,63.7);
    glVertex2f(86,63.5);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,61.1);
    glVertex2f(78,61.3);
    glVertex2f(86,61.3);
    glVertex2f(86,61.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,58.6);
    glVertex2f(78,58.8);
    glVertex2f(86,58.8);
    glVertex2f(86,58.6);
    glEnd();

     glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,56.1);
    glVertex2f(78,56.3);
    glVertex2f(86,56.3);
    glVertex2f(86,56.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,53.6);
    glVertex2f(78,53.8);
    glVertex2f(86,53.8);
    glVertex2f(86,53.6);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,51.1);
    glVertex2f(78,51.3);
    glVertex2f(86,51.3);
    glVertex2f(86,51.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,48.6);
    glVertex2f(78,48.8);
    glVertex2f(86,48.8);
    glVertex2f(86,48.6);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,46.1);
    glVertex2f(78,46.3);
    glVertex2f(86,46.3);
    glVertex2f(86,46.1);
    glEnd();




    //building4

glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(71,40);
    glVertex2f(71,58);
    glVertex2f(81,58);
    glVertex2f(81,40);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(71,58);
    glVertex2f(71,61);
    glVertex2f(81,61);
    glVertex2f(81,58);
    glEnd();

    glColor3ub(148,119,64);
    glBegin(GL_POLYGON);
    glVertex2f(72,43);
    glVertex2f(72,58);
    glVertex2f(80,58);
    glVertex2f(80,43);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,55);
    glVertex2f(72,56);
    glVertex2f(80,56);
    glVertex2f(80,55);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,53.5);
    glVertex2f(72,54);
    glVertex2f(80,54);
    glVertex2f(80,53.5);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,52);
    glVertex2f(72,52.5);
    glVertex2f(80,52.5);
    glVertex2f(80,52);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,50.5);
    glVertex2f(72,51);
    glVertex2f(80,51);
    glVertex2f(80,50.5);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,49);
    glVertex2f(72,49.5);
    glVertex2f(80,49.5);
    glVertex2f(80,49);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,47.5);
    glVertex2f(72,48);
    glVertex2f(80,48);
    glVertex2f(80,47.5);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,46);
    glVertex2f(72,46.5);
    glVertex2f(80,46.5);
    glVertex2f(80,46);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,44.5);
    glVertex2f(72,45);
    glVertex2f(80,45);
    glVertex2f(80,44.5);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(74,43);
    glVertex2f(74,58);
    glVertex2f(74.5,58);
    glVertex2f(74.5,43);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(77,43);
    glVertex2f(77,58);
    glVertex2f(77.5,58);
    glVertex2f(77.5,43);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,59);
    glVertex2f(72,60);
    glVertex2f(80,60);
    glVertex2f(80,59);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(73,58);
    glVertex2f(73,61);
    glVertex2f(73.5,61);
    glVertex2f(73.5,58);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(74.5,58);
    glVertex2f(74.5,61);
    glVertex2f(75,61);
    glVertex2f(75,58);
    glEnd();

      glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(76,58);
    glVertex2f(76,61);
    glVertex2f(76.5,61);
    glVertex2f(76.5,58);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(77.5,58);
    glVertex2f(77.5,61);
    glVertex2f(78,61);
    glVertex2f(78,58);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(78.9,58);
    glVertex2f(78.9,61);
    glVertex2f(79.1,61);
    glVertex2f(79.1,58);
    glEnd();







    //building6

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(85,40);
    glVertex2f(85,61);
    glVertex2f(99,61);
    glVertex2f(99,40);
    glEnd();

     glColor3ub(108,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,42);
    glVertex2f(86,59);
    glVertex2f(98,59);
    glVertex2f(98,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,56.5);
    glVertex2f(86,57);
    glVertex2f(98,57);
    glVertex2f(98,56.5);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,54);
    glVertex2f(86,54.5);
    glVertex2f(98,54.5);
    glVertex2f(98,54);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,51.5);
    glVertex2f(86,52);
    glVertex2f(98,52);
    glVertex2f(98,51.5);
    glEnd();

     glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,49);
    glVertex2f(86,49.5);
    glVertex2f(98,49.5);
    glVertex2f(98,49);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,46.5);
    glVertex2f(86,47);
    glVertex2f(98,47);
    glVertex2f(98,46.5);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,44);
    glVertex2f(86,44.5);
    glVertex2f(98,44.5);
    glVertex2f(98,44);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(88,42);
    glVertex2f(88,59);
    glVertex2f(88.5,59);
    glVertex2f(88.5,42);
    glEnd();

     glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(90.5,42);
    glVertex2f(90.5,59);
    glVertex2f(91,59);
    glVertex2f(91,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(93,42);
    glVertex2f(93,59);
    glVertex2f(93.5,59);
    glVertex2f(93.5,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(95.5,42);
    glVertex2f(95.5,59);
    glVertex2f(96,59);
    glVertex2f(96,42);
    glEnd();

    ///tree

    //tree1

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,42);
    glVertex2f(16,42);
    glVertex2f(16,40);
    glEnd();

      glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,42);
    glVertex2f(15.5,45);
    glVertex2f(19,42);
    glEnd();
    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,43);
    glVertex2f(15.5,46);
    glVertex2f(19,43);
    glEnd();
     glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,44);
    glVertex2f(15.5,47);
    glVertex2f(19,44);
    glEnd();

    //tree2

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(27,40);
    glVertex2f(27,42);
    glVertex2f(28,42);
    glVertex2f(28,40);
    glEnd();

     glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,44);
    glVertex2f(27.5,47);
    glVertex2f(31,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,43);
    glVertex2f(27.5,46);
    glVertex2f(31,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,42);
    glVertex2f(27.5,44);
    glVertex2f(31,42);
    glEnd();

    //tree 3

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(61,40);
    glVertex2f(61,42);
    glVertex2f(62,42);
    glVertex2f(62,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,44);
    glVertex2f(61.5,47);
    glVertex2f(65,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,43);
    glVertex2f(61.5,46);
    glVertex2f(65,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,42);
    glVertex2f(61.5,45);
    glVertex2f(65,42);
    glEnd();

    //tree 4

    glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(75,40);
    glVertex2f(75,42);
    glVertex2f(76,42);
    glVertex2f(76,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,44);
    glVertex2f(75.5,47);
    glVertex2f(79,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,43);
    glVertex2f(75.5,46);
    glVertex2f(79,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,42);
    glVertex2f(75.5,45);
    glVertex2f(79,42);
    glEnd();

    //tree5

     //tree 4

    glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(90,40);
    glVertex2f(90,42);
    glVertex2f(91,42);
    glVertex2f(91,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,44);
    glVertex2f(90.5,47);
    glVertex2f(94,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,43);
    glVertex2f(90.5,46);
    glVertex2f(94,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,42);
    glVertex2f(90.5,45);
    glVertex2f(94,42);
    glEnd();










///road
///main road
    glColor3ub(50,50,50);
    glBegin(GL_QUADS);
    glVertex2f(0,35);
    glVertex2f(100,35);
    glVertex2f(100,40);
    glVertex2f(0,40);
    glEnd();
    glPopMatrix();

///road
///main road
    glColor3ub(50,50,50);
    glBegin(GL_QUADS);
    glVertex2f(0,34);
    glVertex2f(100,34);
    glVertex2f(100,40);
    glVertex2f(0,40);
    glEnd();
    glPopMatrix();

    ///road divider
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-2,37.35);
    glVertex2f(3,37.35);
    glVertex2f(3,37.65);
    glVertex2f(-2,37.65);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(5,37.35);
    glVertex2f(10,37.35);
    glVertex2f(10,37.65);
    glVertex2f(5,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(12,37.35);
    glVertex2f(17,37.35);
    glVertex2f(17,37.65);
    glVertex2f(12,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(19,37.35);
    glVertex2f(24,37.35);
    glVertex2f(24,37.65);
    glVertex2f(19,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(26,37.35);
    glVertex2f(31,37.35);
    glVertex2f(31,37.65);
    glVertex2f(26,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(33,37.35);
    glVertex2f(38,37.35);
    glVertex2f(38,37.65);
    glVertex2f(33,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(40,37.35);
    glVertex2f(45,37.35);
    glVertex2f(45,37.65);
    glVertex2f(40,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(47,37.35);
    glVertex2f(52,37.35);
    glVertex2f(52,37.65);
    glVertex2f(47,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(54,37.35);
    glVertex2f(59,37.35);
    glVertex2f(59,37.65);
    glVertex2f(54,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(61,37.35);
    glVertex2f(66,37.35);
    glVertex2f(66,37.65);
    glVertex2f(61,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(68,37.35);
    glVertex2f(73,37.35);
    glVertex2f(73,37.65);
    glVertex2f(68,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(75,37.35);
    glVertex2f(80,37.35);
    glVertex2f(80,37.65);
    glVertex2f(75,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(82,37.35);
    glVertex2f(87,37.35);
    glVertex2f(87,37.65);
    glVertex2f(82,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(89,37.35);
    glVertex2f(94,37.35);
    glVertex2f(94,37.65);
    glVertex2f(89,37.65);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(96,37.35);
    glVertex2f(101,37.35);
    glVertex2f(101,37.65);
    glVertex2f(96,37.65);
    glEnd();


///cars
///right to left
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_movecar,0.0f, 0.0f);
    glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(60,38.5);
    glVertex2f(68,38.5);
    glVertex2f(68,40);
    glVertex2f(60,40);
    glEnd();

    glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(61,40);
    glVertex2f(68,40);
    glVertex2f(67,41.5);
    glVertex2f(63,41.5);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(61.5,40);
    glVertex2f(67.7,40);
    glVertex2f(66.7,41.2);
    glVertex2f(63.2,41.2);
    glEnd();
    glDisable(GL_BLEND);

        glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(65.5,40);
    glVertex2f(65.8,40);
    glVertex2f(65.8,41.5);
    glVertex2f(65.5,41.5);
    glEnd();


      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+62.25,y+38.5);
        }
  glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+66.2,y+38.5);
        }
  glEnd();
  glPopMatrix();


///left to right

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_movecar2,0.0f, 0.0f);
    glColor3ub(196, 30, 58);
    glBegin(GL_QUADS);
    glVertex2f(9,36);
    glVertex2f(17,36);
    glVertex2f(16.6,37.5);
    glVertex2f(9,37.5);
    glEnd();

    glColor3ub(196, 30, 58);
    glBegin(GL_QUADS);
    glVertex2f(10,37.5);
    glVertex2f(15.5,37.5);
    glVertex2f(14,38.6);
    glVertex2f(11.2,38.6);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(10.3,37.5);
    glVertex2f(15.1,37.5);
    glVertex2f(13.7,38.4);
    glVertex2f(11.4,38.4);
    glEnd();
    glDisable(GL_BLEND);

      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+11,y+36);
        }
  glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15,y+36);
        }
  glEnd();
  glPopMatrix();

   ///  road border
    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(0,33);
    glVertex2f(100,33);
    glVertex2f(100,34);
    glVertex2f(0,34);
    glEnd();
///pole lines
    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(0,35.25);
    glVertex2f(100,35.25);
    glVertex2f(100,35.5);
    glVertex2f(0,35.5);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(2,34);
    glVertex2f(2.25,34);
    glVertex2f(2.25,35.25);
    glVertex2f(2,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(7,34);
    glVertex2f(7.25,34);
    glVertex2f(7.25,35.25);
    glVertex2f(7,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(12,34);
    glVertex2f(12.25,34);
    glVertex2f(12.25,35.25);
    glVertex2f(12,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(17,34);
    glVertex2f(17.25,34);
    glVertex2f(17.25,35.25);
    glVertex2f(17,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(22,34);
    glVertex2f(22.25,34);
    glVertex2f(22.25,35.25);
    glVertex2f(22,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(27,34);
    glVertex2f(27.25,34);
    glVertex2f(27.25,35.25);
    glVertex2f(27,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(32,34);
    glVertex2f(32.25,34);
    glVertex2f(32.25,35.25);
    glVertex2f(32,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(37,34);
    glVertex2f(37.25,34);
    glVertex2f(37.25,35.25);
    glVertex2f(37,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(42,34);
    glVertex2f(42.25,34);
    glVertex2f(42.25,35.25);
    glVertex2f(42,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(47,34);
    glVertex2f(47.25,34);
    glVertex2f(47.25,35.25);
    glVertex2f(47,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(52,34);
    glVertex2f(52.25,34);
    glVertex2f(52.25,35.25);
    glVertex2f(52,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(57,34);
    glVertex2f(57.25,34);
    glVertex2f(57.25,35.25);
    glVertex2f(57,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(62,34);
    glVertex2f(62.25,34);
    glVertex2f(62.25,35.25);
    glVertex2f(62,35.25);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(67,34);
    glVertex2f(67.25,34);
    glVertex2f(67.25,35.25);
    glVertex2f(67,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(72,34);
    glVertex2f(72.25,34);
    glVertex2f(72.25,35.25);
    glVertex2f(72,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(77,34);
    glVertex2f(77.25,34);
    glVertex2f(77.25,35.25);
    glVertex2f(77,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(82,34);
    glVertex2f(82.25,34);
    glVertex2f(82.25,35.25);
    glVertex2f(82,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(87,34);
    glVertex2f(87.25,34);
    glVertex2f(87.25,35.25);
    glVertex2f(87,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(92,34);
    glVertex2f(92.25,34);
    glVertex2f(92.25,35.25);
    glVertex2f(92,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(97,34);
    glVertex2f(97.25,34);
    glVertex2f(97.25,35.25);
    glVertex2f(97,35.25);
    glEnd();





   ///river
///shade1

    glColor3ub(128.0f,204.0f,255.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0,0.0);
       glColor3ub(26.0f,163.0f,255.0f);
    glVertex2f(100,0);
    glVertex2f(100,33);
        glColor3ub(220.0f,220.0f,220.0f);
    glVertex2f(0,33);
    glEnd();
glPopMatrix();

///wave
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(5,25);
    glVertex2f(19,25);
    glVertex2f(12,26);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,25);
    glVertex2f(40,25);
    glVertex2f(35,26);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70,25);
    glVertex2f(85,25);
    glVertex2f(78,26);
    glEnd();
    glPopMatrix();

///wave2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(50,20);
    glVertex2f(60,20);
    glVertex2f(55,21);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(30.0f,20);
    glVertex2f(37.0f,20);
    glVertex2f(34,21);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(80,20);
    glVertex2f(90,20);
    glVertex2f(85,21);
    glEnd();
    glPopMatrix();

///wave3
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(25,30);
    glVertex2f(35,30);
    glVertex2f(30,31);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(75,30);
    glVertex2f(85,30);
    glVertex2f(80,31);
    glEnd();

///park

///park tree

///park bench

///park human (if possible)

///park food card.


    ///boat
    glColor3ub(27.0f,27.0f,60.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move5,_moveM , 0.0f);

    glBegin(GL_POLYGON);
    glVertex2f(60,22);
    glVertex2f(62,19);
    glVertex2f(73,19);
    glVertex2f(75,22);
    glEnd();

    glColor3ub(180.0f,100.0f,30.0f);
    glBegin(GL_POLYGON);
    glVertex2f(68,22);
    glVertex2f(69,22.5);
    glVertex2f(68.5,28.25);
    glEnd();

    glColor3ub(245.0f,240.0f,180.0f);
    glBegin(GL_POLYGON);
    glVertex2f(68.5,22.25);
    glVertex2f(68.5,28.25);
    glVertex2f(75,25);

     glEnd();
    glPopMatrix();

//lower railing
    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,15);
    glVertex2f(100,15);
    glVertex2f(100,15.5);
    glVertex2f(0, 15.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,14);
    glVertex2f(100,14);
    glVertex2f(100,14.5);
    glVertex2f(0, 14.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,13);
    glVertex2f(100,13);
    glVertex2f(100,13.5);
    glVertex2f(0,13.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,12);
    glVertex2f(100,12);
    glVertex2f(100,12.5);
    glVertex2f(0,12.5);
    glEnd();
   //stand

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0.5,12);
    glVertex2f(1,12);
    glVertex2f(1,16);
    glVertex2f(0.5,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(10,12);
    glVertex2f(10.5,12);
    glVertex2f(10.5,16);
    glVertex2f(10,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(20,12);
    glVertex2f(20.5,12);
    glVertex2f(20.5,16);
    glVertex2f(20,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(30,12);
    glVertex2f(30.5,12);
    glVertex2f(30.5,16);
    glVertex2f(30,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(40,12);
    glVertex2f(40.5,12);
    glVertex2f(40.5,16);
    glVertex2f(40,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(50,12);
    glVertex2f(50.5,12);
    glVertex2f(50.5,16);
    glVertex2f(50,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(60,12);
    glVertex2f(60.5,12);
    glVertex2f(60.5,16);
    glVertex2f(60,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(70,12);
    glVertex2f(70.5,12);
    glVertex2f(70.5,16);
    glVertex2f(70,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(80,12);
    glVertex2f(80.5,12);
    glVertex2f(80.5,16);
    glVertex2f(80,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(90,12);
    glVertex2f(90.5,12);
    glVertex2f(90.5,16);
    glVertex2f(90,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(99,12);
    glVertex2f(99.5,12);
    glVertex2f(99.5,16);
    glVertex2f(99,16);
    glEnd();
//grass

    glColor3ub(50, 205, 50);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(100, 0);
    glVertex2f(100, 12);
    glVertex2f(0, 12);
    glEnd();

//bench
    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,12);
    glVertex2f(18,12);
    glVertex2f(18,13);
    glVertex2f(5,13);
    glEnd();

    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,13);
    glVertex2f(18,13);
    glVertex2f(18,13.25);
    glVertex2f(5,13.25);
    glEnd();


    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,13.25);
    glVertex2f(18,13.25);
    glVertex2f(18,14.25);
    glVertex2f(5,14.25);
    glEnd();

    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,14.25);
    glVertex2f(18,14.25);
    glVertex2f(18,14.5);
    glVertex2f(5,14.5);
    glEnd();

    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,14.5);
    glVertex2f(18,14.5);
    glVertex2f(18,15.5);
    glVertex2f(5,15.5);
    glEnd();

   glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,15.5);
    glVertex2f(18,15.5);
    glVertex2f(18,15.75);
    glVertex2f(5,15.75);
    glEnd();

    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,15.75);
    glVertex2f(18,15.75);
    glVertex2f(18,16.75);
    glVertex2f(5,16.75);
    glEnd();


    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,12);
    glVertex2f(18,12.);
    glVertex2f(18,12.25);
    glVertex2f(5,12.25);
    glEnd();

   ///sitting
    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,9.5);
    glVertex2f(18.5,9.5);
    glVertex2f(18,12);
    glVertex2f(5,12);
    glEnd();
    //legs
    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,9);
    glVertex2f(18.5,9);
    glVertex2f(18.5,9.5);
    glVertex2f(4.5,9.5);
    glEnd();

    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,7.25);
    glVertex2f(5,7.25);
    glVertex2f(5,9.5);
    glVertex2f(4.5,9.5);
    glEnd();

    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(18,7.25);
    glVertex2f(18.5,7.25);
    glVertex2f(18.5,9.5);
    glVertex2f(18,9.5);
    glEnd();

    ///food cart
    glColor3ub(139,69,19);
    glBegin(GL_POLYGON);
    glVertex2f(25,9);
    glVertex2f(45,9);
    glVertex2f(45,13);
    glVertex2f(25,13);
    glEnd();
    glColor3ub(204,102,0);
    glBegin(GL_POLYGON);
    glVertex2f(25,13);
    glVertex2f(45,13);
    glVertex2f(45,14);
    glVertex2f(25,14);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_POLYGON);
    glVertex2f(25,14);
    glVertex2f(45,14);
    glVertex2f(45,20);
    glVertex2f(25,20);
    glEnd();
   glDisable(GL_BLEND);
//Triangles
    glColor3ub(255,101,24);
    glBegin(GL_TRIANGLES);
    glVertex2f(25,20);
    glVertex2f(27.5,17.5);
    glVertex2f(30,20);
    glEnd();

    glColor3ub(255,255,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,20);
    glVertex2f(32.5,17.5);
    glVertex2f(35,20);
    glEnd();

    glColor3ub(153, 51,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(35,20);
    glVertex2f(37.5,17.5);
    glVertex2f(40,20);
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,20);
    glVertex2f(42.5,17.5);
    glVertex2f(45,20);
    glEnd();
//Upper Boxes-----------

    glColor3ub(204,204,0);
    glBegin(GL_POLYGON);
    glVertex2f(30,20);
    glVertex2f(35,20);
    glVertex2f(35,23);
    glVertex2f(30,23);
    glEnd();

    glColor3ub(139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(35,20);
    glVertex2f(40,20);
    glVertex2f(40,23);
    glVertex2f(35,23);
    glEnd();

    glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2f(40,20);
    glVertex2f(45,20);
    glVertex2f(45,23);
    glVertex2f(40,23);
    glEnd();

    glColor3ub(219,73,0);
    glBegin(GL_POLYGON);
    glVertex2f(25,20);
    glVertex2f(30,20);
    glVertex2f(30,23);
    glVertex2f(25,23);
    glEnd();
///left wheel
      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(32,32,32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+9);
        }
  glEnd();

    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(192, 192, 192);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+9);
        }
  glEnd();

  ///right wheel
      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(32, 32, 32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+9);
        }
  glEnd();

      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+9);
        }
  glEnd();
}

void Keypressboat(unsigned char key, int x, int y)
{
if(key=='w')
    {
        if(_moveM<=10){
            _moveM+=1.0;
        }
        glutPostRedisplay();
    }
    else if(key=='s')
    {
        if(_moveM>=-6){
            _moveM-=1.0;
        glutPostRedisplay();
    }
}
}









void night()
{

///sky
glColor3ub(102,102,255);

    glBegin(GL_QUADS);
    glVertex2f(0,35);
    glVertex2f(100,35);
    glColor3ub(0,0,102);
    glVertex2f(100,80);
       glColor3ub(43,57,182);
    glVertex2f(0,80);
    glEnd();

///moon
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3f(1,1,1);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+70);
        }
  glEnd();

  ///traintrack

///stars
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+10,y+70);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+74);
        }
	glEnd();

    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+61);
        }
	glEnd();

	    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+50,y+55);
        }
	glEnd();

		    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+80,y+75);
        }
	glEnd();

			    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+65,y+70);
        }
	glEnd();

///cloud
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15,y+70);
        }

  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {

        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+18.5,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
       glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+16.5,y+72);
        }
  glEnd();
  glPopMatrix();

///cloud 2
  glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+35,y+65);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+38,y+65);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+36.4,y+67);
        }
  glEnd();
  glPopMatrix();

///cloud 3
  glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(255.0,255.0,255.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.5,y+72);
        }
  glEnd();
  glPopMatrix();

///buildings
///mosque
    //base
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(35,40);
    glVertex2f(55,40);
    glVertex2f(54,41);
    glVertex2f(36,41);
    glEnd();

    //Left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36,41);
    glVertex2f(37,41);
    glVertex2f(37,49);
    glVertex2f(36,49);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36,49);
    glVertex2f(37,49);
    glVertex2f(37.5,49.5);
    glVertex2f(35.5,49.5);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36 , 49.5);
    glVertex2f(37,49.5);
    glVertex2f(37,51);
    glVertex2f(36,51);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36.5,51);
    glVertex2f(37,51.5);
    glVertex2f(36.5,52);
    glVertex2f(36,51.5);
    glEnd();

    //second left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(38,45);
    glVertex2f(39,45);
    glVertex2f(39,48);
    glVertex2f(38,48);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(38.5,48);
    glVertex2f(39,48.5);
    glVertex2f(38.5,49);
    glVertex2f(38,48.5);
    glEnd();

    //right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53,41);
    glVertex2f(54,41);
    glVertex2f(54,49);
    glVertex2f(53,49);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53,49);
    glVertex2f(54,49);
    glVertex2f(54.5,49.5);
    glVertex2f(52.5,49.5);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53 , 49.5);
    glVertex2f(54,49.5);
    glVertex2f(54,51);
    glVertex2f(53,51);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53.5,51);
    glVertex2f(54,51.5);
    glVertex2f(53.5,52);
    glVertex2f(53,51.5);
    glEnd();
//
    //second right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(51,45);
    glVertex2f(52,45);
    glVertex2f(52,48);
    glVertex2f(51,48);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(51.5,48);
    glVertex2f(52,48.5);
    glVertex2f(51.5,49);
    glVertex2f(51,48.5);
    glEnd();

    //body
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(37,41);
    glVertex2f(43.5,41);
    glVertex2f(43.5,45);
    glVertex2f(37,45);
    glEnd();

    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(46,41);
    glVertex2f(53,41);
    glVertex2f(53,45);
    glVertex2f(46,45);
    glEnd();

    //front door
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,41);
    glVertex2f(46.5,41);
    glVertex2f(46.5,46);
    glVertex2f(43.5,46);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(44,41);
    glVertex2f(46,41);
    glVertex2f(46,44.5);
    glVertex2f(44,44.5);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(44,44.5);
    glVertex2f(46,44.5);
    glVertex2f(45,45.5);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(38,41);
    glVertex2f(39,41);
    glVertex2f(39,43);
    glVertex2f(38,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(38,43);
    glVertex2f(39,43);
    glVertex2f(38.5,43.5);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(40,41);
    glVertex2f(41,41);
    glVertex2f(41,43);
    glVertex2f(40,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,43);
    glVertex2f(41,43);
    glVertex2f(40.5,43.5);
    glEnd();

    //right doors
     glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(49,41);
    glVertex2f(50,41);
    glVertex2f(50,43);
    glVertex2f(49,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(49,43);
    glVertex2f(50,43);
    glVertex2f(49.5,43.5);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(51,41);
    glVertex2f(52,41);
    glVertex2f(52,43);
    glVertex2f(51,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(51,43);
    glVertex2f(52,43);
    glVertex2f(51.5,43.5);
    glEnd();

//middle miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,46);
    glVertex2f(46.5,46);
    glVertex2f(47.5,47);
    glVertex2f(45,49);
    glVertex2f(42.5,47);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(45,49);
    glVertex2f(45.5,49.5);
    glVertex2f(45,50);
    glVertex2f(44.5,49.5);
    glEnd();
    glFlush();

///rest of the buildings code here

//building1

 glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(1,40);
    glVertex2f(1,65);
    glVertex2f(12,65);
    glVertex2f(12,40);
    glEnd();

    glColor3ub(135,54,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,42);
    glVertex2f(2,62);
    glVertex2f(11,62);
    glVertex2f(11,42);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,60);
    glVertex2f(2,59);
    glVertex2f(11,59);
    glVertex2f(11,60);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,57);
    glVertex2f(2,56);
    glVertex2f(11,56);
    glVertex2f(11,57);
    glEnd();


     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,54);
    glVertex2f(2,53);
    glVertex2f(11,53);
    glVertex2f(11,54);
    glEnd();


     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,51);
    glVertex2f(2,50);
    glVertex2f(11,50);
    glVertex2f(11,51);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,48);
    glVertex2f(2,47);
    glVertex2f(11,47);
    glVertex2f(11,48);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,45);
    glVertex2f(2,44);
    glVertex2f(11,44);
    glVertex2f(11,45);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(4,42);
    glVertex2f(4,62);
    glVertex2f(5,62);
    glVertex2f(5,42);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(7,42);
    glVertex2f(7,62);
    glVertex2f(8,62);
    glVertex2f(8,42);
    glEnd();




//building3

    glColor3ub(0,51,102);
    glBegin(GL_POLYGON);
    glVertex2f(20,40);
    glVertex2f(20,70);
    glVertex2f(34.5,70);
    glVertex2f(34.5,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,68);
    glVertex2f(22,68);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,68);
    glVertex2f(22,68);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(23,40);
    glVertex2f(23,68);
    glVertex2f(24,68);
    glVertex2f(24,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(25,40);
    glVertex2f(25,68);
    glVertex2f(26,68);
    glVertex2f(26,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(27,40);
    glVertex2f(27,68);
    glVertex2f(28,68);
    glVertex2f(28,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(29,40);
    glVertex2f(29,68);
    glVertex2f(30,68);
    glVertex2f(30,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(31,40);
    glVertex2f(31,68);
    glVertex2f(32,68);
    glVertex2f(32,40);
    glEnd();

    glFlush();
//building2

glColor3ub(0,204,204);
    glBegin(GL_POLYGON);
    glVertex2f(9,40);
    glVertex2f(9,60);
    glVertex2f(22,60);
    glVertex2f(25,58);
    glVertex2f(25,40);
    glEnd();

    glColor3ub(0,153,153);
    glBegin(GL_POLYGON);
    glVertex2f(22,40);
    glVertex2f(22,60);
    glVertex2f(25,58);
    glVertex2f(25,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(9,40);
    glVertex2f(9,58);
    glVertex2f(22,58);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,102,102);
    glBegin(GL_POLYGON);
    glVertex2f(22,40);
    glVertex2f(22,59);
    glVertex2f(24,57.5);
    glVertex2f(24,40);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,57);
    glVertex2f(10,56);
    glVertex2f(24,56);
    glVertex2f(24,57);
    glEnd();

     glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,55);
    glVertex2f(10,54);
    glVertex2f(24,54);
    glVertex2f(24,55);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,53);
    glVertex2f(10,52);
    glVertex2f(24,52);
    glVertex2f(24,53);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,51);
    glVertex2f(10,50);
    glVertex2f(24,50);
    glVertex2f(24,51);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,49);
    glVertex2f(10,48);
    glVertex2f(24,48);
    glVertex2f(24,49);
    glEnd();

     glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,47);
    glVertex2f(10,46);
    glVertex2f(24,46);
    glVertex2f(24,47);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,45);
    glVertex2f(10,44);
    glVertex2f(24,44);
    glVertex2f(24,45);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,43);
    glVertex2f(10,42);
    glVertex2f(24,42);
    glVertex2f(24,43);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(11,40);
    glVertex2f(11,58);
    glVertex2f(12,58);
    glVertex2f(12,40);
    glEnd();
    glFlush();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(13,40);
    glVertex2f(13,58);
    glVertex2f(14,58);
    glVertex2f(14,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,58);
    glVertex2f(16,58);
    glVertex2f(16,40);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(17,40);
    glVertex2f(17,58);
    glVertex2f(18,58);
    glVertex2f(18,40);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(19,40);
    glVertex2f(19,58);
    glVertex2f(20,58);
    glVertex2f(20,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,58);
    glVertex2f(22,58);
    glVertex2f(22,40);
    glEnd();


    glFlush();

//building 3

glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(55,40);
    glVertex2f(55,65);
    glVertex2f(72,65);
    glVertex2f(72,40);
    glEnd();

    glColor3ub(0,0,102);
    glBegin(GL_POLYGON);
    glVertex2f(57,43);
    glVertex2f(57,62);
    glVertex2f(72,62);
    glVertex2f(72,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(59,43);
    glVertex2f(59,62);
    glVertex2f(60,62);
    glVertex2f(60,43);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(62,43);
    glVertex2f(62,62);
    glVertex2f(63,62);
    glVertex2f(63,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(65,43);
    glVertex2f(65,62);
    glVertex2f(66,62);
    glVertex2f(66,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(68,43);
    glVertex2f(68,62);
    glVertex2f(69,62);
    glVertex2f(69,43);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(71,43);
    glVertex2f(71,62);
    glVertex2f(72,62);
    glVertex2f(72,43);
    glEnd();

   glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,58);
    glVertex2f(57,60);
    glVertex2f(72,60);
    glVertex2f(72,58);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,56);
    glVertex2f(57,54);
    glVertex2f(72,54);
    glVertex2f(72,56);
    glEnd();

      glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,52);
    glVertex2f(57,50);
    glVertex2f(72,50);
    glVertex2f(72,52);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,48);
    glVertex2f(57,46);
    glVertex2f(72,46);
    glVertex2f(72,48);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,44);
    glVertex2f(57,42);
    glVertex2f(72,42);
    glVertex2f(72,44);
    glEnd();

    // building5

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(77,40);
    glVertex2f(77,68);
    glVertex2f(86.5,68);
    glVertex2f(86.5,40);
    glEnd();

    glColor3ub(130,224,170);
    glBegin(GL_POLYGON);
    glVertex2f(78,44);
    glVertex2f(78,66);
    glVertex2f(85.5,66);
    glVertex2f(85.5,44);
    glEnd();

   glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(80.3,44);
    glVertex2f(80.3,66);
    glVertex2f(80.5,66);
    glVertex2f(80.5,44);
    glEnd();

     glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(82.8,44);
    glVertex2f(82.8,66);
    glVertex2f(83,66);
    glVertex2f(83,44);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,63.5);
    glVertex2f(78,63.7);
    glVertex2f(86,63.7);
    glVertex2f(86,63.5);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,61.1);
    glVertex2f(78,61.3);
    glVertex2f(86,61.3);
    glVertex2f(86,61.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,58.6);
    glVertex2f(78,58.8);
    glVertex2f(86,58.8);
    glVertex2f(86,58.6);
    glEnd();

     glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,56.1);
    glVertex2f(78,56.3);
    glVertex2f(86,56.3);
    glVertex2f(86,56.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,53.6);
    glVertex2f(78,53.8);
    glVertex2f(86,53.8);
    glVertex2f(86,53.6);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,51.1);
    glVertex2f(78,51.3);
    glVertex2f(86,51.3);
    glVertex2f(86,51.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,48.6);
    glVertex2f(78,48.8);
    glVertex2f(86,48.8);
    glVertex2f(86,48.6);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,46.1);
    glVertex2f(78,46.3);
    glVertex2f(86,46.3);
    glVertex2f(86,46.1);
    glEnd();




    //building4

glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(71,40);
    glVertex2f(71,58);
    glVertex2f(81,58);
    glVertex2f(81,40);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(71,58);
    glVertex2f(71,61);
    glVertex2f(81,61);
    glVertex2f(81,58);
    glEnd();

    glColor3ub(148,119,64);
    glBegin(GL_POLYGON);
    glVertex2f(72,43);
    glVertex2f(72,58);
    glVertex2f(80,58);
    glVertex2f(80,43);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,55);
    glVertex2f(72,56);
    glVertex2f(80,56);
    glVertex2f(80,55);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,53.5);
    glVertex2f(72,54);
    glVertex2f(80,54);
    glVertex2f(80,53.5);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,52);
    glVertex2f(72,52.5);
    glVertex2f(80,52.5);
    glVertex2f(80,52);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,50.5);
    glVertex2f(72,51);
    glVertex2f(80,51);
    glVertex2f(80,50.5);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,49);
    glVertex2f(72,49.5);
    glVertex2f(80,49.5);
    glVertex2f(80,49);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,47.5);
    glVertex2f(72,48);
    glVertex2f(80,48);
    glVertex2f(80,47.5);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,46);
    glVertex2f(72,46.5);
    glVertex2f(80,46.5);
    glVertex2f(80,46);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,44.5);
    glVertex2f(72,45);
    glVertex2f(80,45);
    glVertex2f(80,44.5);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(74,43);
    glVertex2f(74,58);
    glVertex2f(74.5,58);
    glVertex2f(74.5,43);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(77,43);
    glVertex2f(77,58);
    glVertex2f(77.5,58);
    glVertex2f(77.5,43);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,59);
    glVertex2f(72,60);
    glVertex2f(80,60);
    glVertex2f(80,59);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(73,58);
    glVertex2f(73,61);
    glVertex2f(73.5,61);
    glVertex2f(73.5,58);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(74.5,58);
    glVertex2f(74.5,61);
    glVertex2f(75,61);
    glVertex2f(75,58);
    glEnd();

      glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(76,58);
    glVertex2f(76,61);
    glVertex2f(76.5,61);
    glVertex2f(76.5,58);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(77.5,58);
    glVertex2f(77.5,61);
    glVertex2f(78,61);
    glVertex2f(78,58);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(78.9,58);
    glVertex2f(78.9,61);
    glVertex2f(79.1,61);
    glVertex2f(79.1,58);
    glEnd();







    //building6

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(85,40);
    glVertex2f(85,61);
    glVertex2f(99,61);
    glVertex2f(99,40);
    glEnd();

     glColor3ub(108,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,42);
    glVertex2f(86,59);
    glVertex2f(98,59);
    glVertex2f(98,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,56.5);
    glVertex2f(86,57);
    glVertex2f(98,57);
    glVertex2f(98,56.5);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,54);
    glVertex2f(86,54.5);
    glVertex2f(98,54.5);
    glVertex2f(98,54);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,51.5);
    glVertex2f(86,52);
    glVertex2f(98,52);
    glVertex2f(98,51.5);
    glEnd();

     glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,49);
    glVertex2f(86,49.5);
    glVertex2f(98,49.5);
    glVertex2f(98,49);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,46.5);
    glVertex2f(86,47);
    glVertex2f(98,47);
    glVertex2f(98,46.5);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,44);
    glVertex2f(86,44.5);
    glVertex2f(98,44.5);
    glVertex2f(98,44);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(88,42);
    glVertex2f(88,59);
    glVertex2f(88.5,59);
    glVertex2f(88.5,42);
    glEnd();

     glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(90.5,42);
    glVertex2f(90.5,59);
    glVertex2f(91,59);
    glVertex2f(91,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(93,42);
    glVertex2f(93,59);
    glVertex2f(93.5,59);
    glVertex2f(93.5,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(95.5,42);
    glVertex2f(95.5,59);
    glVertex2f(96,59);
    glVertex2f(96,42);
    glEnd();

    ///tree

    //tree1

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,42);
    glVertex2f(16,42);
    glVertex2f(16,40);
    glEnd();

      glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,42);
    glVertex2f(15.5,45);
    glVertex2f(19,42);
    glEnd();
    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,43);
    glVertex2f(15.5,46);
    glVertex2f(19,43);
    glEnd();
     glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,44);
    glVertex2f(15.5,47);
    glVertex2f(19,44);
    glEnd();

    //tree2

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(27,40);
    glVertex2f(27,42);
    glVertex2f(28,42);
    glVertex2f(28,40);
    glEnd();

     glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,44);
    glVertex2f(27.5,47);
    glVertex2f(31,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,43);
    glVertex2f(27.5,46);
    glVertex2f(31,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,42);
    glVertex2f(27.5,44);
    glVertex2f(31,42);
    glEnd();

    //tree 3

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(61,40);
    glVertex2f(61,42);
    glVertex2f(62,42);
    glVertex2f(62,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,44);
    glVertex2f(61.5,47);
    glVertex2f(65,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,43);
    glVertex2f(61.5,46);
    glVertex2f(65,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,42);
    glVertex2f(61.5,45);
    glVertex2f(65,42);
    glEnd();

    //tree 4

    glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(75,40);
    glVertex2f(75,42);
    glVertex2f(76,42);
    glVertex2f(76,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,44);
    glVertex2f(75.5,47);
    glVertex2f(79,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,43);
    glVertex2f(75.5,46);
    glVertex2f(79,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,42);
    glVertex2f(75.5,45);
    glVertex2f(79,42);
    glEnd();

    //tree5

     //tree 4

    glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(90,40);
    glVertex2f(90,42);
    glVertex2f(91,42);
    glVertex2f(91,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,44);
    glVertex2f(90.5,47);
    glVertex2f(94,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,43);
    glVertex2f(90.5,46);
    glVertex2f(94,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,42);
    glVertex2f(90.5,45);
    glVertex2f(94,42);
    glEnd();










///road
///main road
    glColor3ub(50,50,50);
    glBegin(GL_QUADS);
    glVertex2f(0,35);
    glVertex2f(100,35);
    glVertex2f(100,40);
    glVertex2f(0,40);
    glEnd();
    glPopMatrix();

///road
///main road
    glColor3ub(50,50,50);
    glBegin(GL_QUADS);
    glVertex2f(0,34);
    glVertex2f(100,34);
    glVertex2f(100,40);
    glVertex2f(0,40);
    glEnd();
    glPopMatrix();

    ///road divider
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-2,37.35);
    glVertex2f(3,37.35);
    glVertex2f(3,37.65);
    glVertex2f(-2,37.65);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(5,37.35);
    glVertex2f(10,37.35);
    glVertex2f(10,37.65);
    glVertex2f(5,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(12,37.35);
    glVertex2f(17,37.35);
    glVertex2f(17,37.65);
    glVertex2f(12,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(19,37.35);
    glVertex2f(24,37.35);
    glVertex2f(24,37.65);
    glVertex2f(19,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(26,37.35);
    glVertex2f(31,37.35);
    glVertex2f(31,37.65);
    glVertex2f(26,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(33,37.35);
    glVertex2f(38,37.35);
    glVertex2f(38,37.65);
    glVertex2f(33,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(40,37.35);
    glVertex2f(45,37.35);
    glVertex2f(45,37.65);
    glVertex2f(40,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(47,37.35);
    glVertex2f(52,37.35);
    glVertex2f(52,37.65);
    glVertex2f(47,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(54,37.35);
    glVertex2f(59,37.35);
    glVertex2f(59,37.65);
    glVertex2f(54,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(61,37.35);
    glVertex2f(66,37.35);
    glVertex2f(66,37.65);
    glVertex2f(61,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(68,37.35);
    glVertex2f(73,37.35);
    glVertex2f(73,37.65);
    glVertex2f(68,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(75,37.35);
    glVertex2f(80,37.35);
    glVertex2f(80,37.65);
    glVertex2f(75,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(82,37.35);
    glVertex2f(87,37.35);
    glVertex2f(87,37.65);
    glVertex2f(82,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(89,37.35);
    glVertex2f(94,37.35);
    glVertex2f(94,37.65);
    glVertex2f(89,37.65);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(96,37.35);
    glVertex2f(101,37.35);
    glVertex2f(101,37.65);
    glVertex2f(96,37.65);
    glEnd();


///cars
///right to left
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_movecar,0.0f, 0.0f);
    glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(60,38.5);
    glVertex2f(68,38.5);
    glVertex2f(68,40);
    glVertex2f(60,40);
    glEnd();

    glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(61,40);
    glVertex2f(68,40);
    glVertex2f(67,41.5);
    glVertex2f(63,41.5);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(61.5,40);
    glVertex2f(67.7,40);
    glVertex2f(66.7,41.2);
    glVertex2f(63.2,41.2);
    glEnd();

    glColor4ub(255,255,255,128);
    glBegin(GL_TRIANGLES);
    glVertex2f(57,38.5);
    glVertex2f(60,39.5);
    glVertex2f(57,40.5);

    glEnd();

    glDisable(GL_BLEND);

        glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(65.5,40);
    glVertex2f(65.8,40);
    glVertex2f(65.8,41.5);
    glVertex2f(65.5,41.5);
    glEnd();


      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+62.25,y+38.5);
        }
  glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+66.2,y+38.5);
        }
  glEnd();
  glPopMatrix();


///left to right

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_movecar2,0.0f, 0.0f);
    glColor3ub(196, 30, 58);
    glBegin(GL_QUADS);
    glVertex2f(9,36);
    glVertex2f(17,36);
    glVertex2f(16.6,37.5);
    glVertex2f(9,37.5);
    glEnd();



    glColor3ub(196, 30, 58);
    glBegin(GL_QUADS);
    glVertex2f(10,37.5);
    glVertex2f(15.5,37.5);
    glVertex2f(14,38.6);
    glVertex2f(11.2,38.6);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(10.3,37.5);
    glVertex2f(15.1,37.5);
    glVertex2f(13.7,38.4);
    glVertex2f(11.4,38.4);
    glEnd();

    glColor4ub(255,255,255,128);
    glBegin(GL_TRIANGLES);
    glVertex2f(16.7,37);
    glVertex2f(20,36);
    glVertex2f(20,38);
    glEnd();
    glDisable(GL_BLEND);

      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+11,y+36);
        }
  glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15,y+36);
        }
  glEnd();
  glPopMatrix();

   ///  road border
    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(0,33);
    glVertex2f(100,33);
    glVertex2f(100,34);
    glVertex2f(0,34);
    glEnd();
///pole lines
    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(0,35.25);
    glVertex2f(100,35.25);
    glVertex2f(100,35.5);
    glVertex2f(0,35.5);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(2,34);
    glVertex2f(2.25,34);
    glVertex2f(2.25,35.25);
    glVertex2f(2,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(7,34);
    glVertex2f(7.25,34);
    glVertex2f(7.25,35.25);
    glVertex2f(7,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(12,34);
    glVertex2f(12.25,34);
    glVertex2f(12.25,35.25);
    glVertex2f(12,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(17,34);
    glVertex2f(17.25,34);
    glVertex2f(17.25,35.25);
    glVertex2f(17,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(22,34);
    glVertex2f(22.25,34);
    glVertex2f(22.25,35.25);
    glVertex2f(22,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(27,34);
    glVertex2f(27.25,34);
    glVertex2f(27.25,35.25);
    glVertex2f(27,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(32,34);
    glVertex2f(32.25,34);
    glVertex2f(32.25,35.25);
    glVertex2f(32,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(37,34);
    glVertex2f(37.25,34);
    glVertex2f(37.25,35.25);
    glVertex2f(37,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(42,34);
    glVertex2f(42.25,34);
    glVertex2f(42.25,35.25);
    glVertex2f(42,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(47,34);
    glVertex2f(47.25,34);
    glVertex2f(47.25,35.25);
    glVertex2f(47,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(52,34);
    glVertex2f(52.25,34);
    glVertex2f(52.25,35.25);
    glVertex2f(52,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(57,34);
    glVertex2f(57.25,34);
    glVertex2f(57.25,35.25);
    glVertex2f(57,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(62,34);
    glVertex2f(62.25,34);
    glVertex2f(62.25,35.25);
    glVertex2f(62,35.25);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(67,34);
    glVertex2f(67.25,34);
    glVertex2f(67.25,35.25);
    glVertex2f(67,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(72,34);
    glVertex2f(72.25,34);
    glVertex2f(72.25,35.25);
    glVertex2f(72,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(77,34);
    glVertex2f(77.25,34);
    glVertex2f(77.25,35.25);
    glVertex2f(77,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(82,34);
    glVertex2f(82.25,34);
    glVertex2f(82.25,35.25);
    glVertex2f(82,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(87,34);
    glVertex2f(87.25,34);
    glVertex2f(87.25,35.25);
    glVertex2f(87,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(92,34);
    glVertex2f(92.25,34);
    glVertex2f(92.25,35.25);
    glVertex2f(92,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(97,34);
    glVertex2f(97.25,34);
    glVertex2f(97.25,35.25);
    glVertex2f(97,35.25);
    glEnd();





   ///river
///shade1

    glColor3ub(153.0f,153.0f,255.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.0,0.0);
       glColor3ub(102,153,255.0f);
    glVertex2f(100,0);
    glVertex2f(100,33);
        glColor3ub(102,153,255.0f);
    glVertex2f(0,33);
    glEnd();
glPopMatrix();

///wave
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(5,25);
    glVertex2f(19,25);
    glVertex2f(12,26);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,25);
    glVertex2f(40,25);
    glVertex2f(35,26);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70,25);
    glVertex2f(85,25);
    glVertex2f(78,26);
    glEnd();
    glPopMatrix();

///wave2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(50,20);
    glVertex2f(60,20);
    glVertex2f(55,21);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(30.0f,20);
    glVertex2f(37.0f,20);
    glVertex2f(34,21);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(80,20);
    glVertex2f(90,20);
    glVertex2f(85,21);
    glEnd();
    glPopMatrix();

///wave3
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(25,30);
    glVertex2f(35,30);
    glVertex2f(30,31);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(75,30);
    glVertex2f(85,30);
    glVertex2f(80,31);
    glEnd();



    ///boat
    glColor3ub(27.0f,27.0f,60.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move5,_moveM , 0.0f);

    glBegin(GL_POLYGON);
    glVertex2f(60,22);
    glVertex2f(62,19);
    glVertex2f(73,19);
    glVertex2f(75,22);
    glEnd();

    glColor3ub(180.0f,100.0f,30.0f);
    glBegin(GL_POLYGON);
    glVertex2f(68,22);
    glVertex2f(69,22.5);
    glVertex2f(68.5,28.25);
    glEnd();

    glColor3ub(245.0f,240.0f,180.0f);
    glBegin(GL_POLYGON);
    glVertex2f(68.5,22.25);
    glVertex2f(68.5,28.25);
    glVertex2f(75,25);

     glEnd();
    glPopMatrix();

//lower railing
    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,15);
    glVertex2f(100,15);
    glVertex2f(100,15.5);
    glVertex2f(0, 15.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,14);
    glVertex2f(100,14);
    glVertex2f(100,14.5);
    glVertex2f(0, 14.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,13);
    glVertex2f(100,13);
    glVertex2f(100,13.5);
    glVertex2f(0,13.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,12);
    glVertex2f(100,12);
    glVertex2f(100,12.5);
    glVertex2f(0,12.5);
    glEnd();
   //stand

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0.5,12);
    glVertex2f(1,12);
    glVertex2f(1,16);
    glVertex2f(0.5,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(10,12);
    glVertex2f(10.5,12);
    glVertex2f(10.5,16);
    glVertex2f(10,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(20,12);
    glVertex2f(20.5,12);
    glVertex2f(20.5,16);
    glVertex2f(20,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(30,12);
    glVertex2f(30.5,12);
    glVertex2f(30.5,16);
    glVertex2f(30,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(40,12);
    glVertex2f(40.5,12);
    glVertex2f(40.5,16);
    glVertex2f(40,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(50,12);
    glVertex2f(50.5,12);
    glVertex2f(50.5,16);
    glVertex2f(50,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(60,12);
    glVertex2f(60.5,12);
    glVertex2f(60.5,16);
    glVertex2f(60,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(70,12);
    glVertex2f(70.5,12);
    glVertex2f(70.5,16);
    glVertex2f(70,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(80,12);
    glVertex2f(80.5,12);
    glVertex2f(80.5,16);
    glVertex2f(80,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(90,12);
    glVertex2f(90.5,12);
    glVertex2f(90.5,16);
    glVertex2f(90,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(99,12);
    glVertex2f(99.5,12);
    glVertex2f(99.5,16);
    glVertex2f(99,16);
    glEnd();
//grass

    glColor3ub(0,150,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(100, 0);
    glVertex2f(100, 12);
    glVertex2f(0, 12);
    glEnd();

//bench
    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,12);
    glVertex2f(18,12);
    glVertex2f(18,13);
    glVertex2f(5,13);
    glEnd();

    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,13);
    glVertex2f(18,13);
    glVertex2f(18,13.25);
    glVertex2f(5,13.25);
    glEnd();


    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,13.25);
    glVertex2f(18,13.25);
    glVertex2f(18,14.25);
    glVertex2f(5,14.25);
    glEnd();

    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,14.25);
    glVertex2f(18,14.25);
    glVertex2f(18,14.5);
    glVertex2f(5,14.5);
    glEnd();

    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,14.5);
    glVertex2f(18,14.5);
    glVertex2f(18,15.5);
    glVertex2f(5,15.5);
    glEnd();

   glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,15.5);
    glVertex2f(18,15.5);
    glVertex2f(18,15.75);
    glVertex2f(5,15.75);
    glEnd();

    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,15.75);
    glVertex2f(18,15.75);
    glVertex2f(18,16.75);
    glVertex2f(5,16.75);
    glEnd();


    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,12);
    glVertex2f(18,12.);
    glVertex2f(18,12.25);
    glVertex2f(5,12.25);
    glEnd();

   ///sitting
    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,9.5);
    glVertex2f(18.5,9.5);
    glVertex2f(18,12);
    glVertex2f(5,12);
    glEnd();
    //legs
    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,9);
    glVertex2f(18.5,9);
    glVertex2f(18.5,9.5);
    glVertex2f(4.5,9.5);
    glEnd();

    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,7.25);
    glVertex2f(5,7.25);
    glVertex2f(5,9.5);
    glVertex2f(4.5,9.5);
    glEnd();

    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(18,7.25);
    glVertex2f(18.5,7.25);
    glVertex2f(18.5,9.5);
    glVertex2f(18,9.5);
    glEnd();

    ///food cart
   glColor3ub(139,69,19);
    glBegin(GL_POLYGON);
    glVertex2f(25,9);
    glVertex2f(45,9);
    glVertex2f(45,13);
    glVertex2f(25,13);
    glEnd();
    glColor3ub(204,102,0);
    glBegin(GL_POLYGON);
    glVertex2f(25,13);
    glVertex2f(45,13);
    glVertex2f(45,14);
    glVertex2f(25,14);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_POLYGON);
    glVertex2f(25,14);
    glVertex2f(45,14);
    glVertex2f(45,20);
    glVertex2f(25,20);
    glEnd();
   glDisable(GL_BLEND);
//Triangles
    glColor3ub(255,101,24);
    glBegin(GL_TRIANGLES);
    glVertex2f(25,20);
    glVertex2f(27.5,17.5);
    glVertex2f(30,20);
    glEnd();

    glColor3ub(255,255,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,20);
    glVertex2f(32.5,17.5);
    glVertex2f(35,20);
    glEnd();

    glColor3ub(153, 51,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(35,20);
    glVertex2f(37.5,17.5);
    glVertex2f(40,20);
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,20);
    glVertex2f(42.5,17.5);
    glVertex2f(45,20);
    glEnd();
//Upper Boxes-----------

    glColor3ub(204,204,0);
    glBegin(GL_POLYGON);
    glVertex2f(30,20);
    glVertex2f(35,20);
    glVertex2f(35,23);
    glVertex2f(30,23);
    glEnd();

    glColor3ub(139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(35,20);
    glVertex2f(40,20);
    glVertex2f(40,23);
    glVertex2f(35,23);
    glEnd();

    glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2f(40,20);
    glVertex2f(45,20);
    glVertex2f(45,23);
    glVertex2f(40,23);
    glEnd();

    glColor3ub(219,73,0);
    glBegin(GL_POLYGON);
    glVertex2f(25,20);
    glVertex2f(30,20);
    glVertex2f(30,23);
    glVertex2f(25,23);
    glEnd();
///left wheel
      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(32,32,32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+9);
        }
  glEnd();

    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(192, 192, 192);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+9);
        }
  glEnd();

  ///right wheel
      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(32, 32, 32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+9);
        }
  glEnd();

      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+9);
        }
  glEnd();
}


void morning(){

///sky
   glColor3ub(200,210,220);
    glBegin(GL_QUADS);
    glColor3ub(255.0f,255.0f,255.0f);
    glVertex2f(0,35);
glColor3ub(150,180,200);
    glVertex2f(100,35);
   glColor3ub(0.0f,153.0f,153.0f);

    glVertex2f(100,80);

    glVertex2f(0,80);
    glEnd();

///sun
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
        glColor3ub(255,240,200);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=4.0;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+90,y+70);
        }
  glEnd();

  ///traintrack



///cloud
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15,y+70);
        }

  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {

        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+18.5,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
      glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=1.9;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+16.5,y+72);
        }
  glEnd();
  glPopMatrix();

///cloud 2
  glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+35,y+65);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
       glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+38,y+65);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+36.4,y+67);
        }
  glEnd();
  glPopMatrix();

///cloud 3
  glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move3, 0.0f, 0.0f);
  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+5,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+2,y+70);
        }
  glEnd();

  glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(220, 220, 230);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+3.5,y+72);
        }
  glEnd();
  glPopMatrix();

///buildings
///mosque
    //base
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(35,40);
    glVertex2f(55,40);
    glVertex2f(54,41);
    glVertex2f(36,41);
    glEnd();

    //Left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36,41);
    glVertex2f(37,41);
    glVertex2f(37,49);
    glVertex2f(36,49);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36,49);
    glVertex2f(37,49);
    glVertex2f(37.5,49.5);
    glVertex2f(35.5,49.5);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36 , 49.5);
    glVertex2f(37,49.5);
    glVertex2f(37,51);
    glVertex2f(36,51);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(36.5,51);
    glVertex2f(37,51.5);
    glVertex2f(36.5,52);
    glVertex2f(36,51.5);
    glEnd();

    //second left pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(38,45);
    glVertex2f(39,45);
    glVertex2f(39,48);
    glVertex2f(38,48);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(38.5,48);
    glVertex2f(39,48.5);
    glVertex2f(38.5,49);
    glVertex2f(38,48.5);
    glEnd();

    //right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53,41);
    glVertex2f(54,41);
    glVertex2f(54,49);
    glVertex2f(53,49);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53,49);
    glVertex2f(54,49);
    glVertex2f(54.5,49.5);
    glVertex2f(52.5,49.5);
    glEnd();

    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53 , 49.5);
    glVertex2f(54,49.5);
    glVertex2f(54,51);
    glVertex2f(53,51);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(53.5,51);
    glVertex2f(54,51.5);
    glVertex2f(53.5,52);
    glVertex2f(53,51.5);
    glEnd();
//
    //second right pillar
    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(51,45);
    glVertex2f(52,45);
    glVertex2f(52,48);
    glVertex2f(51,48);
    glEnd();

    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(51.5,48);
    glVertex2f(52,48.5);
    glVertex2f(51.5,49);
    glVertex2f(51,48.5);
    glEnd();

    //body
    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(37,41);
    glVertex2f(43.5,41);
    glVertex2f(43.5,45);
    glVertex2f(37,45);
    glEnd();

    glColor3ub(204.0f,105.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(46,41);
    glVertex2f(53,41);
    glVertex2f(53,45);
    glVertex2f(46,45);
    glEnd();

    //front door
    glColor3ub(153.0f,57.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,41);
    glVertex2f(46.5,41);
    glVertex2f(46.5,46);
    glVertex2f(43.5,46);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(44,41);
    glVertex2f(46,41);
    glVertex2f(46,44.5);
    glVertex2f(44,44.5);
    glEnd();

    glColor3ub(179.0f,89.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(44,44.5);
    glVertex2f(46,44.5);
    glVertex2f(45,45.5);
    glEnd();

    //left doors
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(38,41);
    glVertex2f(39,41);
    glVertex2f(39,43);
    glVertex2f(38,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(38,43);
    glVertex2f(39,43);
    glVertex2f(38.5,43.5);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(40,41);
    glVertex2f(41,41);
    glVertex2f(41,43);
    glVertex2f(40,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,43);
    glVertex2f(41,43);
    glVertex2f(40.5,43.5);
    glEnd();

    //right doors
     glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(49,41);
    glVertex2f(50,41);
    glVertex2f(50,43);
    glVertex2f(49,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(49,43);
    glVertex2f(50,43);
    glVertex2f(49.5,43.5);
    glEnd();

    //2
    glColor3ub(102.0f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glVertex2f(51,41);
    glVertex2f(52,41);
    glVertex2f(52,43);
    glVertex2f(51,43);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(51,43);
    glVertex2f(52,43);
    glVertex2f(51.5,43.5);
    glEnd();

//middle miner
    glColor3ub(0.0f,204.0f,204.0f);
    glBegin(GL_POLYGON);
    glVertex2f(43.5,46);
    glVertex2f(46.5,46);
    glVertex2f(47.5,47);
    glVertex2f(45,49);
    glVertex2f(42.5,47);
    glEnd();

    glColor3ub(255.0f,170.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(45,49);
    glVertex2f(45.5,49.5);
    glVertex2f(45,50);
    glVertex2f(44.5,49.5);
    glEnd();
    glFlush();

///rest of the buildings code here

//building1

 glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(1,40);
    glVertex2f(1,65);
    glVertex2f(12,65);
    glVertex2f(12,40);
    glEnd();

    glColor3ub(135,54,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,42);
    glVertex2f(2,62);
    glVertex2f(11,62);
    glVertex2f(11,42);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,60);
    glVertex2f(2,59);
    glVertex2f(11,59);
    glVertex2f(11,60);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,57);
    glVertex2f(2,56);
    glVertex2f(11,56);
    glVertex2f(11,57);
    glEnd();


     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,54);
    glVertex2f(2,53);
    glVertex2f(11,53);
    glVertex2f(11,54);
    glEnd();


     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,51);
    glVertex2f(2,50);
    glVertex2f(11,50);
    glVertex2f(11,51);
    glEnd();

     glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,48);
    glVertex2f(2,47);
    glVertex2f(11,47);
    glVertex2f(11,48);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(2,45);
    glVertex2f(2,44);
    glVertex2f(11,44);
    glVertex2f(11,45);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(4,42);
    glVertex2f(4,62);
    glVertex2f(5,62);
    glVertex2f(5,42);
    glEnd();

    glColor3ub(183,149,11);
    glBegin(GL_POLYGON);
    glVertex2f(7,42);
    glVertex2f(7,62);
    glVertex2f(8,62);
    glVertex2f(8,42);
    glEnd();




//building3

    glColor3ub(0,51,102);
    glBegin(GL_POLYGON);
    glVertex2f(20,40);
    glVertex2f(20,70);
    glVertex2f(34.5,70);
    glVertex2f(34.5,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,68);
    glVertex2f(22,68);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,68);
    glVertex2f(22,68);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(23,40);
    glVertex2f(23,68);
    glVertex2f(24,68);
    glVertex2f(24,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(25,40);
    glVertex2f(25,68);
    glVertex2f(26,68);
    glVertex2f(26,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(27,40);
    glVertex2f(27,68);
    glVertex2f(28,68);
    glVertex2f(28,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(29,40);
    glVertex2f(29,68);
    glVertex2f(30,68);
    glVertex2f(30,40);
    glEnd();

    glColor3ub(0,123,123);
    glBegin(GL_POLYGON);
    glVertex2f(31,40);
    glVertex2f(31,68);
    glVertex2f(32,68);
    glVertex2f(32,40);
    glEnd();

    glFlush();
//building2

glColor3ub(0,204,204);
    glBegin(GL_POLYGON);
    glVertex2f(9,40);
    glVertex2f(9,60);
    glVertex2f(22,60);
    glVertex2f(25,58);
    glVertex2f(25,40);
    glEnd();

    glColor3ub(0,153,153);
    glBegin(GL_POLYGON);
    glVertex2f(22,40);
    glVertex2f(22,60);
    glVertex2f(25,58);
    glVertex2f(25,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(9,40);
    glVertex2f(9,58);
    glVertex2f(22,58);
    glVertex2f(22,40);
    glEnd();

    glColor3ub(0,102,102);
    glBegin(GL_POLYGON);
    glVertex2f(22,40);
    glVertex2f(22,59);
    glVertex2f(24,57.5);
    glVertex2f(24,40);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,57);
    glVertex2f(10,56);
    glVertex2f(24,56);
    glVertex2f(24,57);
    glEnd();

     glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,55);
    glVertex2f(10,54);
    glVertex2f(24,54);
    glVertex2f(24,55);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,53);
    glVertex2f(10,52);
    glVertex2f(24,52);
    glVertex2f(24,53);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,51);
    glVertex2f(10,50);
    glVertex2f(24,50);
    glVertex2f(24,51);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,49);
    glVertex2f(10,48);
    glVertex2f(24,48);
    glVertex2f(24,49);
    glEnd();

     glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,47);
    glVertex2f(10,46);
    glVertex2f(24,46);
    glVertex2f(24,47);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,45);
    glVertex2f(10,44);
    glVertex2f(24,44);
    glVertex2f(24,45);
    glEnd();

    glColor3ub(0,80,80);
    glBegin(GL_POLYGON);
    glVertex2f(10,43);
    glVertex2f(10,42);
    glVertex2f(24,42);
    glVertex2f(24,43);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(11,40);
    glVertex2f(11,58);
    glVertex2f(12,58);
    glVertex2f(12,40);
    glEnd();
    glFlush();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(13,40);
    glVertex2f(13,58);
    glVertex2f(14,58);
    glVertex2f(14,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,58);
    glVertex2f(16,58);
    glVertex2f(16,40);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(17,40);
    glVertex2f(17,58);
    glVertex2f(18,58);
    glVertex2f(18,40);
    glEnd();

    glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(19,40);
    glVertex2f(19,58);
    glVertex2f(20,58);
    glVertex2f(20,40);
    glEnd();

     glColor3ub(0,183,183);
    glBegin(GL_POLYGON);
    glVertex2f(21,40);
    glVertex2f(21,58);
    glVertex2f(22,58);
    glVertex2f(22,40);
    glEnd();


    glFlush();

//building 3

glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(55,40);
    glVertex2f(55,65);
    glVertex2f(72,65);
    glVertex2f(72,40);
    glEnd();

    glColor3ub(0,0,102);
    glBegin(GL_POLYGON);
    glVertex2f(57,43);
    glVertex2f(57,62);
    glVertex2f(72,62);
    glVertex2f(72,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(59,43);
    glVertex2f(59,62);
    glVertex2f(60,62);
    glVertex2f(60,43);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(62,43);
    glVertex2f(62,62);
    glVertex2f(63,62);
    glVertex2f(63,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(65,43);
    glVertex2f(65,62);
    glVertex2f(66,62);
    glVertex2f(66,43);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(68,43);
    glVertex2f(68,62);
    glVertex2f(69,62);
    glVertex2f(69,43);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(71,43);
    glVertex2f(71,62);
    glVertex2f(72,62);
    glVertex2f(72,43);
    glEnd();

   glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,58);
    glVertex2f(57,60);
    glVertex2f(72,60);
    glVertex2f(72,58);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,56);
    glVertex2f(57,54);
    glVertex2f(72,54);
    glVertex2f(72,56);
    glEnd();

      glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,52);
    glVertex2f(57,50);
    glVertex2f(72,50);
    glVertex2f(72,52);
    glEnd();

     glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,48);
    glVertex2f(57,46);
    glVertex2f(72,46);
    glVertex2f(72,48);
    glEnd();

    glColor3ub(211,41,90);
    glBegin(GL_POLYGON);
    glVertex2f(57,44);
    glVertex2f(57,42);
    glVertex2f(72,42);
    glVertex2f(72,44);
    glEnd();

    // building5

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(77,40);
    glVertex2f(77,68);
    glVertex2f(86.5,68);
    glVertex2f(86.5,40);
    glEnd();

    glColor3ub(130,224,170);
    glBegin(GL_POLYGON);
    glVertex2f(78,44);
    glVertex2f(78,66);
    glVertex2f(85.5,66);
    glVertex2f(85.5,44);
    glEnd();

   glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(80.3,44);
    glVertex2f(80.3,66);
    glVertex2f(80.5,66);
    glVertex2f(80.5,44);
    glEnd();

     glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(82.8,44);
    glVertex2f(82.8,66);
    glVertex2f(83,66);
    glVertex2f(83,44);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,63.5);
    glVertex2f(78,63.7);
    glVertex2f(86,63.7);
    glVertex2f(86,63.5);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,61.1);
    glVertex2f(78,61.3);
    glVertex2f(86,61.3);
    glVertex2f(86,61.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,58.6);
    glVertex2f(78,58.8);
    glVertex2f(86,58.8);
    glVertex2f(86,58.6);
    glEnd();

     glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,56.1);
    glVertex2f(78,56.3);
    glVertex2f(86,56.3);
    glVertex2f(86,56.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,53.6);
    glVertex2f(78,53.8);
    glVertex2f(86,53.8);
    glVertex2f(86,53.6);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,51.1);
    glVertex2f(78,51.3);
    glVertex2f(86,51.3);
    glVertex2f(86,51.1);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,48.6);
    glVertex2f(78,48.8);
    glVertex2f(86,48.8);
    glVertex2f(86,48.6);
    glEnd();

    glColor3ub(25,111,61);
    glBegin(GL_POLYGON);
    glVertex2f(78,46.1);
    glVertex2f(78,46.3);
    glVertex2f(86,46.3);
    glVertex2f(86,46.1);
    glEnd();




    //building4

glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(71,40);
    glVertex2f(71,58);
    glVertex2f(81,58);
    glVertex2f(81,40);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(71,58);
    glVertex2f(71,61);
    glVertex2f(81,61);
    glVertex2f(81,58);
    glEnd();

    glColor3ub(148,119,64);
    glBegin(GL_POLYGON);
    glVertex2f(72,43);
    glVertex2f(72,58);
    glVertex2f(80,58);
    glVertex2f(80,43);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,55);
    glVertex2f(72,56);
    glVertex2f(80,56);
    glVertex2f(80,55);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,53.5);
    glVertex2f(72,54);
    glVertex2f(80,54);
    glVertex2f(80,53.5);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,52);
    glVertex2f(72,52.5);
    glVertex2f(80,52.5);
    glVertex2f(80,52);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,50.5);
    glVertex2f(72,51);
    glVertex2f(80,51);
    glVertex2f(80,50.5);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,49);
    glVertex2f(72,49.5);
    glVertex2f(80,49.5);
    glVertex2f(80,49);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,47.5);
    glVertex2f(72,48);
    glVertex2f(80,48);
    glVertex2f(80,47.5);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,46);
    glVertex2f(72,46.5);
    glVertex2f(80,46.5);
    glVertex2f(80,46);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,44.5);
    glVertex2f(72,45);
    glVertex2f(80,45);
    glVertex2f(80,44.5);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(74,43);
    glVertex2f(74,58);
    glVertex2f(74.5,58);
    glVertex2f(74.5,43);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(77,43);
    glVertex2f(77,58);
    glVertex2f(77.5,58);
    glVertex2f(77.5,43);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(72,59);
    glVertex2f(72,60);
    glVertex2f(80,60);
    glVertex2f(80,59);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(73,58);
    glVertex2f(73,61);
    glVertex2f(73.5,61);
    glVertex2f(73.5,58);
    glEnd();

   glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(74.5,58);
    glVertex2f(74.5,61);
    glVertex2f(75,61);
    glVertex2f(75,58);
    glEnd();

      glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(76,58);
    glVertex2f(76,61);
    glVertex2f(76.5,61);
    glVertex2f(76.5,58);
    glEnd();

    glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(77.5,58);
    glVertex2f(77.5,61);
    glVertex2f(78,61);
    glVertex2f(78,58);
    glEnd();

     glColor3ub(247,220,111);
    glBegin(GL_POLYGON);
    glVertex2f(78.9,58);
    glVertex2f(78.9,61);
    glVertex2f(79.1,61);
    glVertex2f(79.1,58);
    glEnd();







    //building6

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(85,40);
    glVertex2f(85,61);
    glVertex2f(99,61);
    glVertex2f(99,40);
    glEnd();

     glColor3ub(108,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,42);
    glVertex2f(86,59);
    glVertex2f(98,59);
    glVertex2f(98,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,56.5);
    glVertex2f(86,57);
    glVertex2f(98,57);
    glVertex2f(98,56.5);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,54);
    glVertex2f(86,54.5);
    glVertex2f(98,54.5);
    glVertex2f(98,54);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,51.5);
    glVertex2f(86,52);
    glVertex2f(98,52);
    glVertex2f(98,51.5);
    glEnd();

     glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,49);
    glVertex2f(86,49.5);
    glVertex2f(98,49.5);
    glVertex2f(98,49);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,46.5);
    glVertex2f(86,47);
    glVertex2f(98,47);
    glVertex2f(98,46.5);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(86,44);
    glVertex2f(86,44.5);
    glVertex2f(98,44.5);
    glVertex2f(98,44);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(88,42);
    glVertex2f(88,59);
    glVertex2f(88.5,59);
    glVertex2f(88.5,42);
    glEnd();

     glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(90.5,42);
    glVertex2f(90.5,59);
    glVertex2f(91,59);
    glVertex2f(91,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(93,42);
    glVertex2f(93,59);
    glVertex2f(93.5,59);
    glVertex2f(93.5,42);
    glEnd();

    glColor3ub(178,90,0);
    glBegin(GL_POLYGON);
    glVertex2f(95.5,42);
    glVertex2f(95.5,59);
    glVertex2f(96,59);
    glVertex2f(96,42);
    glEnd();

    ///tree

    //tree1

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(15,40);
    glVertex2f(15,42);
    glVertex2f(16,42);
    glVertex2f(16,40);
    glEnd();

      glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,42);
    glVertex2f(15.5,45);
    glVertex2f(19,42);
    glEnd();
    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,43);
    glVertex2f(15.5,46);
    glVertex2f(19,43);
    glEnd();
     glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(12,44);
    glVertex2f(15.5,47);
    glVertex2f(19,44);
    glEnd();

    //tree2

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(27,40);
    glVertex2f(27,42);
    glVertex2f(28,42);
    glVertex2f(28,40);
    glEnd();

     glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,44);
    glVertex2f(27.5,47);
    glVertex2f(31,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,43);
    glVertex2f(27.5,46);
    glVertex2f(31,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(24,42);
    glVertex2f(27.5,44);
    glVertex2f(31,42);
    glEnd();

    //tree 3

     glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(61,40);
    glVertex2f(61,42);
    glVertex2f(62,42);
    glVertex2f(62,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,44);
    glVertex2f(61.5,47);
    glVertex2f(65,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,43);
    glVertex2f(61.5,46);
    glVertex2f(65,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(58,42);
    glVertex2f(61.5,45);
    glVertex2f(65,42);
    glEnd();

    //tree 4

    glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(75,40);
    glVertex2f(75,42);
    glVertex2f(76,42);
    glVertex2f(76,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,44);
    glVertex2f(75.5,47);
    glVertex2f(79,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,43);
    glVertex2f(75.5,46);
    glVertex2f(79,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(72,42);
    glVertex2f(75.5,45);
    glVertex2f(79,42);
    glEnd();

    //tree5

     //tree 4

    glColor3ub(123,36,28);
    glBegin(GL_POLYGON);
    glVertex2f(90,40);
    glVertex2f(90,42);
    glVertex2f(91,42);
    glVertex2f(91,40);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,44);
    glVertex2f(90.5,47);
    glVertex2f(94,44);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,43);
    glVertex2f(90.5,46);
    glVertex2f(94,43);
    glEnd();

    glColor3ub(30,132,73);
    glBegin(GL_POLYGON);
    glVertex2f(87,42);
    glVertex2f(90.5,45);
    glVertex2f(94,42);
    glEnd();










///road
///main road
    glColor3ub(50,50,50);
    glBegin(GL_QUADS);
    glVertex2f(0,35);
    glVertex2f(100,35);
    glVertex2f(100,40);
    glVertex2f(0,40);
    glEnd();
    glPopMatrix();

///road
///main road
    glColor3ub(50,50,50);
    glBegin(GL_QUADS);
    glVertex2f(0,34);
    glVertex2f(100,34);
    glVertex2f(100,40);
    glVertex2f(0,40);
    glEnd();
    glPopMatrix();

    ///road divider
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(-2,37.35);
    glVertex2f(3,37.35);
    glVertex2f(3,37.65);
    glVertex2f(-2,37.65);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(5,37.35);
    glVertex2f(10,37.35);
    glVertex2f(10,37.65);
    glVertex2f(5,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(12,37.35);
    glVertex2f(17,37.35);
    glVertex2f(17,37.65);
    glVertex2f(12,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(19,37.35);
    glVertex2f(24,37.35);
    glVertex2f(24,37.65);
    glVertex2f(19,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(26,37.35);
    glVertex2f(31,37.35);
    glVertex2f(31,37.65);
    glVertex2f(26,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(33,37.35);
    glVertex2f(38,37.35);
    glVertex2f(38,37.65);
    glVertex2f(33,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(40,37.35);
    glVertex2f(45,37.35);
    glVertex2f(45,37.65);
    glVertex2f(40,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(47,37.35);
    glVertex2f(52,37.35);
    glVertex2f(52,37.65);
    glVertex2f(47,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(54,37.35);
    glVertex2f(59,37.35);
    glVertex2f(59,37.65);
    glVertex2f(54,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(61,37.35);
    glVertex2f(66,37.35);
    glVertex2f(66,37.65);
    glVertex2f(61,37.65);
    glEnd();

        glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(68,37.35);
    glVertex2f(73,37.35);
    glVertex2f(73,37.65);
    glVertex2f(68,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(75,37.35);
    glVertex2f(80,37.35);
    glVertex2f(80,37.65);
    glVertex2f(75,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(82,37.35);
    glVertex2f(87,37.35);
    glVertex2f(87,37.65);
    glVertex2f(82,37.65);
    glEnd();

            glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(89,37.35);
    glVertex2f(94,37.35);
    glVertex2f(94,37.65);
    glVertex2f(89,37.65);
    glEnd();

    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex2f(96,37.35);
    glVertex2f(101,37.35);
    glVertex2f(101,37.65);
    glVertex2f(96,37.65);
    glEnd();


///cars
///right to left
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_movecar,0.0f, 0.0f);
    glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(60,38.5);
    glVertex2f(68,38.5);
    glVertex2f(68,40);
    glVertex2f(60,40);
    glEnd();

    glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(61,40);
    glVertex2f(68,40);
    glVertex2f(67,41.5);
    glVertex2f(63,41.5);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(61.5,40);
    glVertex2f(67.7,40);
    glVertex2f(66.7,41.2);
    glVertex2f(63.2,41.2);
    glEnd();
    glDisable(GL_BLEND);

        glColor3f(0.1373, 0.5725,0.5529);
    glBegin(GL_QUADS);
    glVertex2f(65.5,40);
    glVertex2f(65.8,40);
    glVertex2f(65.8,41.5);
    glVertex2f(65.5,41.5);
    glEnd();


      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+62.25,y+38.5);
        }
  glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+66.2,y+38.5);
        }
  glEnd();
  glPopMatrix();


///left to right

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_movecar2,0.0f, 0.0f);
    glColor3ub(196, 30, 58);
    glBegin(GL_QUADS);
    glVertex2f(9,36);
    glVertex2f(17,36);
    glVertex2f(16.6,37.5);
    glVertex2f(9,37.5);
    glEnd();

    glColor3ub(196, 30, 58);
    glBegin(GL_QUADS);
    glVertex2f(10,37.5);
    glVertex2f(15.5,37.5);
    glVertex2f(14,38.6);
    glVertex2f(11.2,38.6);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_QUADS);
    glVertex2f(10.3,37.5);
    glVertex2f(15.1,37.5);
    glVertex2f(13.7,38.4);
    glVertex2f(11.4,38.4);
    glEnd();
    glDisable(GL_BLEND);

      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+11,y+36);
        }
  glEnd();

        glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3f(0.4, 0.4, 0.4);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+15,y+36);
        }
  glEnd();
  glPopMatrix();

   ///  road border
    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(0,33);
    glVertex2f(100,33);
    glVertex2f(100,34);
    glVertex2f(0,34);
    glEnd();
///pole lines
    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(0,35.25);
    glVertex2f(100,35.25);
    glVertex2f(100,35.5);
    glVertex2f(0,35.5);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(2,34);
    glVertex2f(2.25,34);
    glVertex2f(2.25,35.25);
    glVertex2f(2,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(7,34);
    glVertex2f(7.25,34);
    glVertex2f(7.25,35.25);
    glVertex2f(7,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(12,34);
    glVertex2f(12.25,34);
    glVertex2f(12.25,35.25);
    glVertex2f(12,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(17,34);
    glVertex2f(17.25,34);
    glVertex2f(17.25,35.25);
    glVertex2f(17,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(22,34);
    glVertex2f(22.25,34);
    glVertex2f(22.25,35.25);
    glVertex2f(22,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(27,34);
    glVertex2f(27.25,34);
    glVertex2f(27.25,35.25);
    glVertex2f(27,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(32,34);
    glVertex2f(32.25,34);
    glVertex2f(32.25,35.25);
    glVertex2f(32,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(37,34);
    glVertex2f(37.25,34);
    glVertex2f(37.25,35.25);
    glVertex2f(37,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(42,34);
    glVertex2f(42.25,34);
    glVertex2f(42.25,35.25);
    glVertex2f(42,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(47,34);
    glVertex2f(47.25,34);
    glVertex2f(47.25,35.25);
    glVertex2f(47,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(52,34);
    glVertex2f(52.25,34);
    glVertex2f(52.25,35.25);
    glVertex2f(52,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(57,34);
    glVertex2f(57.25,34);
    glVertex2f(57.25,35.25);
    glVertex2f(57,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(62,34);
    glVertex2f(62.25,34);
    glVertex2f(62.25,35.25);
    glVertex2f(62,35.25);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(67,34);
    glVertex2f(67.25,34);
    glVertex2f(67.25,35.25);
    glVertex2f(67,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(72,34);
    glVertex2f(72.25,34);
    glVertex2f(72.25,35.25);
    glVertex2f(72,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(77,34);
    glVertex2f(77.25,34);
    glVertex2f(77.25,35.25);
    glVertex2f(77,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(82,34);
    glVertex2f(82.25,34);
    glVertex2f(82.25,35.25);
    glVertex2f(82,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(87,34);
    glVertex2f(87.25,34);
    glVertex2f(87.25,35.25);
    glVertex2f(87,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(92,34);
    glVertex2f(92.25,34);
    glVertex2f(92.25,35.25);
    glVertex2f(92,35.25);
    glEnd();

        glColor3ub(100,100,100);
    glBegin(GL_QUADS);
    glVertex2f(97,34);
    glVertex2f(97.25,34);
    glVertex2f(97.25,35.25);
    glVertex2f(97,35.25);
    glEnd();





   ///river
///shade1

glColor3ub(113,218,218);
glBegin(GL_QUADS);
glVertex2f(0.0, 0.0);

glVertex2f(100, 0);

glVertex2f(100, 33);
glVertex2f(0, 33);
glEnd();

///wave
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(5,25);
    glVertex2f(19,25);
    glVertex2f(12,26);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,25);
    glVertex2f(40,25);
    glVertex2f(35,26);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(70,25);
    glVertex2f(85,25);
    glVertex2f(78,26);
    glEnd();
    glPopMatrix();

///wave2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(50,20);
    glVertex2f(60,20);
    glVertex2f(55,21);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(30.0f,20);
    glVertex2f(37.0f,20);
    glVertex2f(34,21);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(80,20);
    glVertex2f(90,20);
    glVertex2f(85,21);
    glEnd();
    glPopMatrix();

///wave3
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move8, 0.0f, 0.0f);
    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(25,30);
    glVertex2f(35,30);
    glVertex2f(30,31);
    glEnd();

    glColor3ub(243.0f,235.0f,208.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(75,30);
    glVertex2f(85,30);
    glVertex2f(80,31);
    glEnd();

///park

///park tree

///park bench

///park human (if possible)

///park food card.


    ///boat
    glColor3ub(27.0f,27.0f,60.0f);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(_move5,_moveM , 0.0f);

    glBegin(GL_POLYGON);
    glVertex2f(60,22);
    glVertex2f(62,19);
    glVertex2f(73,19);
    glVertex2f(75,22);
    glEnd();

    glColor3ub(180.0f,100.0f,30.0f);
    glBegin(GL_POLYGON);
    glVertex2f(68,22);
    glVertex2f(69,22.5);
    glVertex2f(68.5,28.25);
    glEnd();

    glColor3ub(245.0f,240.0f,180.0f);
    glBegin(GL_POLYGON);
    glVertex2f(68.5,22.25);
    glVertex2f(68.5,28.25);
    glVertex2f(75,25);

     glEnd();
    glPopMatrix();

//lower railing
    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,15);
    glVertex2f(100,15);
    glVertex2f(100,15.5);
    glVertex2f(0, 15.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,14);
    glVertex2f(100,14);
    glVertex2f(100,14.5);
    glVertex2f(0, 14.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,13);
    glVertex2f(100,13);
    glVertex2f(100,13.5);
    glVertex2f(0,13.5);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,12);
    glVertex2f(100,12);
    glVertex2f(100,12.5);
    glVertex2f(0,12.5);
    glEnd();
   //stand

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0.5,12);
    glVertex2f(1,12);
    glVertex2f(1,16);
    glVertex2f(0.5,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(10,12);
    glVertex2f(10.5,12);
    glVertex2f(10.5,16);
    glVertex2f(10,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(20,12);
    glVertex2f(20.5,12);
    glVertex2f(20.5,16);
    glVertex2f(20,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(30,12);
    glVertex2f(30.5,12);
    glVertex2f(30.5,16);
    glVertex2f(30,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(40,12);
    glVertex2f(40.5,12);
    glVertex2f(40.5,16);
    glVertex2f(40,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(50,12);
    glVertex2f(50.5,12);
    glVertex2f(50.5,16);
    glVertex2f(50,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(60,12);
    glVertex2f(60.5,12);
    glVertex2f(60.5,16);
    glVertex2f(60,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(70,12);
    glVertex2f(70.5,12);
    glVertex2f(70.5,16);
    glVertex2f(70,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(80,12);
    glVertex2f(80.5,12);
    glVertex2f(80.5,16);
    glVertex2f(80,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(90,12);
    glVertex2f(90.5,12);
    glVertex2f(90.5,16);
    glVertex2f(90,16);
    glEnd();

    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(99,12);
    glVertex2f(99.5,12);
    glVertex2f(99.5,16);
    glVertex2f(99,16);
    glEnd();
//grass

    glColor3ub(50, 205, 50);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(100, 0);
    glVertex2f(100, 12);
    glVertex2f(0, 12);
    glEnd();

//bench
    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,12);
    glVertex2f(18,12);
    glVertex2f(18,13);
    glVertex2f(5,13);
    glEnd();

    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,13);
    glVertex2f(18,13);
    glVertex2f(18,13.25);
    glVertex2f(5,13.25);
    glEnd();


    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,13.25);
    glVertex2f(18,13.25);
    glVertex2f(18,14.25);
    glVertex2f(5,14.25);
    glEnd();

    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,14.25);
    glVertex2f(18,14.25);
    glVertex2f(18,14.5);
    glVertex2f(5,14.5);
    glEnd();

    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,14.5);
    glVertex2f(18,14.5);
    glVertex2f(18,15.5);
    glVertex2f(5,15.5);
    glEnd();

   glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,15.5);
    glVertex2f(18,15.5);
    glVertex2f(18,15.75);
    glVertex2f(5,15.75);
    glEnd();

    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(5,15.75);
    glVertex2f(18,15.75);
    glVertex2f(18,16.75);
    glVertex2f(5,16.75);
    glEnd();


    glColor3ub(139,69,16);
    glBegin(GL_POLYGON);
    glVertex2f(5,12);
    glVertex2f(18,12.);
    glVertex2f(18,12.25);
    glVertex2f(5,12.25);
    glEnd();

   ///sitting
    glColor3ub(238,118,33);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,9.5);
    glVertex2f(18.5,9.5);
    glVertex2f(18,12);
    glVertex2f(5,12);
    glEnd();
    //legs
    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,9);
    glVertex2f(18.5,9);
    glVertex2f(18.5,9.5);
    glVertex2f(4.5,9.5);
    glEnd();

    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(4.5,7.25);
    glVertex2f(5,7.25);
    glVertex2f(5,9.5);
    glVertex2f(4.5,9.5);
    glEnd();

    glColor3ub(56, 56, 56);
    glBegin(GL_POLYGON);
    glVertex2f(18,7.25);
    glVertex2f(18.5,7.25);
    glVertex2f(18.5,9.5);
    glVertex2f(18,9.5);
    glEnd();

    ///food cart
   glColor3ub(139,69,19);
    glBegin(GL_POLYGON);
    glVertex2f(25,9);
    glVertex2f(45,9);
    glVertex2f(45,13);
    glVertex2f(25,13);
    glEnd();
    glColor3ub(204,102,0);
    glBegin(GL_POLYGON);
    glVertex2f(25,13);
    glVertex2f(45,13);
    glVertex2f(45,14);
    glVertex2f(25,14);
    glEnd();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.7f, 0.8f, 1.0f, 0.85f);
    glBegin(GL_POLYGON);
    glVertex2f(25,14);
    glVertex2f(45,14);
    glVertex2f(45,20);
    glVertex2f(25,20);
    glEnd();
   glDisable(GL_BLEND);
//Triangles
    glColor3ub(255,101,24);
    glBegin(GL_TRIANGLES);
    glVertex2f(25,20);
    glVertex2f(27.5,17.5);
    glVertex2f(30,20);
    glEnd();

    glColor3ub(255,255,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(30,20);
    glVertex2f(32.5,17.5);
    glVertex2f(35,20);
    glEnd();

    glColor3ub(153, 51,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(35,20);
    glVertex2f(37.5,17.5);
    glVertex2f(40,20);
    glEnd();

    glColor3ub(0,255,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(40,20);
    glVertex2f(42.5,17.5);
    glVertex2f(45,20);
    glEnd();
//Upper Boxes-----------

    glColor3ub(204,204,0);
    glBegin(GL_POLYGON);
    glVertex2f(30,20);
    glVertex2f(35,20);
    glVertex2f(35,23);
    glVertex2f(30,23);
    glEnd();

    glColor3ub(139,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(35,20);
    glVertex2f(40,20);
    glVertex2f(40,23);
    glVertex2f(35,23);
    glEnd();

    glColor3ub(0,100,0);
    glBegin(GL_POLYGON);
    glVertex2f(40,20);
    glVertex2f(45,20);
    glVertex2f(45,23);
    glVertex2f(40,23);
    glEnd();

    glColor3ub(219,73,0);
    glBegin(GL_POLYGON);
    glVertex2f(25,20);
    glVertex2f(30,20);
    glVertex2f(30,23);
    glVertex2f(25,23);
    glEnd();
///left wheel
      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(32,32,32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+9);
        }
  glEnd();

    glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(192, 192, 192);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+30,y+9);
        }
  glEnd();

  ///right wheel
      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(32, 32, 32);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=2;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+9);
        }
  glEnd();

      glBegin(GL_POLYGON);
  for(int i=0;i<200;i++)
        {
        glColor3ub(192,192,192);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=0.75;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+40,y+9);
        }
  glEnd();

}

int currentScene = 1;
int elapsedTime = 0;
const int sceneDuration = 10000;


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor4f(1,1,1,0);
       if (currentScene == 1) {
        Evening();
    } else if (currentScene == 2) {
        night();
    } else if (currentScene == 3) {
        morning();
    }
  //  glFlush();
    glutSwapBuffers();
}

void timerCallback(int value) {
    elapsedTime += sceneDuration;

    if (elapsedTime >= 3 * sceneDuration) {
        currentScene = 1;
        elapsedTime = 0;
    } else if (elapsedTime >= 2 * sceneDuration) {
        currentScene = 3;
    } else if (elapsedTime >= sceneDuration) {
        currentScene = 2;
    }

    glutPostRedisplay();
    glutTimerFunc(10000, timerCallback, 0);
}


int main(int argc, char** argv) {

    cout<<"PRESS w and s to move the boat up and down."<<endl;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800,640);
    glutCreateWindow("City View Scenery ");
    glutDisplayFunc(display);
    glutDisplayFunc(display);
    init();
    glutTimerFunc(20, update_cloud, 0);
    glutTimerFunc(20, update_sun, 0);
    glutTimerFunc(20, update_boat, 0);
    glutTimerFunc(20, update_wave, 0);
    glutTimerFunc(20,update_car,0);
   glutKeyboardFunc(Keypressboat);
   glutTimerFunc(20,update_car2,0);
   glutTimerFunc(10000,timerCallback,0);
    glutMainLoop();
    return 0;
}

