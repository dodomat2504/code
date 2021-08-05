#ifndef SCHIFF_H
#define SCHIFF_H

#include <iostream>


class Schiff {
private:
    const int kapazitaet;
    std::string name;
public:
    Schiff(const std::string& name, const int kapazitaet);
};

#endif