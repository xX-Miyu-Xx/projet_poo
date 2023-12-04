#include "User.h"
#include <map>
#include <string>

#pragma once

namespace CRUD_Stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class CRUD_Stock : public System::Windows::Forms::Form
	{
	public:
		CRUD_Stock(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			utilisateur = user;
			Pages = Ptr_Pages;
			this->label1->Text = "Hello " + utilisateur->getNom() + " " + utilisateur->getPrenom();
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_Personnel;
	private: Dictionary<String^, Form^>^ Pages;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_Stock;
	public:

	public:







	public:






	private:
		Utilisateur^ utilisateur; // Store the Utilisateur^ locally in MyForm

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CRUD_Stock()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID_Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(812, 33);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 22);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CRUD Personnel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CRUD_Stock::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ID_Stock });
			this->dataGridView1->Location = System::Drawing::Point(-10, 58);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->MinimumSize = System::Drawing::Size(768, 368);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 20;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(812, 368);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CRUD_Stock::dataGridView1_CellContentClick_2);
			// 
			// ID_Stock
			// 
			this->ID_Stock->HeaderText = L"ID_Stock";
			this->ID_Stock->Name = L"ID_Stock";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(813, 58);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 22);
			this->button3->TabIndex = 4;
			this->button3->Text = L"CRUD Clients";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CRUD_Stock::button3_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(813, 83);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 22);
			this->button4->TabIndex = 5;
			this->button4->Text = L"CRUD Commandes";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CRUD_Stock::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->Location = System::Drawing::Point(812, 108);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 22);
			this->button5->TabIndex = 6;
			this->button5->Text = L"CRUD Stock";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(813, 133);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 22);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Statistiques";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &CRUD_Stock::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 22);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Hello , ";
			this->label1->Click += gcnew System::EventHandler(this, &CRUD_Stock::label1_Click);
			// 
			// CRUD_Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(962, 540);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(967, 579);
			this->Name = L"CRUD_Stock";
			this->Text = L"CRUD_Stock";
			this->Load += gcnew System::EventHandler(this, &CRUD_Stock::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void dataGridView1_CellContentClick_2(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// Vérifier si la clé "Statistiques" existe dans le dictionnaire
	if (Pages->ContainsKey("Statistiques")) {
		// Accéder à l'instance de Statistiques
		System::Windows::Forms::Form^ StatForm = Pages["Statistiques"];

		// Changer l'onglet vers l'instance de Statistiques
		if (StatForm != nullptr) {
			StatForm->Show();
			this->Hide(); // Cacher l'onglet actuel 
		}
	}
}
};
}
