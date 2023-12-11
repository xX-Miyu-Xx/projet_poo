//CLmap.CPP*****************************************************************************************
#include <iostream>
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::SelectPersonnel(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Personnel]";
}
System::String^ NS_Comp_Mappage::CLmapTB::InsertPersonnel(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Personnel] VALUES("+this->id_personnel+", '" + this->prenom_personnel + "', '" + this->nom_personnel + "', " + this->age_personnel + ", '" + this->adresse_personnel + "', '" + this->date_embauche_personnel + "', " + this->sup_hierarchique_personnel + "); ";
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
	return "INSERT INTO [Projet_POO].[dbo].[Client] VALUES(" + this->id_client + ", '" + this->client_prenom + "', '" + this->client_nom + "', '" + this->adresse_client + "', '" + this->adresse_livraison_client + "', '"+this->anniversaire_client+"' , '"+this->date_1erachat+"', "+this->id_adresse+");";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteClient(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Client] WHERE id_client = " + id + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateClient(void)
{
	return "UPDATE [Projet_POO].[dbo].[Client] SET client_prenom = '" + this->client_prenom + "', client_nom = '" + this->client_nom + "', adresse_client = '" + this->adresse_client + "', adresse_livraison_client = '" + this->adresse_livraison_client + "', anniversaire_client = '" + this->anniversaire_client + "', date_1erachat = '" + this->date_1erachat + "', id_adresse = "+this->id_adresse+" WHERE id_client = " + this->id_client + ";";
}

void NS_Comp_Mappage::CLmapTB::setClient(int id_client, System::String^ client_prenom, System::String^ client_nom, System::String^ adresse_client, System::String^ adresse_livraison_client, System::String^ anniversaire_client, System::String^ date_1erachat, int id_adresse)
{
	this->id_client = id_client;
	this->client_prenom = client_prenom;
	this->client_nom = client_nom;
	this->adresse_client = adresse_client;
	this->adresse_livraison_client = adresse_livraison_client;
	this->anniversaire_client = anniversaire_client;
	this->date_1erachat = date_1erachat;
	this->id_adresse = id_adresse;
}













// Commande functions
System::String^ NS_Comp_Mappage::CLmapTB::SelectCommande(void)
{
	return "SELECT Commande.*, commande_article.id_article AS article_info FROM[Projet_POO].[dbo].[Commande] JOIN [Projet_POO].[dbo].[commande_article] ON Commande.id_commande = commande_article.id_commande; ";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertCommande(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Commande] VALUES ("+this->id_commande+"," + this->id_personnel +",'" + this->date_livraison + "','" + this->date_commande + "','" + this->date_payement + "','" + this->moyen_payement + "','" + this->date_solde + "'," + this->id_client + "); INSERT INTO [Projet_POO].[dbo].[commande_article] VALUES ("+this->id_commande+","+this->articles_commande+");";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteCommande(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Commande] WHERE id_commande = " + id + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateCommande(void)
{
	return "UPDATE [Projet_POO].[dbo].[Commande] SET id_personnel = " + this->id_personnel + ", date_livraison = '" + this->date_livraison + "', date_commande = '" + this->date_commande + "', date_payement = '" + this->date_payement + "', moyen_payement = '" + this->moyen_payement + "', date_solde = '" + this->date_solde + "', id_client = '" + this->id_client + "' WHERE id_commande = " + this->id_commande + "; UPDATE [Projet_POO].[dbo].[commande_article] SET id_article = "+this->articles_commande +" WHERE id_commande = "+this->id_commande+";";
}

void NS_Comp_Mappage::CLmapTB::setCommande( int id_personnel, int id_commande, System::String^ date_livraison, System::String^ date_commande, System::String^ date_payement, System::String^ moyen_payement, System::String^ date_solde, int id_client, int articles_commande)
{
	this->id_personnel = id_personnel;
	this->id_commande = id_commande;
	this->date_livraison = date_livraison;
	this->date_commande = date_commande;
	this->date_payement = date_payement;
	this->moyen_payement = moyen_payement;
	this->date_solde = date_solde;
	this->id_client = id_client;
	this->articles_commande = articles_commande;
}





//Adress functions
System::String^ NS_Comp_Mappage::CLmapTB::SelectAdressesEtVilles(void)
{
	return "SELECT Adresse.*, Villes.nom_ville FROM [Projet_POO].[dbo].[Adresse] JOIN [Projet_POO].[dbo].[Villes] ON Adresse.id_ville = Villes.id_ville;";
}

System::String^ NS_Comp_Mappage::CLmapTB::SelectVilles(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Villes];";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertAdresse(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Adresse] VALUES ("+this->id_adresse+", '"+this->rue_adress+"', "+this->code_postal+", "+this->numero_adresse+", "+this->id_ville+");";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertVille(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Villes] VALUES ("+this->id_ville+", '"+this->nom_ville+"');";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateAdresse(void)
{
	return "UPDATE [Projet_POO].[dbo].[Adresse] SET rue_adresse = '"+this->rue_adress+"', code_postal = "+this->code_postal+", numero_adresse = "+this->numero_adresse+", id_ville = "+this->id_ville+" WHERE id_adresse = "+this->id_adresse+";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateVille(void)
{
	return "UPDATE [Projet_POO].[dbo].[Villes] SET nom_ville = '"+this->nom_ville+"' WHERE id_ville = "+this->id_ville+";";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteAdresse(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Adresse] WHERE id_adresse = " + id + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteVille(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Villes] WHERE id_ville = " + id + ";";
}


void NS_Comp_Mappage::CLmapTB::setAdresse(int id_adresse, System::String^ rue_adress, int code_postal, int numero_adresse, int id_ville)
{
	this->id_adresse = id_adresse;
	this->rue_adress = rue_adress;
	this->code_postal = code_postal;
	this->numero_adresse = numero_adresse;
	this->id_ville = id_ville;
}

void NS_Comp_Mappage::CLmapTB::setVille(int id_ville, System::String^ nom_ville)
{
	this->id_ville = id_ville;
	this->nom_ville = nom_ville;
}







// Stats functions
System::String^ NS_Comp_Mappage::CLmapTB::MoyennePanier(void)
{
	return "SELECT AVG(panier_moyen) AS panier_moyen_avg FROM (SELECT SUM((a.montant_HT + a.Montant_TVA) * (1 - CASE WHEN a.remise_article LIKE '%%' THEN CAST(REPLACE(a.remise_article, '%', '') AS DECIMAL) / 100 ELSE 0 END)) AS panier_moyen FROM [Projet_POO].[dbo].[Commande] c JOIN [Projet_POO].[dbo].[commande_article] ca ON c.id_commande = ca.id_commande JOIN [Projet_POO].[dbo].[Articles] a ON ca.id_article = a.id_article GROUP BY c.id_commande) AS subquery;"; 
}

System::String^ NS_Comp_Mappage::CLmapTB::MontantTotalClient(void)
{
	return "SELECT C.id_client, C.client_prenom, C.client_nom, SUM(A.montant_HT + A.Montant_TVA) AS Montant_Total FROM [Projet_POO].[dbo].[Client] C JOIN [Projet_POO].[dbo].[Commande] CA ON C.id_client = CA.id_client JOIN [Projet_POO].[dbo].[commande_article] CArt ON CA.id_commande = CArt.id_commande JOIN [Projet_POO].[dbo].[Articles] A ON CArt.id_article = A.id_article GROUP BY C.id_client, C.client_prenom, C.client_nom;";
}

System::String^ NS_Comp_Mappage::CLmapTB::ValCommercialeStock(void)
{
	return "SELECT A.id_article, A.montant_HT AS Prix_Unitaire, A.stock_produit AS Quantite_En_Stock, (A.montant_HT * A.stock_produit) AS Valeur_Commerciale FROM [Projet_POO].[dbo].[Articles] A;";
}

System::String^ NS_Comp_Mappage::CLmapTB::ValCommercialeAchat(void)
{
	return "SELECT A.id_article, A.cout_achat AS Cout_Unitaire, A.stock_produit AS Quantite_En_Stock, (A.cout_achat * A.stock_produit) AS Valeur_Achat_Stock FROM [Projet_POO].[dbo].[Articles] A;";
}

System::String^ NS_Comp_Mappage::CLmapTB::Top10Articles(void)
{
	return "SELECT TOP 10 A.id_article, COUNT(DISTINCT CA.id_commande) AS Nombre_Ventes FROM [Projet_POO].[dbo].[Articles] A JOIN [Projet_POO].[dbo].[commande_article] CA ON A.id_article = CA.id_article GROUP BY A.id_article ORDER BY Nombre_Ventes DESC;";
}

System::String^ NS_Comp_Mappage::CLmapTB::Chiffre_Daffaire_par_mois(void)
{
	return "SELECT SUM(montant_total) AS chiffre_affaires FROM (SELECT (a.montant_HT + a.Montant_TVA) * (1 - CASE WHEN a.remise_article LIKE '%%' THEN CAST(REPLACE(a.remise_article, '%', '') AS DECIMAL) / 100 ELSE 0 END) AS montant_total FROM [Projet_POO].[dbo].[Commande] c JOIN [Projet_POO].[dbo].[commande_article] ca ON c.id_commande = ca.id_commande JOIN [Projet_POO].[dbo].[Articles] a ON ca.id_article = a.id_article WHERE MONTH(c.date_commande) = 1 AND YEAR(c.date_commande) = 2023) AS subquery;";
}

System::String^ NS_Comp_Mappage::CLmapTB::Valeur_Commercial_Stock(void)
{
	return "SELECT SUM(valeur_article_stock) AS valeur_commerciale_stock FROM (SELECT a.montant_HT * a.stock_produit AS valeur_article_stock FROM [Projet_POO].[dbo].[Articles] a) AS subquery;";
}

System::String^ NS_Comp_Mappage::CLmapTB::reapprovisionnement_produit_sous_seuil(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Articles] WHERE stock_produit < [seuil_reapprovisionnement];";
}

System::String^ NS_Comp_Mappage::CLmapTB::Article_moins_vendus(void)
{
	return "SELECT TOP 10 a.id_article, COUNT(ca.id_article) AS nombre_de_ventes FROM [Projet_POO].[dbo].[Articles] a LEFT JOIN [Projet_POO].[dbo].[commande_article] ca ON a.id_article = ca.id_article GROUP BY a.id_article ORDER BY nombre_de_ventes ASC;";
}

System::String^ NS_Comp_Mappage::CLmapTB::Simulation_sql(int TVA, int marge, int remise, int demarque)
{
	float valeur = 0.01 * (marge * (100 - demarque - remise - TVA));
	System::String^ valeur_string = System::Convert::ToString(valeur);
	valeur_string = valeur_string->Replace(",", ".");
	return "SELECT SUM(valeur_article_stock) AS valeur_commerciale_stock FROM (SELECT a.montant_HT * a.stock_produit * " + valeur_string + " AS valeur_article_stock FROM [Projet_POO].[dbo].[Articles] a) AS subquery;";
}




void NS_Comp_Mappage::CLmapTB::setStats(int id_client)
{
	this->id_client = id_client;
}


// Article functions
System::String^ NS_Comp_Mappage::CLmapTB::SelectArticle(void)
{
	return "SELECT * FROM [Projet_POO].[dbo].[Articles]";
}

System::String^ NS_Comp_Mappage::CLmapTB::InsertArticle(void)
{
	return "INSERT INTO [Projet_POO].[dbo].[Articles] VALUES ("+this->id_article+","+this->montant_ht+","+this->montant_tva+",'"+this->reapprovisionnement_produit+"',"+this->cout_achat+"," + this->stock_produit + ","+ this->seuil_reapprovisionnement+",'" + this->couleur_article + "', '" + this->remise_article + "' ); ";
}

System::String^ NS_Comp_Mappage::CLmapTB::DeleteArticle(int id)
{
	return "DELETE FROM [Projet_POO].[dbo].[Articles] WHERE id_article = " + id + ";";
}

System::String^ NS_Comp_Mappage::CLmapTB::UpdateArticle(void)
{
	return "UPDATE [Projet_POO].[dbo].[Articles] SET montant_ht = "+this->montant_ht+", montant_tva = "+this->montant_tva+", reapprovisionnement_produit = '"+this->reapprovisionnement_produit+"', cout_achat="+this->cout_achat+", stock_produit = "+this->stock_produit+", seuil_reapprovisionnement="+this->seuil_reapprovisionnement +", couleur_article = '"+this->couleur_article+"', remise_article = '"+this->remise_article+"' WHERE id_article = "+this->id_article+";";
}

void NS_Comp_Mappage::CLmapTB::setArticle(int id_article, System::String^ montant_ht, System::String^ montant_tva, System::String^ reapprovisionnement_produit, int cout_achat, int stock_produit, int seuil_reapprovisionnement, System::String^ couleur_article, System::String^ remise_article)
{
	this->id_article = id_article;
	this->montant_ht = montant_ht;
	this->montant_tva = montant_tva;
	this->reapprovisionnement_produit = reapprovisionnement_produit;
	this->cout_achat = cout_achat;
	this->stock_produit = stock_produit;
	this->seuil_reapprovisionnement = seuil_reapprovisionnement;
	this->couleur_article = couleur_article;
	this->remise_article = remise_article;
}