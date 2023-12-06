//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"
#include "User.h"
#include <map>
#include <string>

namespace CRUD_Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class CRUD_Stock : public System::Windows::Forms::Form
	{
	public:
		CRUD_Stock(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			Pages = Ptr_Pages;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisйes.
		/// </summary>
		~CRUD_Stock()
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
	private: System::Windows::Forms::TextBox^ montant_ht;
	private: System::Windows::Forms::TextBox^ id_article;












	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ remise_article;

	private: System::Windows::Forms::TextBox^ stock_produit;


	private: System::Windows::Forms::TextBox^ date_reapprovisionnement;



	private: System::Windows::Forms::TextBox^ montant_tva;











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
	private: System::Windows::Forms::TextBox^ couleur_article;
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
			this->montant_ht = (gcnew System::Windows::Forms::TextBox());
			this->id_article = (gcnew System::Windows::Forms::TextBox());
			this->remise_article = (gcnew System::Windows::Forms::TextBox());
			this->stock_produit = (gcnew System::Windows::Forms::TextBox());
			this->date_reapprovisionnement = (gcnew System::Windows::Forms::TextBox());
			this->montant_tva = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->couleur_article = (gcnew System::Windows::Forms::TextBox());
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
			this->btn_load->Click += gcnew System::EventHandler(this, &CRUD_Stock::btn_load_Click);
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
			this->btn_insert->Click += gcnew System::EventHandler(this, &CRUD_Stock::btn_insert_Click);
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
			this->btn_delete->Click += gcnew System::EventHandler(this, &CRUD_Stock::btn_delete_Click);
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
			this->btn_update->Click += gcnew System::EventHandler(this, &CRUD_Stock::btn_update_Click);
			// 
			// montant_ht
			// 
			this->montant_ht->Location = System::Drawing::Point(383, 223);
			this->montant_ht->Margin = System::Windows::Forms::Padding(6);
			this->montant_ht->Name = L"montant_ht";
			this->montant_ht->Size = System::Drawing::Size(610, 31);
			this->montant_ht->TabIndex = 7;
			// 
			// id_article
			// 
			this->id_article->Location = System::Drawing::Point(383, 155);
			this->id_article->Margin = System::Windows::Forms::Padding(6);
			this->id_article->Name = L"id_article";
			this->id_article->Size = System::Drawing::Size(610, 31);
			this->id_article->TabIndex = 6;
			// 
			// remise_article
			// 
			this->remise_article->Location = System::Drawing::Point(383, 569);
			this->remise_article->Margin = System::Windows::Forms::Padding(6);
			this->remise_article->Name = L"remise_article";
			this->remise_article->Size = System::Drawing::Size(610, 31);
			this->remise_article->TabIndex = 12;
			// 
			// stock_produit
			// 
			this->stock_produit->Location = System::Drawing::Point(382, 429);
			this->stock_produit->Margin = System::Windows::Forms::Padding(6);
			this->stock_produit->Name = L"stock_produit";
			this->stock_produit->Size = System::Drawing::Size(610, 31);
			this->stock_produit->TabIndex = 10;
			this->stock_produit->TextChanged += gcnew System::EventHandler(this, &CRUD_Stock::adresse_livraison_client_TextChanged);
			// 
			// date_reapprovisionnement
			// 
			this->date_reapprovisionnement->Location = System::Drawing::Point(383, 361);
			this->date_reapprovisionnement->Margin = System::Windows::Forms::Padding(6);
			this->date_reapprovisionnement->Name = L"date_reapprovisionnement";
			this->date_reapprovisionnement->Size = System::Drawing::Size(610, 31);
			this->date_reapprovisionnement->TabIndex = 9;
			// 
			// montant_tva
			// 
			this->montant_tva->Location = System::Drawing::Point(383, 291);
			this->montant_tva->Margin = System::Windows::Forms::Padding(6);
			this->montant_tva->Name = L"montant_tva";
			this->montant_tva->Size = System::Drawing::Size(610, 31);
			this->montant_tva->TabIndex = 8;
			this->montant_tva->TextChanged += gcnew System::EventHandler(this, &CRUD_Stock::date_livraison_TextChanged);
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
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->couleur_article);
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
			this->splitContainer1->Panel1->Controls->Add(this->montant_tva);
			this->splitContainer1->Panel1->Controls->Add(this->btn_insert);
			this->splitContainer1->Panel1->Controls->Add(this->btn_load);
			this->splitContainer1->Panel1->Controls->Add(this->date_reapprovisionnement);
			this->splitContainer1->Panel1->Controls->Add(this->montant_ht);
			this->splitContainer1->Panel1->Controls->Add(this->stock_produit);
			this->splitContainer1->Panel1->Controls->Add(this->remise_article);
			this->splitContainer1->Panel1->Controls->Add(this->id_article);
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(381, 470);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 25);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Couleur Article";
			// 
			// couleur_article
			// 
			this->couleur_article->Location = System::Drawing::Point(385, 500);
			this->couleur_article->Margin = System::Windows::Forms::Padding(6);
			this->couleur_article->Name = L"couleur_article";
			this->couleur_article->Size = System::Drawing::Size(610, 31);
			this->couleur_article->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(379, 174);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 25);
			this->label10->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(379, 192);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 25);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Montant HT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(377, 126);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Id Article";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(379, 260);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Montant TVA";
			this->label6->Click += gcnew System::EventHandler(this, &CRUD_Stock::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(379, 331);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(302, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Date de Reapprovisionnement";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(378, 400);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Stock Produit";
			this->label4->Click += gcnew System::EventHandler(this, &CRUD_Stock::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(379, 538);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Remise Article";
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
			this->button7->Location = System::Drawing::Point(90, 517);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(550, 77);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Gestion d\'Adresse";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &CRUD_Stock::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(90, 608);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(550, 77);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Page Utilisateur";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CRUD_Stock::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(90, 425);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(550, 77);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &CRUD_Stock::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Location = System::Drawing::Point(90, 333);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(550, 77);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Crud Stock";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CRUD_Stock::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(90, 244);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(550, 77);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Crud Commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CRUD_Stock::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(90, 150);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(550, 77);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Crud Client";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CRUD_Stock::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(90, 58);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(550, 77);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crud Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CRUD_Stock::button1_Click);
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
			// CRUD_Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1860, 1160);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(1886, 1231);
			this->Name = L"CRUD_Stock";
			this->Text = L"CRUD Stock";
			this->Load += gcnew System::EventHandler(this, &CRUD_Stock::MyForm_Load);
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
		this->oDs = this->oSvc->selectionnerLaTableArticles("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnArticle(System::Convert::ToInt32(this->id_article->Text), this->montant_ht->Text, this->montant_tva->Text, this->date_reapprovisionnement->Text, System::Convert::ToInt32(this->stock_produit->Text), this->couleur_article->Text, this->remise_article->Text);
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableArticles("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oSvc->modifierUnArticle(System::Convert::ToInt32(this->id_article->Text), this->montant_ht->Text, this->montant_tva->Text, this->date_reapprovisionnement->Text, System::Convert::ToInt32(this->stock_produit->Text), this->couleur_article->Text, this->remise_article->Text);
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableArticles("Rsl");
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
		this->oSvc->supprimerUnArticle(System::Convert::ToInt32(this->id_article->Text));
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerLaTableArticles("Rsl");
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
private: System::Void adresse_livraison_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
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