#include <cmath>
#include <gl\gl.h>
#include <gl\glu.h>
#include <GL/freeglut.h>
#include <cmath>
#include "Objects.h"

void Part::draw(float r, float g, float b)
    {
        glBegin(GL_POLYGON);
        glColor4f(r,g,b,1.0);
        glVertex2f(x,y);
        glVertex2f(x,y-h);
        glVertex2f(x+w,y-h);
        glVertex2f(x+w,y);
        glEnd();
    }

void Wall::Draw(float r,float g,float b)
    {   for(int i=0;i<34;i++)
        {
            draw(r,g,b);
            y-=1.75;
        }
   }

Ball::Ball(float x_position,float y_position,float width,float height,float a, float b): Part ( x_position, y_position, width, height),a(a),b(b){xspeed=a*cos(45);yspeed=b*cos(45);}
void Ball::update(void)
    {
        x=x+xspeed;
        y=y+yspeed;
    }

    void Ball::edge(void)
    {
        if((y)>30 || (y)<-30)
            yspeed*=-1;
    }
    void Ball::collision_detect(Part a,int i)
    {
        if(i)
            {if(x+xspeed>a.x && y<=a.y && y>(a.y-a.h) )
                {xspeed*=-1;}
            }

        else
            {if(x<(a.x+a.w) && y<=a.y && y>(a.y-a.h) )
                {xspeed*=-1;}}
    }
    void Ball::reset(void)
    {
        x=0.0;
        y=0.0;
        xspeed=a*cos(2);
        yspeed=b*cos(2);
    }
