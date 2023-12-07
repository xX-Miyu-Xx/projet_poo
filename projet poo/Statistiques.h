//MyForm.H*********************************************************************************************
#pragma once
#include "CLservices.h"
#include "User.h"
#include <map>
#include <string>

namespace Statistiques {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	public ref class Statistiques : public System::Windows::Forms::Form
	{
	public:
		Statistiques(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			Pages = Ptr_Pages;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisйes.
		/// </summary>
		~Statistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: Dictionary<String^, Form^>^ Pages;
	protected:














	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Data::DataSet^ oDs;













	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label10;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;













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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->dgv_enr->Location = System::Drawing::Point(11, 10);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 82;
			this->dgv_enr->Size = System::Drawing::Size(1227, 270);
			this->dgv_enr->TabIndex = 0;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(8, 284);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->button15);
			this->splitContainer1->Panel1->Controls->Add(this->button14);
			this->splitContainer1->Panel1->Controls->Add(this->button13);
			this->splitContainer1->Panel1->Controls->Add(this->button12);
			this->splitContainer1->Panel1->Controls->Add(this->button10);
			this->splitContainer1->Panel1->Controls->Add(this->button11);
			this->splitContainer1->Panel1->Controls->Add(this->button9);
			this->splitContainer1->Panel1->Controls->Add(this->button7);
			this->splitContainer1->Panel1->Controls->Add(this->label12);
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->button8);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Statistiques::splitContainer1_Panel1_Paint);
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
			this->splitContainer1->Size = System::Drawing::Size(1229, 469);
			this->splitContainer1->SplitterDistance = 730;
			this->splitContainer1->SplitterWidth = 3;
			this->splitContainer1->TabIndex = 13;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(524, 356);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button15->Size = System::Drawing::Size(126, 69);
			this->button15->TabIndex = 43;
			this->button15->Text = L"Simulation";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(299, 356);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button14->Size = System::Drawing::Size(126, 69);
			this->button14->TabIndex = 42;
			this->button14->Text = L"Identifier";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Statistiques::button14_Click_1);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(67, 356);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button13->Size = System::Drawing::Size(126, 69);
			this->button13->TabIndex = 41;
			this->button13->Text = L"Identifier";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(524, 239);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button12->Size = System::Drawing::Size(126, 69);
			this->button12->TabIndex = 40;
			this->button12->Text = L"Identifier";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Statistiques::button12_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(67, 240);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button10->Size = System::Drawing::Size(126, 69);
			this->button10->TabIndex = 39;
			this->button10->Text = L"Calculer";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Statistiques::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(299, 240);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button11->Size = System::Drawing::Size(126, 69);
			this->button11->TabIndex = 38;
			this->button11->Text = L"Calculer";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(524, 104);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button9->Size = System::Drawing::Size(126, 69);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Calculer";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(67, 104);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button7->Size = System::Drawing::Size(126, 69);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Calculer";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Statistiques::button7_Click_1);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::LightCyan;
			this->label12->Location = System::Drawing::Point(536, 336);
			this->label12->Name = L"label12";
			this->label12->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Size = System::Drawing::Size(104, 16);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Valeur de stock";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LightCyan;
			this->label11->Location = System::Drawing::Point(286, 336);
			this->label11->Name = L"label11";
			this->label11->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Size = System::Drawing::Size(157, 16);
			this->label11->TabIndex = 32;
			this->label11->Text = L"10 articles moins vendus";
			this->label11->Click += gcnew System::EventHandler(this, &Statistiques::label11_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::LightCyan;
			this->label9->Location = System::Drawing::Point(64, 336);
			this->label9->Name = L"label9";
			this->label9->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Size = System::Drawing::Size(146, 16);
			this->label9->TabIndex = 31;
			this->label9->Text = L"10 articles plus vendus";
			this->label9->Click += gcnew System::EventHandler(this, &Statistiques::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::LightCyan;
			this->label8->Location = System::Drawing::Point(456, 219);
			this->label8->Name = L"label8";
			this->label8->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Size = System::Drawing::Size(260, 16);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Produit sous le seuil réapprovisionnement";
			this->label8->Click += gcnew System::EventHandler(this, &Statistiques::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::LightCyan;
			this->label7->Location = System::Drawing::Point(286, 219);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Size = System::Drawing::Size(150, 16);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Valeur d\'achat en stock";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::LightCyan;
			this->label6->Location = System::Drawing::Point(37, 219);
			this->label6->Name = L"label6";
			this->label6->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Size = System::Drawing::Size(184, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Valeur commerciale en stock";
			this->label6->Click += gcnew System::EventHandler(this, &Statistiques::label6_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::LightCyan;
			this->label5->Location = System::Drawing::Point(473, 84);
			this->label5->Name = L"label5";
			this->label5->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Size = System::Drawing::Size(214, 16);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Montant total des achats per Client";
			this->label5->Click += gcnew System::EventHandler(this, &Statistiques::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::LightCyan;
			this->label4->Location = System::Drawing::Point(310, 84);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Size = System::Drawing::Size(106, 16);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Chiffre d\'affaires";
			this->label4->Click += gcnew System::EventHandler(this, &Statistiques::label4_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(299, 104);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->button8->Size = System::Drawing::Size(126, 69);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Calculer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Statistiques::button8_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightCyan;
			this->label3->Location = System::Drawing::Point(74, 84);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Size = System::Drawing::Size(109, 16);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Moyenne Panier";
			this->label3->Click += gcnew System::EventHandler(this, &Statistiques::label3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(253, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 16);
			this->label10->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Utilitaire";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(59, 383);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(367, 49);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Page Utilisateur";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Statistiques::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->Location = System::Drawing::Point(59, 320);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(367, 49);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(59, 260);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(367, 49);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Crud Stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Statistiques::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(59, 203);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(367, 49);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Crud Commandes";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Statistiques::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(59, 143);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(367, 49);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Crud Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Statistiques::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(59, 84);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(367, 49);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Crud Personnel";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Statistiques::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Navigation";
			// 
			// Statistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1251, 772);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1269, 819);
			this->Name = L"Statistiques";
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &Statistiques::MyForm_Load);
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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
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


private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->Moyenne_panier("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->Chiffre_daffaire_per_mois("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->Valeur_Commercial_Stocks("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->reapprovisionnement_produits_sous_seuil("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
	 
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->Article_moins_vendus("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}
};
}