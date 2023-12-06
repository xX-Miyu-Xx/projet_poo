#include "User.h"
#include <map>
#include <string>

#pragma once

namespace CRUD_User {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Description résumée de CRUD_User
	/// </summary>
	public ref class CRUD_User : public System::Windows::Forms::Form
	{
	public:
		CRUD_User(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			utilisateur = user;
			Pages = Ptr_Pages;
			this->label5->Text = (utilisateur->getID()).ToString();
			this->label6->Text = utilisateur->getNom();
			this->label7->Text = utilisateur->getPrenom();
			this->label8->Text = utilisateur->getTypeUtilisateur();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CRUD_User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: Dictionary<String^, Form^>^ Pages;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		Utilisateur^ utilisateur;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			   this->tableLayoutPanel1->ColumnCount = 2;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   31.81818F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   68.18182F)));
			   this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			   this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			   this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			   this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			   this->tableLayoutPanel1->Controls->Add(this->label5, 1, 0);
			   this->tableLayoutPanel1->Controls->Add(this->label6, 1, 1);
			   this->tableLayoutPanel1->Controls->Add(this->label7, 1, 2);
			   this->tableLayoutPanel1->Controls->Add(this->label8, 1, 3);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(-4, 56);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 4;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(389, 202);
			   this->tableLayoutPanel1->TabIndex = 0;
			   this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CRUD_User::tableLayoutPanel1_Paint);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label1->Location = System::Drawing::Point(4, 1);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(116, 49);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Identifiant :";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label2->Location = System::Drawing::Point(4, 51);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(116, 49);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Nom :";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label3->Location = System::Drawing::Point(4, 101);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(116, 49);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"Prenom :";
			   this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label4->Location = System::Drawing::Point(4, 151);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(116, 50);
			   this->label4->TabIndex = 3;
			   this->label4->Text = L"Droits d\'accès :";
			   this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label5->Location = System::Drawing::Point(127, 1);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(258, 49);
			   this->label5->TabIndex = 4;
			   this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label6->Location = System::Drawing::Point(127, 51);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(258, 49);
			   this->label6->TabIndex = 5;
			   this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label6->Click += gcnew System::EventHandler(this, &CRUD_User::label6_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label7->Location = System::Drawing::Point(127, 101);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(258, 49);
			   this->label7->TabIndex = 6;
			   this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->label8->Location = System::Drawing::Point(127, 151);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(258, 50);
			   this->label8->TabIndex = 7;
			   this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(12, 12);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(75, 23);
			   this->button1->TabIndex = 1;
			   this->button1->Text = L"Retour";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &CRUD_User::button1_Click);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(125, 19);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(165, 16);
			   this->label9->TabIndex = 2;
			   this->label9->Text = L"Informations Utilisateur";
			   // 
			   // CRUD_User
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(384, 256);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Name = L"CRUD_User";
			   this->Text = L"CRUD_User";
			   this->tableLayoutPanel1->ResumeLayout(false);
			   this->tableLayoutPanel1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "UsersPage" existe dans le dictionnaire
		if (Pages->ContainsKey("UsersPage")) {
			// Accéder à l'instance de UsersPage
			System::Windows::Forms::Form^ crudUserPageForm = Pages["UsersPage"];
			if (crudUserPageForm != nullptr) {
				crudUserPageForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
	};
}