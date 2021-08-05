#ifndef FAHRT_H
#define FAHRT_H

#include <iostream>
#include "schiff.h"


class Fahrt {
private:
    std::string startOrt;
    std::string zielOrt;
    std::string abfahrt; // Format: JJJJ_MM_T
    std::string ankunft;
    int ladung;
    double frachtpreis;
    Schiff schiff;
public:
    Fahrt();

    std::string getStartOrt() const;
    std::string getZielOrt() const;
    std::string getAbfahrt() const;
    std::string getAnkunft() const;
    int getLadung() const;
    double getFrachtpreis() const;
    Schiff& getSchiff() const;

    void setStartOrt(const std::string& startOrt);
    void setZielOrt(const std::string& zielOrt);
    void setAbfahrt(const std::string& abfahrt);
    void setAnkunft(const std::string& ankunft);
    void setLadung(const int ladung);
    void setFrachtpreis(const double frachtpreis);
    void setSchiff(const Schiff& s);
};

#endif