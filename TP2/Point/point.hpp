#ifndef __POINT
#define __POINT
#include <iostream>

// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C et le pragma once c'est nul
class Point {
   // par défaut, tout est privé dans une "class"  
   int x, y;
   static int compteur;

 public:
   Point();
   Point(int x, int y);
   int getX();
   int getY(); 
   int getCompteur();
   std::ostream& afficher(std::ostream& output);
   void deplacerDe();
   void deplacerVers();
   void setX(int x);
   void setY(int y);
};

#endif
