#include "User.h"
#include "CRUD_Client.h"
#include <map>
#include <string>
#pragma once

namespace UsersPage {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for UsersPage
	/// </summary>
	public ref class UsersPage : public System::Windows::Forms::Form
	{
	public:
		UsersPage(Utilisateur^ user, Dictionary<String^, Form^>^% Ptr_Pages)
		{
			InitializeComponent();
			utilisateur = user;
			Pages = Ptr_Pages;
			this->label2->Text = "Hello " + utilisateur->getNom() + " " + utilisateur->getPrenom();
		}
	private: System::Windows::Forms::ListView^ listView1;
	public:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ AdminButton;

	private: Dictionary<String^, Form^>^ Pages;
	private: System::Windows::Forms::Label^ label2;

	public:

	private:
		Utilisateur^ utilisateur; // Store the Utilisateur^ locally in MyForm

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UsersPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Void UsersPage_Load(System::Object^ sender, System::EventArgs^ e) {
		// Masquer le bouton "Admin" si le nom de l'utilisateur n'est pas "admin"
		if (utilisateur != nullptr && utilisateur->getTypeUtilisateur() != "admin") {
			this->AdminButton->Visible = false;
		}
	}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AdminButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 31);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Logo";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(68, 175);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1810, 975);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1764, 38);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Panier";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1724, 88);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(194, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Client Info";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// AdminButton
			// 
			this->AdminButton->Location = System::Drawing::Point(1564, 63);
			this->AdminButton->Margin = System::Windows::Forms::Padding(6);
			this->AdminButton->Name = L"AdminButton";
			this->AdminButton->Size = System::Drawing::Size(122, 42);
			this->AdminButton->TabIndex = 4;
			this->AdminButton->Text = L"Admin";
			this->AdminButton->UseVisualStyleBackColor = true;
			this->AdminButton->Click += gcnew System::EventHandler(this, &UsersPage::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 25);
			this->label2->TabIndex = 5;
			this->label2->Click += gcnew System::EventHandler(this, &UsersPage::label2_Click);
			// 
			// UsersPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1062);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AdminButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1950, 1133);
			this->Name = L"UsersPage";
			this->Text = L"UsersPage";
			this->Load += gcnew System::EventHandler(this, &UsersPage::UsersPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier si la clé "CRUD_Client" existe dans le dictionnaire
		if (Pages->ContainsKey("CRUD_Client")) {
			// Accéder à l'instance de CRUD_Client
			System::Windows::Forms::Form^ crudClientForm = Pages["CRUD_Client"];
			if (crudClientForm != nullptr) {
				crudClientForm->Show();
				this->Hide(); // Cacher l'onglet actuel 
			}
		}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
