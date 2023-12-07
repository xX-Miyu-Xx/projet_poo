//CLmap.CPP*****************************************************************************************
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::SelectPersonnel(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Personnel]";
}
System::String^ NS_Comp_Mappage::CLmapTB::InsertPersonnel(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Personnel] VALUES("+this->id_personnel+", '" + this->nom_personnel + "', '" + this->prenom_personnel + "', " + this->age_personnel + ", '" + this->adresse_personnel + "', '" + this->date_embauche_personnel + "', " + this->sup_hierarchique_personnel + "); ";
}
System::String^ NS_Comp_Mappage::CLmapTB::DeletePersonnel(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Personnel] WHERE id_personnel = " + id + ";";
}
System::String^ NS_Comp_Mappage::CLmapTB::UpdatePersonnel(void)
{
	return "UPDATE [Projet_POO].[dbo].[Personnel] SET nom_personnel = '" + this->nom_personnel + "', prenom_personnel = '" + this->prenom_personnel + "', age_personnel = " + this->age_personnel + ", adresse_personnel = '" + this->adresse_personnel + "', date_embauche = '" + this->date_embauche_personnel + "', id_supperieur = " + this->sup_hierarchique_personnel + " WHERE id_personnel = " + this->id_personnel + ";";
}
void NS_Comp_Mappage::CLmapTB::setPersonnel(int Id, System::String^ nom, System::String^ prenom, int age, System::String^ adresse, System::String^ date_embauche, int sup_hier)
{
	this->id_personnel = Id;
	this->nom_personnel = nom;
	this->prenom_personnel = prenom;
	this->age_personnel = age;
	this->adresse_personnel = adresse;
	this->date_embauche_personnel = date_embauche;
	this->sup_hierarchique_personnel = sup_hier;
}


// Client functions
System::String^ NS_Comp_Mappage::CLmapTB::SelectClient(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Client]";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertClient(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Client] VALUES(1, '" + this->client_prenom + "', '" + this->client_nom + "', '" + this->adresse_client + "', '" + this->adresse_livraison_client + "', '1990-01-01', 1);";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteClient(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Client] WHERE id_client = " + id + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateClient(void)
{
	return "UPDATE [Projet_POO].[dbo].[Client] SET client_prenom = '" + this->client_prenom + "', client_nom = '" + this->client_nom + "', adresse_client = '" + this->adresse_client + "', adresse_livraison_client = '" + this->adresse_livraison_client + "', anniversaire_client = '1990-01-01', id_ville_1 = 1 WHERE id_client = " + this->id_client + ";";
}

void NS_Comp_Mappage::CLmapTB::setClient(int id_client, System::String^ client_prénom, System::String^ client_nom, System::String^ adresse_client, System::String^ adresse_livraison_client)
{
	this->id_client = id_client;
	this->client_prenom = client_prénom;
	this->client_nom = client_nom;
	this->adresse_client = adresse_client;
	this->adresse_livraison_client = adresse_livraison_client;
}







// Commande functions
System::String^ NS_Comp_Mappage::CLmapTB::SelectCommande(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Commande]";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertCommande(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Commande] VALUES ("+this->id_personnel+"," + this->id_commande +",'" + this->date_livraison + "','" + this->date_commande + "','" + this->date_payement + "','" + this->moyen_payement + "','" + this->date_solde + "'," + this->id_client + ");";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteCommande(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Commande] WHERE id_commande = " + id + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateCommande(void)
{
	return "UPDATE [Projet_POO].[dbo].[Commande] SET id_personnel = " + this->id_personnel + ", date_livraison = '" + this->date_livraison + "', date_commande = '" + this->date_commande + "', date_payement = '" + this->date_payement + "', moyen_payement = '" + this->moyen_payement + "', date_solde = '" + this->date_solde + "', id_client = '" + this->id_client + "' WHERE id_commande = " + this->id_commande + ";";
}

void NS_Comp_Mappage::CLmapTB::setCommande( int id_personnel, int id_commande, System::String^ date_livraison, System::String^ date_commande, System::String^ date_payement, System::String^ moyen_payement, System::String^ date_solde, int id_client)
{
	this->id_personnel = id_personnel;
	this->id_commande = id_commande;
	this->date_livraison = date_livraison;
	this->date_commande = date_commande;
	this->date_payement = date_payement;
	this->moyen_payement = moyen_payement;
	this->date_solde = date_solde;
	this->id_client = id_client;
}












// Stock functions
System::String^ NS_Comp_Mappage::CLmapTB::SelectStock(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Stock]";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertStock(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Stock] VALUES(1, 'Produit 1', 100, 'Réappro 1', 50, '2023-01-01');";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteStock(void)
{
	return "DELETE FROM [Projet_POO].[dbo].[Stock] WHERE id_stock = " + this->id_stock + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateStock(void)
{
	return "UPDATE [Projet_POO].[dbo].[Stock] SET produit_nom = 'Produit 2', stock_produit = 120, réapprovisionnement_produit = 'Réappro 2', Montant_TTC = 60.00, date_ajout = '2023-02-01' WHERE id_stock = " + this->id_stock + ";";
}

void NS_Comp_Mappage::CLmapTB::setStock(int id_stock, System::String^ produit_nom, int stock_produit, System::String^ reapprovisionnement_produit, int Montant_TTC, System::String^ date_ajout)
{
	this->id_stock = id_stock;
	this->produit_nom = produit_nom;
	this->stock_produit = stock_produit;
	this->reapprovisionnement_produit = reapprovisionnement_produit;
	this->Montant_TTC = Montant_TTC;
	this->date_ajout = date_ajout;
}

















// Stats functions
System::String^ NS_Comp_Mappage::CLmapTB::MoyennePanier(void)
{
	return "SELECT AVG(SUM((a.montant_HT + a.Montant_TVA) * (1 - CASE WHEN a.remise_article LIKE '%%' THEN CAST(REPLACE(a.remise_article, '%', '') AS DECIMAL) / 100 ELSE 0 END))) AS panier_moyen FROM Commande c JOIN commande_article ca ON c.id_commande = ca.id_commande JOIN Articles a ON ca.id_article = a.id_article GROUP BY c.id_commande;";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertStats(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Stats] VALUES(1, 201, 10, 5, 3);";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteStats(void)
{
	return "DELETE FROM [Projet_POO].[dbo].[Stats] WHERE id_stat = " + this->id_stat + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateStats(void)
{
	return "UPDATE [Projet_POO].[dbo].[Stats] SET id_article = 2, id_personnel = 202, commandes_totales = 15, commandes_reussies = 8, commandes_echouees = 4 WHERE id_stat = " + this->id_stat + ";";
}

void NS_Comp_Mappage::CLmapTB::setStats(int id_stat, int id_article, int id_personnel, int commandes_totales, int commandes_reussies, int commandes_echouees)
{
	this->id_stat = id_stat;
	this->id_article = id_article;
	this->id_personnel = id_personnel;
	this->commandes_totales = commandes_totales;
	this->commandes_reussies = commandes_reussies;
	this->commandes_echouees = commandes_echouees;
}
