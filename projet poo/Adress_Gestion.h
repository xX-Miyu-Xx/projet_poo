//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"
#include "User.h"
#include <map>
#include <string>

namespace Adress_Gestion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class Adress_Gestion : public System::Windows::Forms::Form
	{
	public:
		Adress_Gestion(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			Pages = Ptr_Pages;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisees.
		/// </summary>
		~Adress_Gestion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: Dictionary<String^, Form^>^ Pages;
	private: bool VillesEtAdresses = false;
	private: bool getVillesEtAdresses() {
		return this->VillesEtAdresses;
	}
	private: void setVillesEtAdresses(bool val) {
		this->VillesEtAdresses = val;
	}
	protected:

	private: System::Windows::Forms::Button^ btn_load;
	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::TextBox^ rue_adresse;

	private: System::Windows::Forms::TextBox^ id_adresse;








	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ id_ville;



	private: System::Windows::Forms::TextBox^ numero_adresse;




	private: System::Windows::Forms::TextBox^ code_postal;






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
	private: System::Windows::Forms::TextBox^ nom_ville;








	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button_Citties;





	protected:

	private:
		/// <summary>
		/// Variable necessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Methode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette mйthode avec l'editeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_load = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->rue_adresse = (gcnew System::Windows::Forms::TextBox());
			this->id_adresse = (gcnew System::Windows::Forms::TextBox());
			this->id_ville = (gcnew System::Windows::Forms::TextBox());
			this->numero_adresse = (gcnew System::Windows::Forms::TextBox());
			this->code_postal = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button_Citties = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nom_ville = (gcnew System::Windows::Forms::TextBox());
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
			this->btn_load->Size = System::Drawing::Size(150, 114);
			this->btn_load->TabIndex = 1;
			this->btn_load->Text = L"Load Cities + Adress";
			this->btn_load->UseVisualStyleBackColor = true;
			this->btn_load->Click += gcnew System::EventHandler(this, &Adress_Gestion::btn_load_Click);
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
			this->btn_insert->Click += gcnew System::EventHandler(this, &Adress_Gestion::btn_insert_Click);
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
			this->btn_delete->Click += gcnew System::EventHandler(this, &Adress_Gestion::btn_delete_Click);
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
			this->btn_update->Click += gcnew System::EventHandler(this, &Adress_Gestion::btn_update_Click);
			// 
			// rue_adresse
			// 
			this->rue_adresse->Location = System::Drawing::Point(387, 244);
			this->rue_adresse->Margin = System::Windows::Forms::Padding(6);
			this->rue_adresse->Name = L"rue_adresse";
			this->rue_adresse->Size = System::Drawing::Size(610, 31);
			this->rue_adresse->TabIndex = 7;
			// 
			// id_adresse
			// 
			this->id_adresse->Location = System::Drawing::Point(387, 176);
			this->id_adresse->Margin = System::Windows::Forms::Padding(6);
			this->id_adresse->Name = L"id_adresse";
			this->id_adresse->Size = System::Drawing::Size(610, 31);
			this->id_adresse->TabIndex = 6;
			// 
			// id_ville
			// 
			this->id_ville->Location = System::Drawing::Point(387, 457);
			this->id_ville->Margin = System::Windows::Forms::Padding(6);
			this->id_ville->Name = L"id_ville";
			this->id_ville->Size = System::Drawing::Size(610, 31);
			this->id_ville->TabIndex = 10;
			// 
			// numero_adresse
			// 
			this->numero_adresse->Location = System::Drawing::Point(387, 380);
			this->numero_adresse->Margin = System::Windows::Forms::Padding(6);
			this->numero_adresse->Name = L"numero_adresse";
			this->numero_adresse->Size = System::Drawing::Size(610, 31);
			this->numero_adresse->TabIndex = 9;
			// 
			// code_postal
			// 
			this->code_postal->Location = System::Drawing::Point(387, 312);
			this->code_postal->Margin = System::Windows::Forms::Padding(6);
			this->code_postal->Name = L"code_postal";
			this->code_postal->Size = System::Drawing::Size(610, 31);
			this->code_postal->TabIndex = 8;
			this->code_postal->TextChanged += gcnew System::EventHandler(this, &Adress_Gestion::date_livraison_TextChanged);
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
			this->splitContainer1->Panel1->Controls->Add(this->button_Citties);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->nom_ville);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->btn_update);
			this->splitContainer1->Panel1->Controls->Add(this->btn_delete);
			this->splitContainer1->Panel1->Controls->Add(this->code_postal);
			this->splitContainer1->Panel1->Controls->Add(this->btn_insert);
			this->splitContainer1->Panel1->Controls->Add(this->btn_load);
			this->splitContainer1->Panel1->Controls->Add(this->numero_adresse);
			this->splitContainer1->Panel1->Controls->Add(this->rue_adresse);
			this->splitContainer1->Panel1->Controls->Add(this->id_ville);
			this->splitContainer1->Panel1->Controls->Add(this->id_adresse);
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
			// button_Citties
			// 
			this->button_Citties->Location = System::Drawing::Point(38, 364);
			this->button_Citties->Margin = System::Windows::Forms::Padding(6);
			this->button_Citties->Name = L"button_Citties";
			this->button_Citties->Size = System::Drawing::Size(150, 113);
			this->button_Citties->TabIndex = 24;
			this->button_Citties->Text = L"Load Cities";
			this->button_Citties->UseVisualStyleBackColor = true;
			this->button_Citties->Click += gcnew System::EventHandler(this, &Adress_Gestion::button_Citties_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(384, 501);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 25);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Nom Ville";
			// 
			// nom_ville
			// 
			this->nom_ville->Location = System::Drawing::Point(389, 532);
			this->nom_ville->Margin = System::Windows::Forms::Padding(6);
			this->nom_ville->Name = L"nom_ville";
			this->nom_ville->Size = System::Drawing::Size(610, 31);
			this->nom_ville->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(383, 195);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 25);
			this->label10->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(383, 213);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 25);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Rue ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(381, 147);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 25);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Id Adresse";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(383, 281);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Code Postal";
			this->label6->Click += gcnew System::EventHandler(this, &Adress_Gestion::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(383, 350);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 25);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Numero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(383, 428);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 25);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Id Ville";
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
			this->button7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->Location = System::Drawing::Point(88, 520);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(550, 77);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Gestion d\'Adresse";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Adress_Gestion::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(88, 612);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(550, 77);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Page Utilisateur";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Adress_Gestion::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(88, 430);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(550, 77);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Adress_Gestion::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(88, 336);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(550, 77);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Crud Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Adress_Gestion::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(88, 247);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(550, 77);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Crud Commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Adress_Gestion::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 153);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(550, 77);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Crud Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Adress_Gestion::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(88, 61);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(550, 77);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crud Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Adress_Gestion::button1_Click);
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
			// Adress_Gestion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1860, 1160);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximumSize = System::Drawing::Size(1886, 1231);
			this->Name = L"Adress_Gestion";
			this->Text = L"Adress Gestion";
			this->Load += gcnew System::EventHandler(this, &Adress_Gestion::MyForm_Load);
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
		this->setVillesEtAdresses(true);
		this->id_adresse->Enabled = true;
		this->rue_adresse->Enabled = true;
		this->code_postal->Enabled = true;
		this->numero_adresse->Enabled = true;
		this->nom_ville->Enabled = false;
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerAdressesEtVilles("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->getVillesEtAdresses())
		{
			this->oSvc->ajouterUneVileEtAdresse(System::Convert::ToInt32(this->id_adresse->Text),this->rue_adresse->Text,System::Convert::ToInt32(this->code_postal->Text),System::Convert::ToInt32(this->numero_adresse->Text), System::Convert::ToInt32(this->id_ville->Text));
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerAdressesEtVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else
		{
			this->oSvc->ajouterUneVille(System::Convert::ToInt32(this->id_ville->Text), this->nom_ville->Text);
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->getVillesEtAdresses())
		{
			this->oSvc->modifierAdresse(System::Convert::ToInt32(this->id_adresse->Text), this->rue_adresse->Text, System::Convert::ToInt32(this->code_postal->Text), System::Convert::ToInt32(this->numero_adresse->Text), System::Convert::ToInt32(this->id_ville->Text));
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerAdressesEtVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else
		{
			this->oSvc->modifierUneVille(System::Convert::ToInt32(this->id_ville->Text), this->nom_ville->Text);
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
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
// Vérifier si la clé "CRUD_Commande" existe dans le dictionnaire
		if (Pages->ContainsKey("CRUD_Commandes")) {
			// Accéder à l'instance de CRUD_Commande
			System::Windows::Forms::Form^ crudCommandeForm = Pages["CRUD_Commandes"];

			// Changer l'onglet vers l'instance de CRUD_Commande
			if (crudCommandeForm != nullptr) {
				crudCommandeForm->Show();
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
		if (this->getVillesEtAdresses())
		{
			this->oSvc->supprimerUneAdresse(System::Convert::ToInt32(this->id_adresse->Text));
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerAdressesEtVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else
		{
			this->oSvc->supprimerUneVille(System::Convert::ToInt32(this->id_ville->Text));
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->selectionnerVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
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
	}
	private: System::Void button_Citties_Click(System::Object^ sender, System::EventArgs^ e) {
		this->setVillesEtAdresses(false);
		this->id_adresse->Enabled = false;
		this->rue_adresse->Enabled = false;
		this->code_postal->Enabled = false;
		this->numero_adresse->Enabled = false;
		this->nom_ville->Enabled = true;
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerVilles("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
};
}