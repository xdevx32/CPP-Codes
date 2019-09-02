//
// Created by aced3v on 8/29/19.
//

#ifndef CPP_EXAM_PREP_POINT_H
#define CPP_EXAM_PREP_POINT_H



class Point{
public:
    Point(int =0, int =0);
    Point(const Point&);
    ~Point();

    void set_x(int);
    void set_y(int);
    void read();

    inline int get_x() const {return x;}
    inline int get_y() const;
    void print() const;

    Point& operator++();
    Point operator++(int);
private:
    int x, y;
};


#endif //CPP_EXAM_PREP_POINT_H
