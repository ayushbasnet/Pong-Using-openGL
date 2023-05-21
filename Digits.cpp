#include <gl\gl.h>
#include <gl\glu.h>
#include<GL/freeglut.h>
#include "Digits.h"
void Digits::draw(void)
    {
        glBegin(GL_QUADS);
                        glColor3f(1.0,1.0,1.0);
                        glVertex2f(x,y);
                        glVertex2f(x-w,y);
                        glVertex2f(x-w,y-h);
                        glVertex2f(x,y-h);
        glEnd();
        glLoadIdentity();
    }

void Digits::draw_one(void)
    {
                draw();
                glTranslatef(0,-h,0.0);
                draw();
    }

void Digits::draw_two(void)
    {
                draw();

                glTranslatef(-(h*0.675),-h,0.0);
                draw();

                glTranslatef(x,y,0.0);
                glRotatef(-90,0.0,0.0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0.0,0.0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0.0,0.0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();
    }

void Digits::draw_three(void)
    {
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(x,y,0.0);
                glRotatef(-90,0.0,0.0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0.0,0.0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0.0,0.0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();
    }

void Digits::draw_four(void)
    {
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(-(h*0.725),0,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

    }

void Digits::draw_five(void)
    {
                glTranslatef(x,y,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(-(h*0.675),0,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();
    }
void Digits::draw_six(void)
    {
                glTranslatef(x,y,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(-(h*0.675),0,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(-(h*0.675),-h,0.0);
                draw();
    }

void Digits::draw_seven(void)
    {
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(x,y,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

    }

void Digits::draw_eight(void)
    {
                draw();

                glTranslatef(x,y,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(-(h*0.675),0,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(-(h*0.675),-h,0.0);
                draw();

    }

void Digits::draw_nine(void)
    {
                draw();

                glTranslatef(x,y,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(-(h*0.675),0,0.0);
                draw();

                glTranslatef(x,y-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

    }
void Digits::draw_zero(void)
    {
                draw();

                glTranslatef(x,y,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(0,-h,0.0);
                draw();

                glTranslatef(-(h*0.675),0,0.0);
                draw();

                glTranslatef(x,y-h-h,0.0);
                glRotatef(-90,0,0,1.0);
                glTranslatef(-x,-y,0.0);
                draw();

                glTranslatef(-(h*0.675),-h,0.0);
                draw();

    }
