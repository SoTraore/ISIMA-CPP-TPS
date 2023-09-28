#ifndef __SMS
#define __SMS

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>


using namespace std;

class MauvaisNumero : public exception {
public:
    MauvaisNumero() {}
    const char* what() const noexcept override {
        return "mauvais numero";
    }
};

class Message {
protected:
    string expediteur;
    string destinateur;
    string date;
    int Id = 0;
    static int cle;

public :
    Message(string exp, string dest, string date);
    virtual string afficher() const = 0;
    int getId() const;
    static int getCle();

};

class SMS : public Message {
protected:
    string contenu_text;
public:
    SMS(string exp, string dest, string date);
    string afficher() const;

    string getTexte() const;
    void setTexte(string texte);
    int getId() const;
    static int getCle() ;

} ;

class Reseau;

class Telephone {
private:
    string numero;
    vector<Message*> messages;
public:
    Telephone();
    Telephone(string numero);

    Reseau* getReseau() const;
    string getNumero() const;
    void setNumero(string numero) ;
    void textoter(string numero, string message);
    int getNbMessages() const;

    friend bool operator<(const Telephone& a, const Telephone& b) {
        return a.numero < b.numero;
    }

    friend bool operator==(const Telephone& a, const Telephone& b) {
        return (a.numero == b.numero);
    }

} ;

class Reseau {
private:
    vector<Telephone> tels;
public:
    Reseau();
    Reseau(string tel);

    void ajouter(string numero);
    Telephone& trouveTel(string numero) const;

    string lister() const;

};

class Media : public SMS {
public:
    Media();
    string afficher() const;
};

class Video : public Media {
public:
    Video();
    string afficher() const override;
};

class Son : public Media {
public:
    Son();
    string afficher() const override;
};

class Image : public Media {
public:
    Image();
    string afficher() const override;
};

class MMS : public SMS {
private:
    string texte; 
public:
    MMS(string exp, string dest, string date);
    void setTexte(string texte);
    void joindre(Media* msg);
    string afficher() const override;

    MMS& operator=(const MMS& m) {
        if (this != &m) {
            *this = m;
            // this->setTexte(m.contenu_text);
        }
        return *this;
    }
};

#endif