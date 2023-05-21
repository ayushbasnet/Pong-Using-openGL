#ifndef DIGITS_H_INCLUDED
#define DIGITS_H_INCLUDED

class Digits
{
    private:
    float x, y, w, h;

    public:
    Digits(float x_pos, float y_pos): x(x_pos), y(y_pos), w(1.0), h(3.0){}
    void draw(void);
    void draw_one(void);
    void draw_two(void);
    void draw_three(void);
    void draw_four(void);
    void draw_five(void);
    void draw_six(void);
    void draw_seven(void);
    void draw_eight(void);
    void draw_nine(void);
    void draw_zero(void);

};

#endif // DIGITS_H_INCLUDED
