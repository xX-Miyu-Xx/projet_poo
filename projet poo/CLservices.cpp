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

void NS_Comp_Svc::CLservices::ajouterUneCommande( int id_personnel, int id_commande, System::String^ date_livraison, System::String^ date_commande, System::String^ date_payement, System::String^ date_solde, System::String^ moyen_payement, int id_client, int articles_commande)
{
	System::String^ sql;

	this->oMappTB->setCommande( id_personnel, id_commande, date_livraison, date_commande, date_payement, moyen_payement, date_solde, id_client, articles_commande);
	sql = this->oMappTB->InsertCommande();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc::CLservices::modifierUneCommande( int id_personnel, int id_commande, System::String^ date_livraison, System::String^ date_commande, System::String^ date_payement, System::String^ date_solde, System::String^ moyen_payement, int id_client, int articles_commande)
{
	System::String^ sql;

	this->oMappTB->setCommande( id_personnel, id_commande, date_livraison, date_commande, date_payement, moyen_payement, date_solde, id_client, articles_commande);
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
void NS_Comp_Svc::CLservices::ajouterUnClient(int id_client, System::String^ client_prenom, System::String^ client_nom, System::String^ adresse_client, System::String^ adresse_livraison_client, System::String^ anniversaire_client, System::String^ date_1erachat, int id_adresse)
{
	System::String^ sql;

	this->oMappTB->setClient(id_client, client_prenom, client_nom, adresse_client, adresse_livraison_client, anniversaire_client, date_1erachat, id_adresse);
	sql = this->oMappTB->InsertClient();
	System::Windows::Forms::MessageBox::Show(sql);

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnClient(int id_client, System::String^ client_prenom, System::String^ client_nom, System::String^ adresse_client, System::String^ adresse_livraison_client, System::String^ anniversaire_client, System::String^ date_1erachat, int id_adresse)
{
	System::String^ sql;

	this->oMappTB->setClient(id_client, client_prenom, client_nom, adresse_client, adresse_livraison_client, anniversaire_client, date_1erachat, id_adresse);
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

void NS_Comp_Svc::CLservices::ajouterUnArticle(int id_article , System::String^ montant_ht, System::String^ montant_tva, System::String^ reapprovisionnement_article, int cout_achat, int stock_produit, int seuil_reapprovisionnement, System::String^ couleur_article, System::String^ remise_article)
{
	System::String^ sql;

	this->oMappTB->setArticle(id_article, montant_ht, montant_tva, reapprovisionnement_article, cout_achat, stock_produit, seuil_reapprovisionnement, couleur_article, remise_article);
	sql = this->oMappTB->InsertArticle();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUnArticle(int id_article, System::String^ montant_ht, System::String^ montant_tva, System::String^ reapprovisionnement_article, int cout_achat, int stock_produit, int seuil_reapprovisionnement, System::String^ couleur_article, System::String^ remise_article)
{
	System::String^ sql;

	this->oMappTB->setArticle(id_article, montant_ht, montant_tva, reapprovisionnement_article, cout_achat, stock_produit, seuil_reapprovisionnement, couleur_article, remise_article);
	sql = this->oMappTB->UpdateArticle();
	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUnArticle(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeleteArticle(id);

	this->oCad->actionRows(sql);
}

//Adress functions
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerAdressesEtVilles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectAdressesEtVilles();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerVilles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectVilles();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUneVileEtAdresse(int id_adresse, System::String^ rue_adresse, int code_postal, int numero_adresse, int id_ville)
{
	System::String^ sql;

	this->oMappTB->setAdresse(id_adresse, rue_adresse, code_postal, numero_adresse, id_ville);
	sql = this->oMappTB->InsertAdresse();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::ajouterUneVille(int id_ville, System::String^ nom_ville)
{
	System::String^ sql;

	this->oMappTB->setVille(id_ville, nom_ville);
	sql = this->oMappTB->InsertVille();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierUneVille(int id_ville, System::String^ nom_ville)
{
	System::String^ sql;

	this->oMappTB->setVille(id_ville, nom_ville);
	sql = this->oMappTB->UpdateVille();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::modifierAdresse(int id_adresse, System::String^ rue_adresse, int code_postal, int numero_adresse, int id_ville)
{
	System::String^ sql;

	this->oMappTB->setAdresse(id_adresse, rue_adresse, code_postal, numero_adresse, id_ville);
	sql = this->oMappTB->UpdateAdresse();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUneVille(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeleteVille(id);

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::supprimerUneAdresse(int id)
{
	System::String^ sql;

	sql = this->oMappTB->DeleteAdresse(id);

	this->oCad->actionRows(sql);
}


// Statistiques functions

System::Data::DataSet^ NS_Comp_Svc::CLservices::Moyenne_panier(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->MoyennePanier();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Montant_total_client(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->MontantTotalClient();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Val_Commerciale_Stock(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->ValCommercialeStock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Val_Commerciale_Achat(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->ValCommercialeAchat();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Top_10_Articles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Top10Articles();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::Chiffre_daffaire_per_mois(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Chiffre_Daffaire_par_mois();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Valeur_Commercial_Stocks(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Valeur_Commercial_Stock();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::reapprovisionnement_produits_sous_seuil(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->reapprovisionnement_produit_sous_seuil();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Article_moins_vendus(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Article_moins_vendus();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::Simulation(System::String^ dataTableName, int TVA, int marge, int remise, int demarque)
{
	System::String^ sql;

	sql = this->oMappTB->Simulation_sql(TVA, marge, remise, demarque);
	return this->oCad->getRows(sql, dataTableName);
}