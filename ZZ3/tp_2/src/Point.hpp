#ifndef __POINT__
#define __POINT__

#include <iostream>
#include <sstream>

using namespace std;

class Cartesien;
class Polaire;

class Point {

double x, y;

public:
    Point() ;
    Point(double x, double y);

    // virtual ~Point();

    void setX(double x);
    void setY(double y);

    double getX() const;
    double getY() const;

    virtual void afficher(ostream& out) const =0 ;

    virtual void convertir(Polaire& p) const =0 ;
    virtual void convertir(Cartesien& p) const =0 ;

    friend ostream& operator<<(ostream& out, const Point& p)  {
        p.afficher(out);
        return out;
    }
} ;



#endif