#ifndef OBJECTS_H_INCLUDED
#define OBJECTS_H_INCLUDED
class Part{
public:
    float x,y,w,h;
public:
    Part (float x_position,float y_position,float width,float height): x(x_position), y(y_position), w(width),h(height){}

    void draw(float r, float g, float b);
};

class Wall : public Part{
public:
    Wall(float x_position,float y_position,float width,float height): Part ( x_position, y_position, width, height){}

   void Draw(float r,float g,float b);
};

class Ball : public Part{
    private:
    int state_x,state_y;
    float xspeed,yspeed,a,b;
public:
    Ball(float x_position,float y_position,float width,float height,float a,float b);
    void update(void);
    void edge();
    void collision_detect(Part a,int i);
    void reset(void);
};
#endif // OBJECTS_H_INCLUDED
