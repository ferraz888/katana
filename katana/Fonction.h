#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <string>
#include <windows.h>
#include "initgame.h"
#include "Jeu.h"
#include "Playeur.h"

std::string Entre();
int EntreNombre();
int Menu();
void Titre();
void Victoire();
int nbPlayers();
void InitialisationJoueur();