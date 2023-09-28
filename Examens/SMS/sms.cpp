#include "sms.hpp"

Telephone::Telephone()
: numero("") {}

Telephone::Telephone(string numero)
: numero(numero) {}

Reseau* Telephone::getReseau() const{
    return (Reseau*)this;
}

void Telephone::setNumero(string numero) {
    this->numero = numero;
}

string Telephone::getNumero() const {
    return this->numero;
}

void Telephone::textoter(string numero, string message) {
    messages.push_back(new SMS(this->numero, numero, message));
}

int Telephone::getNbMessages() const {
    return (int)(messages.size());
}

//---------------------RESEAU-------------------------

Reseau::Reseau() {
    tels.push_back(Telephone(""));
}

Reseau::Reseau(string tel) {
    tels.push_back(Telephone(tel));
}

Telephone& Reseau::trouveTel(string numero) const {
    auto result = find(tels.begin(), tels.end(), Telephone(numero));

    if (result != tels.end()) {
        return (Telephone&)(result[0]);
    }
    if (numero.length() != 10) {
        throw invalid_argument("");
    }
    throw MauvaisNumero();
}

void Reseau::ajouter(string numero) {
    tels.push_back(numero);
    sort(tels.begin(), tels.end());
}

string Reseau::lister() const {
    string result = "";
    for (int i=1; i<(int)(tels.size()); i++) {
        result += tels[i].getNumero() + "\n";
    }
    return result;
}

//-------------------------MESSAGE-------------------
int Message::cle = 0;

Message::Message(string exp, string dest, string date)
: expediteur(exp), destinateur(dest), date(date) {
    Id += 1;
    cle += Id;
}

int Message::getId() const {
    return Id;
}

int Message::getCle() {
    return cle;
}

//------------------------SMS-----------------------

SMS::SMS(string exp, string dest, string date)
: Message(exp, dest, date) {}

string SMS::getTexte() const {
    return contenu_text;
}

void SMS::setTexte(string texte) {
    contenu_text = texte;
}

string SMS::afficher() const {
    return contenu_text;
}

int SMS::getId() const {
    return Message::getId()+1;
}

int SMS::getCle()  {
    return Message::getCle();
}

//-----------------------MEDIA----------------------

Media::Media() : SMS("", "", "") {}

string Media::afficher() const {
    string result = "";
    return result;
}

//-----------------------VIDEO----------------------

Video::Video() : Media() {}

string Video::afficher() const {
    string result = "[[video]]";
    return result;
}

//--------------------------SON---------------------

Son::Son() : Media() {}

string Son::afficher() const {
    string result = "[[son]]";
    return result;
}

//--------------------------IMAGE-------------------

Image::Image() : Media() {}

string Image::afficher() const {
    string result = "[[image]]";
    return result;
}

//-------------------------MMS-----------------------

MMS::MMS(string exp, string dest, string date)
: SMS(exp, dest, date), texte("") {}

void MMS::setTexte(string texte) {
    this->texte = texte + this->texte;
}

void MMS::joindre(Media* msg) {
    this->texte += msg->afficher();
}

string MMS::afficher() const {
    return this->texte;
}

//---------------------------------------------------