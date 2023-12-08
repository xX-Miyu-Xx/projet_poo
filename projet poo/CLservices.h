//CLservice.h********************************************************************************
#pragma once
#include "CLmapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservices(void);

		// Personnel functions
		System::Data::DataSet^ selectionnerLaTablePersonnel(System::String^);
		void ajouterUnPersonnel(int, System::String^, System::String^, int, System::String^, System::String^, int);
		void modifierUnPersonnel(int, System::String^, System::String^, int, System::String^, System::String^, int);
		void supprimerUnPersonnel(int);

		// Commande functions
		System::Data::DataSet^ selectionnerLaTableCommande(System::String^);
		void ajouterUneCommande(int, int, System::String^, System::String^, System::String^, System::String^, System::String^, int ,int);
		void modifierUneCommande(int, int, System::String^, System::String^, System::String^, System::String^, System::String^, int, int);
		void supprimerUneCommande(int);

		// Client functions
		System::Data::DataSet^ selectionnerLaTableClient(System::String^);
		void ajouterUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);
		void supprimerUnClient(int);

		// Article functions
		System::Data::DataSet^ selectionnerLaTableArticles(System::String^);
		void ajouterUnArticle(int, System::String^, System::String^, System::String^, int, int, int, System::String^, System::String^);
		void modifierUnArticle(int, System::String^, System::String^, System::String^, int, int, int, System::String^, System::String^);
		void supprimerUnArticle(int);

		//Adress functions
		System::Data::DataSet^ selectionnerAdressesEtVilles(System::String^);
		System::Data::DataSet^ selectionnerVilles(System::String^);
		void ajouterUneVileEtAdresse(int, System::String^,int, int, int);
		void ajouterUneVille(int, System::String^);
		void modifierUneVille(int, System::String^);
		void modifierAdresse(int, System::String^, int, int, int);
		void supprimerUneVille(int);
		void supprimerUneAdresse(int);


		// Statistiques functions
		System::Data::DataSet^ Moyenne_panier(System::String^);
		System::Data::DataSet^ Montant_total_client(System::String^);
		System::Data::DataSet^ Val_Commerciale_Stock(System::String^);
		System::Data::DataSet^ Val_Commerciale_Achat(System::String^);
		System::Data::DataSet^ Top_10_Articles(System::String^);
		System::Data::DataSet^ Chiffre_daffaire_per_mois(System::String^);
		System::Data::DataSet^ Valeur_Commercial_Stocks(System::String^);
		System::Data::DataSet^ reapprovisionnement_produits_sous_seuil(System::String^);
		System::Data::DataSet^ Article_moins_vendus(System::String^);
		System::Data::DataSet^ Simulation(System::String^,int,int,int,int);
	};
}
