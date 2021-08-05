#include "fahrtenbuch.h"


Fahrtenbuch::Fahrtenbuch() {}

bool Fahrtenbuch::fahrtAnlegen(const Fahrt& f) {
    this->fahrten.push_back(f);
}

void Fahrtenbuch::fahrtenAusgeben() const {
    for (int i = 0; i < this->fahrten.size(); i++) {
        const Fahrt f = fahrten[i];
        std::cout << "Von '" << f.getStartOrt() << "' am " << f.getAbfahrt() << " nach '" << f.getZielOrt() << "' am " << f.getAnkunft() << std::endl;
    }
}
