//CLservice.CPP***************************************************************************************
#include "CLservices.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}

// Personnel functions
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerLaTablePersonnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnPersonnel(int Id, System::String^ nom, System::String^ prenom, int age, System::String^ adresse, System::String^ date_embauche, int sup_hier)
{
	System::String^ sql;

	this->oMappTB->setPersonnel(Id, nom, prenom, age, adresse, date_embauche, sup_hier);
	sql = this->oMappTB->InsertPersonnel();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::modifierUnPersonnel(int Id, System::String^ nom, System::String^ prenom, int age, System::String^ adresse, System::String^ date_embauche, int sup_hier)
{
	System::String^ sql;

	this->oMappTB->setPersonnel(Id, nom, prenom, age, adresse, date_embauche, sup_hier);
	sql = this->oMappTB->UpdatePersonnel();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUnPersonnel(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeletePersonnel(id);

	this->oCad->actionRows(sql);
}

// Commande functions
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerLaTableCommande(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectCommande();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUneCommande( int id_personnel, int id_commande, System::String^ date_livraison, System::String^ date_commande, System::String^ date_payement, System::String^ date_solde, System::String^ moyen_payement, int id_client)
{
	System::String^ sql;

	this->oMappTB->setCommande( id_personnel, id_commande, date_livraison, date_commande, date_payement, moyen_payement, date_solde, id_client);
	sql = this->oMappTB->InsertCommande();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::modifierUneCommande( int id_personnel, int id_commande, System::String^ date_livraison, System::String^ date_commande, System::String^ date_payement, System::String^ date_solde, System::String^ moyen_payement, int id_client)
{
	System::String^ sql;

	this->oMappTB->setCommande( id_personnel, id_commande, date_livraison, date_commande, date_payement, moyen_payement, date_solde, id_client);
	sql = this->oMappTB->UpdateCommande();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUneCommande(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeleteCommande(id);

	this->oCad->actionRows(sql);
}

// Statistiques functions

System::Data::DataSet^ NS_Comp_Svc::CLservices::Moyenne_panier(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->MoyennePanier();
	return this->oCad->getRows(sql, dataTableName);
}