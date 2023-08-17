#ifndef __POINT
#define __POINT
#include <iostream>

// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C et le pragma once c'est nul
class Point {
   // par défaut, tout est privé dans une "class"  
   double x, y;
   static int compteur;

 public:
   Point();
   Point(double x, double y);
   double getX();
   double getY(); 
   int getCompteur();
   std::ostream& afficher(std::ostream& output);
   void deplacerDe(double x, double y);
   void deplacerVers(double x, double y);
   void setX(double x);
   void setY(double y);
};

#endif
