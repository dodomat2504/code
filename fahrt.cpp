#include "fahrt.h"


Fahrt::Fahrt() {}

std::string Fahrt::getStartOrt() const {
    return startOrt;
}

std::string Fahrt::getZielOrt() const {
return zielOrt;
}

std::string Fahrt::getAbfahrt() const {
return abfahrt;
}

std::string Fahrt::getAnkunft() const {
return ankunft;
}

int Fahrt::getLadung() const {
return ladung;
}

double Fahrt::getFrachtpreis() const {
return frachtpreis;
}

Schiff& Fahrt::getSchiff() const {
return schiff;
}


void Fahrt::setStartOrt(const std::string& startOrt) {
    this->startOrt = startOrt;
}

void Fahrt::setZielOrt(const std::string& zielOrt) {
    this->zielOrt = zielOrt;
}

void Fahrt::setAbfahrt(const std::string& abfahrt) {
    this->abfahrt = abfahrt;
}

void Fahrt::setAnkunft(const std::string& ankunft) {
    this->ankunft = ankunft;
}

void Fahrt::setLadung(const int ladung) {
    this->ladung = ladung;
}

void Fahrt::setFrachtpreis(const double frachtpreis) {
    this->frachtpreis = frachtpreis;
}

void Fahrt::setSchiff(const Schiff& s) {
    this->schiff = s;
}
