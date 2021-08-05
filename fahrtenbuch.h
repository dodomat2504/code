#ifndef FAHRTENBUCH_H
#define FAHRTENBUCH_H

#include <iostream>
#include <vector>
#include "fahrt.h"


class Fahrtenbuch {
private:
    std::vector<Fahrt> fahrten;
public:
    Fahrtenbuch();

    bool fahrtAnlegen(const Fahrt& f);
    void fahrtenAusgeben() const;
};

#endif