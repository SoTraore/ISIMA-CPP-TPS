#ifndef __NUAGE__
#define __NUAGE__

#include <iostream>
#include <vector>
#include "Cartesien.hpp"
#include "Polaire.hpp"

using namespace std;

class Nuage {
    vector<Point*> vect; 

public:
    Nuage();

    const int size() const;
    void ajouter(Cartesien& elt); 
    void ajouter(Polaire& elt);

    typedef vector<Point*>::const_iterator const_iterator;    

    // Iterator support
    vector<Point*>::const_iterator begin() const {
        return vect.begin();
    }

    vector<Point*>::const_iterator end() const {
        return vect.end();
    }

    // Destructor to deallocate memory.
    // ~Nuage();


};

class barycentre {
public :
    Cartesien operator()(Nuage n) {
        double x = 0.0, y = 0.0;
        int cartesienCount = 0;
        int polaireCount = 0;

        for (auto elt : n) {
            if (dynamic_cast<Cartesien*>(elt)) {
                Cartesien* c = dynamic_cast<Cartesien*>(elt);
                x += c->getX();
                y += c->getY();
                cartesienCount++;
            }
            if (dynamic_cast<Polaire*>(elt)) {
                Polaire* p = dynamic_cast<Polaire*>(elt);
                double distance = p->getDistance();
                double angle = p->getAngle();
                x += distance * cos(angle);
                y += distance * sin(angle);
                polaireCount++;
            }
        }

        if (cartesienCount + polaireCount > 0) {
            x /= (cartesienCount + polaireCount);
            y /= (cartesienCount + polaireCount);
        }

        return Cartesien(x, y);
    }
};

class BarycentreCartesien {
public:
    Cartesien operator()(Nuage n) {
        double x=0.0, y=0.0;
        int count = 0;

        for (const Point* elt : n) {
            x += elt->getX();
            y += elt->getY();
            count++;
        }

        if (count > 0) {
            return Cartesien(x/count, y/count);
        }
        return Cartesien(0.0, 0.0);
    }
} ;
    
class BarycentrePolaire {
public:
    Polaire operator()(Nuage n) {
        double distanceSum = 0.0, angleSum = 0.0;
        int polaireCount = 0;

        for (auto elt : n) {
            Polaire* polaireElement = dynamic_cast<Polaire*>(elt);
            if (polaireElement) {
                distanceSum += polaireElement->getDistance();
                angleSum += polaireElement->getAngle();
                polaireCount++;
            }
        }

        if (polaireCount > 0) {
            double avgDistance = distanceSum / polaireCount;
            double avgAngle = angleSum / polaireCount;
            return Polaire(avgDistance, avgAngle);
        } 
        return Polaire(0.0, 0.0);
    }
} ;


#endif
