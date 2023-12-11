//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"
#include "User.h"
#include <map>
#include <string>

namespace CRUD_Client {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class CRUD_Client : public System::Windows::Forms::Form
	{
	public:
		CRUD_Client(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			Pages = Ptr_Pages;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisйes.
		/// </summary>
		~CRUD_Client()
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
	private: System::Windows::Forms::TextBox^ client_prenom;

	private: System::Windows::Forms::TextBox^ id_client;








	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::TextBox^ adresse_livraison_client;


	private: System::Windows::Forms::TextBox^ adresse_client;




	private: System::Windows::Forms::TextBox^ client_nom;






	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ anniversaire_client;




	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ date_1erachat;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ id_adresse;








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
			this->client_prenom = (gcnew System::Windows::Forms::TextBox());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->adresse_livraison_client = (gcnew System::Windows::Forms::TextBox());
			this->adresse_client = (gcnew System::Windows::Forms::TextBox());
			this->client_nom = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->id_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->date_1erachat = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->anniversaire_client = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
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
			this->dgv_enr->Location = System::Drawing::Point(11, 10);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 82;
			this->dgv_enr->Size = System::Drawing::Size(1227, 269);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(24, 147);
			this->btn_load->Margin = System::Windows::Forms::Padding(4);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(100, 159);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &CRUD_Client::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(133, 147);
			this->btn_insert->Margin = System::Windows::Forms::Padding(4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(100, 45);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &CRUD_Client::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(133, 260);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(100, 45);
			this->btn_delete->TabIndex = 4;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &CRUD_Client::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(133, 203);
			this->btn_update->Margin = System::Windows::Forms::Padding(4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(100, 45);
			this->btn_update->TabIndex = 3;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &CRUD_Client::btn_update_Click);
			// 
			// client_prenom
			// 
			this->client_prenom->Location = System::Drawing::Point(256, 103);
			this->client_prenom->Margin = System::Windows::Forms::Padding(4);
			this->client_prenom->Name = L"client_prenom";
			this->client_prenom->Size = System::Drawing::Size(408, 22);
			this->client_prenom->TabIndex = 7;
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(256, 60);
			this->id_client->Margin = System::Windows::Forms::Padding(4);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(408, 22);
			this->id_client->TabIndex = 6;
			// 
			// adresse_livraison_client
			// 
			this->adresse_livraison_client->Location = System::Drawing::Point(256, 251);
			this->adresse_livraison_client->Margin = System::Windows::Forms::Padding(4);
			this->adresse_livraison_client->Name = L"adresse_livraison_client";
			this->adresse_livraison_client->Size = System::Drawing::Size(408, 22);
			this->adresse_livraison_client->TabIndex = 10;
			// 
			// adresse_client
			// 
			this->adresse_client->Location = System::Drawing::Point(256, 202);
			this->adresse_client->Margin = System::Windows::Forms::Padding(4);
			this->adresse_client->Name = L"adresse_client";
			this->adresse_client->Size = System::Drawing::Size(408, 22);
			this->adresse_client->TabIndex = 9;
			// 
			// client_nom
			// 
			this->client_nom->Location = System::Drawing::Point(256, 147);
			this->client_nom->Margin = System::Windows::Forms::Padding(4);
			this->client_nom->Name = L"client_nom";
			this->client_nom->Size = System::Drawing::Size(408, 22);
			this->client_nom->TabIndex = 8;
			this->client_nom->TextChanged += gcnew System::EventHandler(this, &CRUD_Client::date_livraison_TextChanged);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(8, 284);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->id_adresse);
			this->splitContainer1->Panel1->Controls->Add(this->label12);
			this->splitContainer1->Panel1->Controls->Add(this->date_1erachat);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->anniversaire_client);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->btn_update);
			this->splitContainer1->Panel1->Controls->Add(this->btn_delete);
			this->splitContainer1->Panel1->Controls->Add(this->client_nom);
			this->splitContainer1->Panel1->Controls->Add(this->btn_insert);
			this->splitContainer1->Panel1->Controls->Add(this->btn_load);
			this->splitContainer1->Panel1->Controls->Add(this->adresse_client);
			this->splitContainer1->Panel1->Controls->Add(this->client_prenom);
			this->splitContainer1->Panel1->Controls->Add(this->adresse_livraison_client);
			this->splitContainer1->Panel1->Controls->Add(this->id_client);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::SystemColors::Info;
			this->splitContainer1->Panel2->Controls->Add(this->button7);
			this->splitContainer1->Panel2->Controls->Add(this->button6);
			this->splitContainer1->Panel2->Controls->Add(this->button5);
			this->splitContainer1->Panel2->Controls->Add(this->button4);
			this->splitContainer1->Panel2->Controls->Add(this->button3);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(1229, 469);
			this->splitContainer1->SplitterDistance = 730;
			this->splitContainer1->SplitterWidth = 3;
			this->splitContainer1->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(255, 367);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"id Adresse";
			// 
			// id_adresse
			// 
			this->id_adresse->Location = System::Drawing::Point(256, 385);
			this->id_adresse->Margin = System::Windows::Forms::Padding(4);
			this->id_adresse->Name = L"id_adresse";
			this->id_adresse->Size = System::Drawing::Size(408, 22);
			this->id_adresse->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(255, 326);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 16);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Date 1er achat";
			// 
			// date_1erachat
			// 
			this->date_1erachat->Location = System::Drawing::Point(256, 344);
			this->date_1erachat->Margin = System::Windows::Forms::Padding(4);
			this->date_1erachat->Name = L"date_1erachat";
			this->date_1erachat->Size = System::Drawing::Size(408, 22);
			this->date_1erachat->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(255, 280);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 16);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Date Anniversaire Client";
			// 
			// anniversaire_client
			// 
			this->anniversaire_client->Location = System::Drawing::Point(257, 299);
			this->anniversaire_client->Margin = System::Windows::Forms::Padding(4);
			this->anniversaire_client->Name = L"anniversaire_client";
			this->anniversaire_client->Size = System::Drawing::Size(408, 22);
			this->anniversaire_client->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(253, 72);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 16);
			this->label10->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(253, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 16);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Client Prenom";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(252, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Id Client";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(253, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Client Nom";
			this->label6->Click += gcnew System::EventHandler(this, &CRUD_Client::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(253, 182);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Adresse client";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(253, 232);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse Livraison Client";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Utilitaire";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Location = System::Drawing::Point(59, 336);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(367, 49);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Gestion d\'Adresse";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &CRUD_Client::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(59, 393);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(367, 49);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Page Utilisateur";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CRUD_Client::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(59, 275);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(367, 49);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CRUD_Client::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(59, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(367, 49);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Crud Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CRUD_Client::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(59, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(367, 49);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Crud Commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CRUD_Client::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Location = System::Drawing::Point(59, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(367, 49);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Crud Client";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(59, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(367, 49);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crud Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CRUD_Client::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Navigation";
			// 
			// CRUD_Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1240, 742);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1263, 805);
			this->Name = L"CRUD_Client";
			this->Text = L"CRUD Client";
			this->Load += gcnew System::EventHandler(this, &CRUD_Client::MyForm_Load);
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
		this->oDs = this->oSvc->selectionnerLaTableClient("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnClient(System::Convert::ToInt32(this->id_client->Text), this->client_prenom->Text, this->client_nom->Text, this->adresse_client->Text, this->adresse_livraison_client->Text, this->anniversaire_client->Text, this->date_1erachat->Text, System::Convert::ToInt32(this->id_adresse->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableClient("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUnClient(System::Convert::ToInt32(this->id_client->Text), this->client_prenom->Text, this->client_nom->Text, this->adresse_client->Text, this->adresse_livraison_client->Text, this->anniversaire_client->Text, this->date_1erachat->Text, System::Convert::ToInt32(this->id_adresse->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableClient("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
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
		this->oSvc->supprimerUnClient(System::Convert::ToInt32(this->id_client->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableClient("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "CRUD_Personnel" existe dans le dictionnaire
		if (Pages->ContainsKey("CRUD_Personnel")) {
			// Accéder à l'instance de CRUD_Personnel
			System::Windows::Forms::Form^ crudPersonnelForm = Pages["CRUD_Personnel"];

			// Changer l'onglet vers l'instance de CRUD_Personnel
			if (crudPersonnelForm != nullptr) {
				crudPersonnelForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void date_livraison_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "Adress_Gestion" existe dans le dictionnaire
		if (Pages->ContainsKey("Adress_Gestion")) {
			// Accéder à l'instance de Adress_Gestion
			System::Windows::Forms::Form^ adresseGestionForm = Pages["Adress_Gestion"];

			// Changer l'onglet vers l'instance de Adress_Gestion
			if (adresseGestionForm != nullptr) {
				adresseGestionForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
};
}