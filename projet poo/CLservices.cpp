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

// Client functions
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerLaTableClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectClient();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::ajouterUnClient(int id_client, System::String^ client_prenom, System::String^ client_nom, System::String^ adresse_client, System::String^ adresse_livraison_client, System::String^ anniversaire_client, int id_ville, System::String^ date_1erachat)
{
	System::String^ sql;

	this->oMappTB->setClient(id_client, client_prenom, client_nom, adresse_client, adresse_livraison_client, anniversaire_client, id_ville, date_1erachat);
	sql = this->oMappTB->InsertClient();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnClient(int id_client, System::String^ client_prenom, System::String^ client_nom, System::String^ adresse_client, System::String^ adresse_livraison_client, System::String^ anniversaire_client, int id_ville, System::String^ date_1erachat)
{
	System::String^ sql;

	this->oMappTB->setClient(id_client, client_prenom, client_nom, adresse_client, adresse_livraison_client, anniversaire_client, id_ville, date_1erachat);
	sql = this->oMappTB->UpdateClient();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::supprimerUnClient(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeleteClient(id);

	this->oCad->actionRows(sql);
}

// Produit functions
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerLaTableArticles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectArticle();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnArticle(int id_article , System::String^ montant_ht, System::String^ montant_tva, System::String^ reapprovisionnement_article, int stock_produit, System::String^ couleur_article, System::String^ remise_article)
{
	System::String^ sql;

	this->oMappTB->setArticle(id_article, montant_ht, montant_tva, reapprovisionnement_article, stock_produit, couleur_article, remise_article);
	sql = this->oMappTB->InsertArticle();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnArticle(int id_article, System::String^ montant_ht, System::String^ montant_tva, System::String^ reapprovisionnement_article, int stock_produit, System::String^ couleur_article, System::String^ remise_article)
{
	System::String^ sql;

	this->oMappTB->setArticle(id_article, montant_ht, montant_tva, reapprovisionnement_article, stock_produit, couleur_article, remise_article);
	sql = this->oMappTB->UpdateArticle();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnArticle(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeleteArticle(id);

	this->oCad->actionRows(sql);
}