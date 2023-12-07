//CLmapTB.H*********************************************************************************
#include <string>
#pragma once
namespace NS_Comp_Mappage
{
	ref class CLmapTB
	{
	private:
		System::String^ sSql;
		//personnel:
		int Id;
		System::String^ nom_personnel;
		System::String^ prenom_personnel;
		int age_personnel;
		System::String^ adresse_personnel;
		System::String^ date_embauche_personnel;
		int sup_hierarchique_personnel;

		// Client variables
		int id_client;
		System::String^ client_prenom;
		System::String^ client_nom;
		System::String^ adresse_client;
		System::String^ adresse_livraison_client;

		// Commande variables
		int id_personnel;
		int id_commande;
		System::String^ date_solde;
		System::String^ date_livraison;
		System::String^ date_commande;
		System::String^ date_payement;
		System::String^ moyen_payement;
		System::String^ prix_commande;
		int id_ville;

		// Stock variables
		int id_stock;
		System::String^ produit_nom;
		int stock_produit;
		System::String^ reapprovisionnement_produit;
		int Montant_TTC;
		System::String^ date_ajout;

		// Stats variables
		int id_stat;
		int commandes_totales;
		int commandes_reussies;
		int commandes_echouees;

		// Article variables
		int id_article;


	public:
		System::String^ SelectPersonnel(void);
		System::String^ InsertPersonnel(void);
		System::String^ DeletePersonnel(int);
		System::String^ UpdatePersonnel(void);
		void setPersonnel(int, System::String^, System::String^, int, System::String^, System::String^, int);

		// Client functions
		System::String^ SelectClient(void);
		System::String^ InsertClient(void);
		System::String^ DeleteClient(int);
		System::String^ UpdateClient(void);
		void setClient(int, System::String^, System::String^, System::String^, System::String^);

		// Commande functions
		System::String^ SelectCommande(void);
		System::String^ InsertCommande(void);
		System::String^ DeleteCommande(int);
		System::String^ UpdateCommande(void);
		void setCommande( int, int, System::String^, System::String^, System::String^, System::String^, System::String^, int);

		// Stock functions
		System::String^ SelectStock(void);
		System::String^ InsertStock(void);
		System::String^ DeleteStock(void);
		System::String^ UpdateStock(void);
		void setStock(int, System::String^, int, System::String^, int, System::String^);

		// Stats functions
		System::String^ MoyennePanier(void);
		System::String^ Chiffre_Daffaire_par_mois(void);
		System::String^ Valeur_Commercial_Stock(void);
		System::String^ reapprovisionnement_produit_sous_seuil(void);
		System::String^ Article_moins_vendus(void);
		void setStats(int, int, int, int, int, int);

	};
}