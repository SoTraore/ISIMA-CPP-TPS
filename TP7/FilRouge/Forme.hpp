#ifndef __FORME_HPP__
#define __FORME_HPP__

#include "Point.hpp"

enum class COULEURS {
  BLEU,NOIR,ORANGE,
  VERT,BLANC,ROUGE,
  JAUNE
};

class Forme {
  private:
    Point p;
    int w, h;
    COULEURS c;
    static int id;
  public:
    Forme();
    Forme(Point p, int w, int h);
    Forme(Point p, COULEURS c);
    Forme(Forme* f);
    Point getPoint();
    void setPoint(Point p);
    int getX();
    int getY();
    int getId();
    int getLargeur();
    int getHauteur();
    virtual Forme* clone() const = 0;
    void setLargeur(int x);
    void setHauteur(int y);
    void setX(int x);
    void setY(int y);
    COULEURS getCouleur();
    void setCouleur(COULEURS c);
    static int prochainId();
    string toString();
};

#endif
