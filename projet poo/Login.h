#include "UsersPage.h"
#include "User.h"
#include "CRUD_CLient.h"
#include "CRUD_Personnel.h"
#include "CRUD_Commandes.h"
#include "CRUD_Stock.h"
#include "Statistiques.h"
#include "CRUD_User.h"
#include <map>
#include <string>
#pragma once

namespace Login {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	private:
		Utilisateur^ utilisateur; // Variable pour stocker l'utilisateur
		Dictionary<String^, Form^>^ Pages = gcnew Dictionary<String^, Form^>();

	public:
		property Utilisateur^ CurrentUser {
			Utilisateur^ get() {
				return utilisateur;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private: bool IsLogged;

	public:
		 bool getIsLogged(){
			return IsLogged;
		 }

		 // Méthode setter
		 void setIsLogged(bool var) {
			 IsLogged = var;
		 }

	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(139, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(570, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Please enter Your login and password";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(568, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"User";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(140, 230);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(568, 31);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"User";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(579, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(840, 413);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(866, 484);
			this->MinimumSize = System::Drawing::Size(866, 484);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Vérifier les identifiants (vous pouvez remplacer cela par votre propre logique)
		String^ enteredLogin = textBox1->Text;
		String^ enteredPassword = textBox2->Text;

		if (enteredLogin == "User" && enteredPassword == "User") {																						// a changer avec la bdd
			// Attribuer a la variable utilisateur, la personne qui s'est identifie pour pouvoir y acceder par la suite
			utilisateur = gcnew Utilisateur("Mark", 1, "Vassilenko", "user");
				
			// Créer une instance du formulaire MyForm
			Pages["UsersPage"] = gcnew UsersPage::UsersPage(utilisateur,Pages);
			Pages["CRUD_User"] = gcnew CRUD_User::CRUD_User(utilisateur, Pages);
			this->setIsLogged(true);

			// Afficher le formulaire MyForm
			Pages["UsersPage"]->Show();

			// Cacher le formulaire de connexion (Login)
			this->Hide();
		}
		else if (enteredLogin == "Admin" && enteredPassword == "Admin") {
			// Attribuer a la variable utilisateur, la personne qui s'est identifie pour pouvoir y acceder par la suite
			utilisateur = gcnew Utilisateur("Mark", 1, "Vassilenko", "admin");

			// Créer une instance du formulaire MyForm
			Pages["UsersPage"] = gcnew UsersPage::UsersPage(utilisateur, Pages);
			Pages["CRUD_Client"] = gcnew CRUD_Client::CRUD_Client(utilisateur, Pages);
			Pages["CRUD_Personnel"] = gcnew CRUD_Personnel::CRUD_Personnel(utilisateur, Pages);
			Pages["CRUD_Commandes"] = gcnew CRUD_Commandes::CRUD_Commandes(utilisateur, Pages);
			Pages["CRUD_Stock"] = gcnew CRUD_Stock::CRUD_Stock(utilisateur, Pages);
			Pages["Statistiques"] = gcnew Statistiques::Statistiques();
			Pages["CRUD_User"] = gcnew CRUD_User::CRUD_User(utilisateur, Pages);
			this->setIsLogged(true);

			// Afficher le formulaire MyForm
			Pages["UsersPage"]->Show();

			// Cacher le formulaire de connexion (Login)
			this->Hide();
		}
		else {
			// Afficher un message d'erreur si les identifiants sont incorrects
			MessageBox::Show("Invalid login or password. Please try again.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->setIsLogged(false);
		}																																			// jusqu'ici
	}																	


};
}
