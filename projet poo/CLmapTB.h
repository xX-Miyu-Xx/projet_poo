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
		System::String^ anniversaire_client;
		int id_ville_client;
		System::String^ date_1erachat;

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


		// Stats variables
		int id_stat;
		int commandes_totales;
		int commandes_reussies;
		int commandes_echouees;

		// Article variables
		int id_article;
		System::String^ montant_ht;
		System::String^ montant_tva;
		System::String^ reapprovisionnement_produit;
		int stock_produit;
		System::String^ couleur_article;
		System::String^ remise_article;


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
		void setClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);

		// Commande functions
		System::String^ SelectCommande(void);
		System::String^ InsertCommande(void);
		System::String^ DeleteCommande(int);
		System::String^ UpdateCommande(void);
		void setCommande( int, int, System::String^, System::String^, System::String^, System::String^, System::String^, int);

		// Stats functions
		System::String^ SelectStats(void);
		System::String^ InsertStats(void);
		System::String^ DeleteStats(void);
		System::String^ UpdateStats(void);
		void setStats(int, int, int, int, int, int);

		// Article functions
		System::String^ SelectArticle(void);
		System::String^ InsertArticle(void);
		System::String^ DeleteArticle(int);
		System::String^ UpdateArticle(void);
		void setArticle(int, System::String^, System::String^, System::String^, int, System::String^, System::String^);

	};
}