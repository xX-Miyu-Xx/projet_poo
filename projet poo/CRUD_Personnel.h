//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"
#include "User.h"
#include <map>
#include <string>

namespace CRUD_Personnel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class CRUD_Personnel : public System::Windows::Forms::Form
	{
	public:
		CRUD_Personnel(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			Pages = Ptr_Pages;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisйes.
		/// </summary>
		~CRUD_Personnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: Dictionary<String^, Form^>^ Pages;
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ id_personnel;
	private: System::Windows::Forms::TextBox^ prenom_personnel;






	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ id_sup_hier;


	private: System::Windows::Forms::TextBox^ adresse_personnel;

	private: System::Windows::Forms::TextBox^ age_personnel;

	private: System::Windows::Forms::TextBox^ nom_personnel;

	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ date_embauche;


	protected:

	private:
		/// <summary>
		/// Variable nйcessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Mйthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette mйthode avec l'йditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->id_personnel = (gcnew System::Windows::Forms::TextBox());
			this->prenom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->id_sup_hier = (gcnew System::Windows::Forms::TextBox());
			this->adresse_personnel = (gcnew System::Windows::Forms::TextBox());
			this->age_personnel = (gcnew System::Windows::Forms::TextBox());
			this->nom_personnel = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(8, 8);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 82;
			this->dgv_enr->Size = System::Drawing::Size(920, 219);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(18, 119);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(75, 129);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &CRUD_Personnel::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(100, 119);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(75, 37);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &CRUD_Personnel::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(100, 211);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(75, 37);
			this->btn_delete->TabIndex = 4;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &CRUD_Personnel::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(100, 165);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(75, 37);
			this->btn_update->TabIndex = 3;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &CRUD_Personnel::btn_update_Click);
			// 
			// id_personnel
			// 
			this->id_personnel->Location = System::Drawing::Point(192, 73);
			this->id_personnel->Name = L"id_personnel";
			this->id_personnel->Size = System::Drawing::Size(307, 20);
			this->id_personnel->TabIndex = 6;
			// 
			// prenom_personnel
			// 
			this->prenom_personnel->Location = System::Drawing::Point(192, 114);
			this->prenom_personnel->Name = L"prenom_personnel";
			this->prenom_personnel->Size = System::Drawing::Size(307, 20);
			this->prenom_personnel->TabIndex = 7;
			// 
			// id_sup_hier
			// 
			this->id_sup_hier->Location = System::Drawing::Point(192, 311);
			this->id_sup_hier->Name = L"id_sup_hier";
			this->id_sup_hier->Size = System::Drawing::Size(307, 20);
			this->id_sup_hier->TabIndex = 12;
			// 
			// adresse_personnel
			// 
			this->adresse_personnel->Location = System::Drawing::Point(192, 234);
			this->adresse_personnel->Name = L"adresse_personnel";
			this->adresse_personnel->Size = System::Drawing::Size(307, 20);
			this->adresse_personnel->TabIndex = 10;
			// 
			// age_personnel
			// 
			this->age_personnel->Location = System::Drawing::Point(192, 195);
			this->age_personnel->Name = L"age_personnel";
			this->age_personnel->Size = System::Drawing::Size(307, 20);
			this->age_personnel->TabIndex = 9;
			// 
			// nom_personnel
			// 
			this->nom_personnel->Location = System::Drawing::Point(192, 154);
			this->nom_personnel->Name = L"nom_personnel";
			this->nom_personnel->Size = System::Drawing::Size(307, 20);
			this->nom_personnel->TabIndex = 8;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(6, 231);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(2);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->date_embauche);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->btn_update);
			this->splitContainer1->Panel1->Controls->Add(this->btn_delete);
			this->splitContainer1->Panel1->Controls->Add(this->nom_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->btn_insert);
			this->splitContainer1->Panel1->Controls->Add(this->btn_load);
			this->splitContainer1->Panel1->Controls->Add(this->age_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->id_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->adresse_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->id_sup_hier);
			this->splitContainer1->Panel1->Controls->Add(this->prenom_personnel);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::Info;
			this->splitContainer1->Panel2->Controls->Add(this->button6);
			this->splitContainer1->Panel2->Controls->Add(this->button5);
			this->splitContainer1->Panel2->Controls->Add(this->button4);
			this->splitContainer1->Panel2->Controls->Add(this->button3);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(922, 381);
			this->splitContainer1->SplitterDistance = 548;
			this->splitContainer1->SplitterWidth = 2;
			this->splitContainer1->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(191, 257);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Date Embauche";
			// 
			// date_embauche
			// 
			this->date_embauche->Location = System::Drawing::Point(193, 273);
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Size = System::Drawing::Size(307, 20);
			this->date_embauche->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(190, 58);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(190, 57);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Id Personnel";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(190, 98);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Prenom Personnel";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(190, 138);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Nom Personnel";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(190, 179);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Age Personnel";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(190, 218);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse Personnel";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 295);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Id Superieur Hierarchique";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Utilitaire";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(44, 311);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(275, 40);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Page Utilisateur";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CRUD_Personnel::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(44, 260);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(275, 40);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CRUD_Personnel::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(44, 211);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(275, 40);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Crud Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CRUD_Personnel::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 165);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(275, 40);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Crud Commandes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CRUD_Personnel::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 116);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(275, 40);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Crud Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CRUD_Personnel::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(44, 68);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(275, 40);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crud Personnel";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 7);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Navigation";
			// 
			// CRUD_Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 635);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->splitContainer1);
			this->MaximumSize = System::Drawing::Size(956, 674);
			this->Name = L"CRUD_Personnel";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &CRUD_Personnel::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTablePersonnel("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int id = System::Convert::ToInt32(this->id_personnel->Text);
		int id_sup = System::Convert::ToInt32(this->id_sup_hier->Text);
		int age = System::Convert::ToInt32(this->age_personnel->Text);
		this->oSvc->ajouterUnPersonnel(id, this->nom_personnel->Text, this->prenom_personnel->Text,age, this->adresse_personnel->Text, this->date_embauche->Text, id_sup);
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTablePersonnel("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUnPersonnel(System::Convert::ToInt32(this->id_personnel->Text), this->nom_personnel->Text, this->prenom_personnel->Text, System::Convert::ToInt32(this->age_personnel->Text), this->adresse_personnel->Text, this->date_embauche->Text, System::Convert::ToInt32(this->id_sup_hier->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTablePersonnel("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "CRUD_Client" existe dans le dictionnaire
		if (Pages->ContainsKey("CRUD_Client")) {
			// Accéder à l'instance de CRUD_Client
			System::Windows::Forms::Form^ crudClientForm = Pages["CRUD_Client"];

			// Changer l'onglet vers l'instance de CRUD_Client
			if (crudClientForm != nullptr) {
				crudClientForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "CRUD_Commandes" existe dans le dictionnaire
		if (Pages->ContainsKey("CRUD_Commandes")) {
			// Accéder à l'instance de CRUD_Commandes
			System::Windows::Forms::Form^ crudCommandesForm = Pages["CRUD_Commandes"];

			// Changer l'onglet vers l'instance de CRUD_Commandes
			if (crudCommandesForm != nullptr) {
				crudCommandesForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "CRUD_Stock" existe dans le dictionnaire
		if (Pages->ContainsKey("CRUD_Stock")) {
			// Accéder à l'instance de CRUD_Stock
			System::Windows::Forms::Form^ crudStockForm = Pages["CRUD_Stock"];

			// Changer l'onglet vers l'instance de CRUD_Stock
			if (crudStockForm != nullptr) {
				crudStockForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "Statistiques" existe dans le dictionnaire
		if (Pages->ContainsKey("Statistiques")) {
			// Accéder à l'instance de Statistiques
			System::Windows::Forms::Form^ statistiquesForm = Pages["Statistiques"];

			// Changer l'onglet vers l'instance de Statistiques
			if (statistiquesForm != nullptr) {
				statistiquesForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "UsersPage" existe dans le dictionnaire
		if (Pages->ContainsKey("UsersPage")) {
			// Accéder à l'instance de Utilisateur
			System::Windows::Forms::Form^ utilisateurForm = Pages["UsersPage"];

			// Changer l'onglet vers l'instance de Utilisateur
			if (utilisateurForm != nullptr) {
				utilisateurForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->supprimerUnPersonnel(System::Convert::ToInt32(this->id_personnel->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTablePersonnel("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
};
}