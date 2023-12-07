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
		void ajouterUneCommande(int, int, System::String^, System::String^, System::String^, System::String^, System::String^, int );
		void modifierUneCommande(int, int, System::String^, System::String^, System::String^, System::String^, System::String^, int);
		void supprimerUneCommande(int);

		// Statistiques functions
		System::Data::DataSet^ Moyenne_panier(System::String^);
	};
}
