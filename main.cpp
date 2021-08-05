#include <iostream>
#include "fahrtenbuch.h"


const std::string MENU = "(1) Fahrt anlegen\n(2) Fahrten ausgeben\n(0) Programm beenden";

int main() {
    Fahrtenbuch fb;

    bool running = true;
    while (running) {
        std::cout << MENU << std::endl << ": ";
        int eingabe;
        std::cin >> eingabe;

        switch (eingabe) {
        case 1:{
            std::cout << std::endl;
            std::cout << "Wie heißt das Schiff, das den Transport durchführen soll? ";
            std::string name_schiff;
            std::getline(std::cin, name_schiff);
            std::cin.ignore();
            std::cout << "Wie viele Container kann das Schiff maximal transportieren? ";
            int kapa_schiff;
            std::cin >> kapa_schiff;
            Schiff s(name_schiff, kapa_schiff);
            std::cout << "Startort: ";
            std::string startOrt;
            std::getline(std::cin, startOrt);
            std::cin.ignore();
            std::cout << "Zielort: ";
            std::string zielOrt;
            std::getline(std::cin, zielOrt);
            std::cin.ignore();
            std::cout << "Abfahrtszeit: ";
            std::string abfahrt;
            std::getline(std::cin, abfahrt);
            std::cin.ignore();
            std::cout << "Ankunftszeit: ";
            std::string ankunft;
            std::getline(std::cin, ankunft);
            std::cin.ignore();
            int ladung;
            while (true) {
                std::cout << "Ladungsmenge: ";
                std::cin >> ladung;
                if (ladung <= kapa_schiff) break;
                else std::cerr << "Die Ladung passt nicht auf das Schiff!" << std::endl;
            }
            std::cout << "Frachtpreis: ";
            double frachtpreis;
            std::cin >> frachtpreis;

            Fahrt f;
            f.setAbfahrt(abfahrt);
            f.setAnkunft(ankunft);
            f.setFrachtpreis(frachtpreis);
            f.setLadung(ladung);
            f.setStartOrt(startOrt);
            f.setZielOrt(zielOrt);
            f.setSchiff(s);

            fb.fahrtAnlegen(f);

            std::cout << "Fahrt wurde angelegt." << std::endl;
            break;
        }
        case 2: fb.fahrtenAusgeben();
        break;
        case 0: running = false; break;
        default: break;
        }
    }

    return 0;
}