#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED

class Cube{
private:
    int length;
    int width;
    int height;
    int volume;
public:
    Cube();
    void cal_v();
    int get_volume();
};

#endif // CUBE_H_INCLUDED
