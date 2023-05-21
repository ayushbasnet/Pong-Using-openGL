#include <windows.h>                              // Header File For Windows
#include <gl\gl.h>                                // Header File For The OpenGL32 Library
#include <gl\glu.h>
#include<GL\freeglut.h>
#include<iostream>
#include <string>
#include "Digits.h"
#include "Objects.h"
using namespace std;
int state_w=1,score1=8,score2=9;
float width=30.0,height=30.0;
Ball ball(0.0,0.0,0.25,0.5,0.2,1);
Part Play_One(-29.5,21.0,0.5,3.0), Play_Two(29.0,21.0,0.5,3.0);
Digits Pl_One(-15.0,25.0),Pl_Two(15.0,25.0);

void display();
void reshape(int , int );
void timer(int);
void keyboard(unsigned char key, int x, int y);
void check(int score,Digits d);

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );


    glutInitWindowPosition(200,100);
    glutInitWindowSize(900,700);
    cout<<"\t\t\t\tWELCOME TO PONG!"<<endl;
    glutCreateWindow("Practice Window");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);

    glutMainLoop();

    //return EXIT_SUCCESS;
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    Wall Wall(-0.5,29.7,0.25,1.0);
    Play_One.draw(1.0,1.0,0.0);
    Play_Two.draw(0.0,0.0,1.0);
    Wall.Draw(1.0,1.0,1.0);
    ball.draw(1.0,1.0,1.0);
    check(score1,Pl_One);
    check(score2,Pl_Two);

    glutSwapBuffers();
    glutKeyboardFunc(keyboard);
}
void reshape (int w, int h)
{   //specifying viewport
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();//Resets the current matrix ie resets all the parameters of the proj matrix
    gluOrtho2D(-width,width,-height,height);
    glMatrixMode(GL_MODELVIEW);
}
void timer (int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    ball.edge();
    ball.update();
    ball.collision_detect(Play_One,0);
    ball.collision_detect(Play_Two,1);
    if(ball.x+ball.w<-width)
    {
        score1++;
        if(score1>=10)
            score1=10-score1;

        ball.reset();
    }
    else if(ball.x>width)
    {
        score2++;
        if(score2>=10)
            score2=10-score2;

        ball.reset();
    }
}

void keyboard(unsigned char key, int x, int y)
{
    if(((Play_One.y+0.5)<=height) && key == 'w')
    {
            Play_One.y+=1.0;
    }
    if(((Play_One.y-Play_One.h-0.5) >=-height)  &&  key=='s')
    {
            Play_One.y-=1.0;
    }
    if(((Play_Two.y+0.5)<=height) && (key == 'i'))
    {
            Play_Two.y+=1.0;
    }
    if(((Play_Two.y-Play_Two.h-0.5) >=-height) && key=='k')
    {
            Play_Two.y-=1.0;
    }

}
void check(int score,Digits d)
    {
        switch(score)
        {
            case 0:
                d.draw_zero();
            case 1:
                d.draw_one();
                break;
            case 2:
                d.draw_two();
                break;
            case 3:
                d.draw_three();
                break;
            case 4:
                d.draw_four();
                break;
            case 5:
                d.draw_five();
                break;
            case 6:
                d.draw_six();
                break;
            case 7:
                d.draw_seven();
                break;
            case 8:
                d.draw_eight();
                break;
            case 9:
                d.draw_nine();
                break;
        }
}
