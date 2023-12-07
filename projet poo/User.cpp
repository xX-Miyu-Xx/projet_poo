#include "User.h"

// Constructeur
Utilisateur::Utilisateur(String^ nom, int id, String^ prenom, String^ typeUtilisateur)
    : nom(nom), id(id), prenom(prenom), typeUtilisateur(typeUtilisateur) {}

// Méthodes pour accéder aux membres privés
String^ Utilisateur::getNom() {
    return nom;
}

int Utilisateur::getID() {
    return id;
}

String^ Utilisateur::getPrenom() {
    return prenom;
}

String^ Utilisateur::getTypeUtilisateur() {
    return typeUtilisateur;
}