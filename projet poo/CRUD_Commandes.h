﻿//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"
#include "User.h"
#include <map>
#include <string>

namespace CRUD_Commandes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class CRUD_Commandes : public System::Windows::Forms::Form
	{
	public:
		CRUD_Commandes(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			Pages = Ptr_Pages;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisйes.
		/// </summary>
		~CRUD_Commandes()
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
	private: System::Windows::Forms::TextBox^ id_commande;







	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ date_solde;

	private: System::Windows::Forms::TextBox^ date_payement;



	private: System::Windows::Forms::TextBox^ date_commande;


	private: System::Windows::Forms::TextBox^ date_livraison;



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
	private: System::Windows::Forms::TextBox^ moyen_payement;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ id_client;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ articles_commande;

	private: System::Windows::Forms::Button^ button7;





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
			this->id_commande = (gcnew System::Windows::Forms::TextBox());
			this->date_solde = (gcnew System::Windows::Forms::TextBox());
			this->date_payement = (gcnew System::Windows::Forms::TextBox());
			this->date_commande = (gcnew System::Windows::Forms::TextBox());
			this->date_livraison = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->articles_commande = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->id_client = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->moyen_payement = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->dgv_enr->Location = System::Drawing::Point(16, 15);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(6);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 82;
			this->dgv_enr->Size = System::Drawing::Size(1840, 421);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_load
			// 
			this->btn_load->Location = System::Drawing::Point(36, 229);
			this->btn_load->Margin = System::Windows::Forms::Padding(6);
			this->btn_load->Name = L"btn_load";
			this->btn_load->Size = System::Drawing::Size(150, 248);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load DB";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &CRUD_Commandes::btn_load_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(200, 229);
			this->btn_insert->Margin = System::Windows::Forms::Padding(6);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(150, 71);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &CRUD_Commandes::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(200, 406);
			this->btn_delete->Margin = System::Windows::Forms::Padding(6);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(150, 71);
			this->btn_delete->TabIndex = 4;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &CRUD_Commandes::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(200, 317);
			this->btn_update->Margin = System::Windows::Forms::Padding(6);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(150, 71);
			this->btn_update->TabIndex = 3;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &CRUD_Commandes::btn_update_Click);
			// 
			// id_personnel
			// 
			this->id_personnel->Location = System::Drawing::Point(384, 161);
			this->id_personnel->Margin = System::Windows::Forms::Padding(6);
			this->id_personnel->Name = L"id_personnel";
			this->id_personnel->Size = System::Drawing::Size(610, 31);
			this->id_personnel->TabIndex = 7;
			// 
			// id_commande
			// 
			this->id_commande->Location = System::Drawing::Point(384, 93);
			this->id_commande->Margin = System::Windows::Forms::Padding(6);
			this->id_commande->Name = L"id_commande";
			this->id_commande->Size = System::Drawing::Size(610, 31);
			this->id_commande->TabIndex = 6;
			// 
			// date_solde
			// 
			this->date_solde->Location = System::Drawing::Point(387, 520);
			this->date_solde->Margin = System::Windows::Forms::Padding(6);
			this->date_solde->Name = L"date_solde";
			this->date_solde->Size = System::Drawing::Size(610, 31);
			this->date_solde->TabIndex = 12;
			// 
			// date_payement
			// 
			this->date_payement->Location = System::Drawing::Point(384, 374);
			this->date_payement->Margin = System::Windows::Forms::Padding(6);
			this->date_payement->Name = L"date_payement";
			this->date_payement->Size = System::Drawing::Size(610, 31);
			this->date_payement->TabIndex = 10;
			// 
			// date_commande
			// 
			this->date_commande->Location = System::Drawing::Point(384, 297);
			this->date_commande->Margin = System::Windows::Forms::Padding(6);
			this->date_commande->Name = L"date_commande";
			this->date_commande->Size = System::Drawing::Size(610, 31);
			this->date_commande->TabIndex = 9;
			// 
			// date_livraison
			// 
			this->date_livraison->Location = System::Drawing::Point(384, 229);
			this->date_livraison->Margin = System::Windows::Forms::Padding(6);
			this->date_livraison->Name = L"date_livraison";
			this->date_livraison->Size = System::Drawing::Size(610, 31);
			this->date_livraison->TabIndex = 8;
			this->date_livraison->TextChanged += gcnew System::EventHandler(this, &CRUD_Commandes::date_livraison_TextChanged);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(12, 444);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(4);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->articles_commande);
			this->splitContainer1->Panel1->Controls->Add(this->label12);
			this->splitContainer1->Panel1->Controls->Add(this->id_client);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->moyen_payement);
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
			this->splitContainer1->Panel1->Controls->Add(this->date_livraison);
			this->splitContainer1->Panel1->Controls->Add(this->btn_insert);
			this->splitContainer1->Panel1->Controls->Add(this->btn_load);
			this->splitContainer1->Panel1->Controls->Add(this->date_commande);
			this->splitContainer1->Panel1->Controls->Add(this->id_personnel);
			this->splitContainer1->Panel1->Controls->Add(this->date_payement);
			this->splitContainer1->Panel1->Controls->Add(this->date_solde);
			this->splitContainer1->Panel1->Controls->Add(this->id_commande);
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
			this->splitContainer1->Size = System::Drawing::Size(1844, 733);
			this->splitContainer1->SplitterDistance = 1096;
			this->splitContainer1->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(388, 617);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(247, 25);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Articles de la commande";
			// 
			// articles_commande
			// 
			this->articles_commande->Location = System::Drawing::Point(390, 644);
			this->articles_commande->Margin = System::Windows::Forms::Padding(6);
			this->articles_commande->Name = L"articles_commande";
			this->articles_commande->Size = System::Drawing::Size(610, 31);
			this->articles_commande->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(385, 557);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 25);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Id Client";
			// 
			// id_client
			// 
			this->id_client->Location = System::Drawing::Point(387, 584);
			this->id_client->Margin = System::Windows::Forms::Padding(6);
			this->id_client->Name = L"id_client";
			this->id_client->Size = System::Drawing::Size(610, 31);
			this->id_client->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(382, 419);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(179, 25);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Moyen Payement";
			// 
			// moyen_payement
			// 
			this->moyen_payement->Location = System::Drawing::Point(386, 449);
			this->moyen_payement->Margin = System::Windows::Forms::Padding(6);
			this->moyen_payement->Name = L"moyen_payement";
			this->moyen_payement->Size = System::Drawing::Size(610, 31);
			this->moyen_payement->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(380, 112);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 25);
			this->label10->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(380, 130);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 25);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Id Personnel";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(378, 64);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Id Commande";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(380, 198);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Date Livraison";
			this->label6->Click += gcnew System::EventHandler(this, &CRUD_Commandes::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(380, 267);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Date Commande";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(380, 345);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Date Payement";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(383, 489);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Date Solde";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 13);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Utilitaire";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Location = System::Drawing::Point(86, 531);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(550, 77);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Gestion d\'Adresse";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(86, 621);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(550, 77);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Page Utilisateur";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(86, 439);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(550, 77);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(86, 345);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(550, 77);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Crud Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Location = System::Drawing::Point(86, 256);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(550, 77);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Crud Commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(86, 162);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(550, 77);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Crud Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(86, 70);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(550, 77);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crud Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CRUD_Commandes::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 13);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Navigation";
			// 
			// CRUD_Commandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1860, 1160);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(1886, 1231);
			this->Name = L"CRUD_Commandes";
			this->Text = L"CRUD Commandes";
			this->Load += gcnew System::EventHandler(this, &CRUD_Commandes::MyForm_Load);
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
		this->oDs = this->oSvc->selectionnerLaTableCommande("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUneCommande(System::Convert::ToInt32(this->id_personnel->Text), System::Convert::ToInt32(this->id_commande->Text), this->date_livraison->Text, this->date_commande->Text, this->date_payement->Text, this->date_solde->Text, this->moyen_payement->Text, System::Convert::ToInt32(this->id_client->Text), System::Convert::ToInt32(this->articles_commande->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableCommande("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc->modifierUneCommande(System::Convert::ToInt32(this->id_personnel->Text), System::Convert::ToInt32(this->id_commande->Text), this->date_livraison->Text, this->date_commande->Text, this->date_payement->Text, this->date_solde->Text, this->moyen_payement->Text, System::Convert::ToInt32(this->id_client->Text), System::Convert::ToInt32(this->articles_commande->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableCommande("Rsl");
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
		this->oSvc->supprimerUneCommande(System::Convert::ToInt32(this->id_commande->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableCommande("Rsl");
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