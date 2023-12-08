#pragma once

using namespace System;

public ref class Utilisateur {
private:
    String^ nom;
    int id;
    String^ prenom;
    String^ typeUtilisateur;

public:
    // Constructeur
    Utilisateur(String^ nom, int id, String^ prenom, String^ typeUtilisateur);

    // Méthodes pour accéder aux membres privés
    String^ getNom();

    int getID();

    String^ getPrenom();

    String^ getTypeUtilisateur();
};