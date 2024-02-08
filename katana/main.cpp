#include <iostream>
#include <string>
#include "role.h"
#include "perso.h"
#include "playeur.h"


int main() {
    Role myRole("Nmrole", 100, 1, 5);
    Perso myPerso( "Nmperso" , 10, 1);


    // make me a playeur
    Playeur myPlayeur("Nmjoueur", "up", myRole, myPerso);
    std::cout << "Playeur Name: " << myPlayeur.getName() << std::endl;
    std::cout << "Playeur capa: " << myPlayeur.getPlayeurCapaciterSpeciale() << std::endl;
    //get honner
    std::cout << "Playeur honner: " << myPlayeur.getHonor() << std::endl;
//get pv
std::cout << "Playeur pv: " << myPlayeur.getPlayerPV() << std::endl;
//get getPlayeurCapaciterSpeciale()
    std::cout << "Playeur capa: " << myPlayeur.getPlayeurCapaciterSpeciale() << std::endl;
    return 0;
}