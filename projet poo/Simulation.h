#pragma once

#include "CLservices.h"
#include "User.h"
#include "Simulation.h"
#include <map>
#include <string>

namespace Simulation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Simulation
	/// </summary>
	public ref class Simulation : public System::Windows::Forms::Form
	{
	public:
		Simulation(System::Data::DataSet^ ptr_Ods, NS_Comp_Svc::CLservices^ ptr_Osvc, System::Windows::Forms::DataGridView^ ptr_dgv_enr)
		{
			InitializeComponent();
			oDs = ptr_Ods;
			oSvc = ptr_Osvc;
			dgv_enr = ptr_dgv_enr;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Simulation()
		{
			if (components)
			{
				delete components;
			}
		}

	private: int TVA=0, Marge=0, Remise=0, Demarque=0;
	private: bool TVA_bool = false, Marge_bool = false, Remise_bool = false, Demarque_bool = false;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button9;










	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(15, 91);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(916, 156);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Location = System::Drawing::Point(4, 5);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(288, 138);
			this->button1->TabIndex = 0;
			this->button1->Text = L"5%";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Simulation::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(300, 5);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(288, 138);
			this->button3->TabIndex = 2;
			this->button3->Text = L"10%";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Simulation::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(596, 5);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(288, 138);
			this->button2->TabIndex = 1;
			this->button2->Text = L"15%";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Simulation::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 29);
			this->label1->TabIndex = 12;
			this->label1->Text = L"TVA :";
			this->label1->Click += gcnew System::EventHandler(this, &Simulation::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 272);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(244, 29);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Marge Commerciale :";
			this->label2->Click += gcnew System::EventHandler(this, &Simulation::label2_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->button4);
			this->flowLayoutPanel2->Controls->Add(this->button5);
			this->flowLayoutPanel2->Controls->Add(this->button6);
			this->flowLayoutPanel2->Location = System::Drawing::Point(15, 327);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(916, 156);
			this->flowLayoutPanel2->TabIndex = 13;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(4, 5);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(288, 138);
			this->button4->TabIndex = 0;
			this->button4->Text = L"5%";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Simulation::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(300, 5);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(288, 138);
			this->button5->TabIndex = 2;
			this->button5->Text = L"10%";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Simulation::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(596, 5);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(288, 138);
			this->button6->TabIndex = 1;
			this->button6->Text = L"15%";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Simulation::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 511);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Remise Commerciale :";
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->button8);
			this->flowLayoutPanel3->Controls->Add(this->button7);
			this->flowLayoutPanel3->Location = System::Drawing::Point(20, 569);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(916, 156);
			this->flowLayoutPanel3->TabIndex = 15;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(4, 5);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(429, 138);
			this->button8->TabIndex = 2;
			this->button8->Text = L"5%";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Simulation::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(441, 5);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(429, 138);
			this->button7->TabIndex = 0;
			this->button7->Text = L"6%";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Simulation::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 750);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 29);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Demarque Inconnue :";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->button10);
			this->flowLayoutPanel4->Controls->Add(this->button11);
			this->flowLayoutPanel4->Controls->Add(this->button12);
			this->flowLayoutPanel4->Location = System::Drawing::Point(15, 803);
			this->flowLayoutPanel4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(916, 156);
			this->flowLayoutPanel4->TabIndex = 17;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(4, 5);
			this->button10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(288, 138);
			this->button10->TabIndex = 0;
			this->button10->Text = L"2%";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Simulation::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(300, 5);
			this->button11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(288, 138);
			this->button11->TabIndex = 2;
			this->button11->Text = L"3%";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Simulation::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(596, 5);
			this->button12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(288, 138);
			this->button12->TabIndex = 1;
			this->button12->Text = L"5%";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Simulation::button12_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Location = System::Drawing::Point(706, 994);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(192, 79);
			this->button9->TabIndex = 19;
			this->button9->Text = L"Valider et Simuler";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Simulation::button9_Click);
			// 
			// Simulation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 1092);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(946, 1163);
			this->MinimumSize = System::Drawing::Size(946, 1163);
			this->Name = L"Simulation";
			this->Text = L"Simulation";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TVA_bool == false || TVA !=5) {
			TVA_bool = true;
			TVA = 5;
			button1->BackColor = System::Drawing::Color::Green;
			button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			TVA_bool = false;
			TVA = 0;
			button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TVA_bool == false || TVA != 10) {
					TVA_bool = true;
					TVA = 10;
					button3->BackColor = System::Drawing::Color::Green;
					button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
						static_cast<System::Int32>(static_cast<System::Byte>(224)));
					button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
						static_cast<System::Int32>(static_cast<System::Byte>(224)));
				}
				else {
					TVA_bool = false;
					TVA = 0;
					button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
						static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
				}
		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TVA_bool == false || TVA != 15) {
			TVA_bool = true;
			TVA = 15;
			button2->BackColor = System::Drawing::Color::Green;
			button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			TVA_bool = false;
			TVA = 0;
			button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
			

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Marge_bool == false || Marge != 5) {
			Marge_bool = true;
			Marge = 5;
			button4->BackColor = System::Drawing::Color::Green;
			button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Marge_bool = false;
			Marge = 0;
			button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
	
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Marge_bool == false || Marge != 10) {
			Marge_bool = true;
			Marge = 10;
			button5->BackColor = System::Drawing::Color::Green;
			button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Marge_bool = false;
			Marge = 0;
			button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Marge_bool == false || Marge != 15) {
			Marge_bool = true;
			Marge = 15;
			button6->BackColor = System::Drawing::Color::Green;
			button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Marge_bool = false;
			Marge = 0;
			button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}


	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Remise_bool == false || Remise != 5) {
			Remise_bool = true;
			Remise = 5;
			button8->BackColor = System::Drawing::Color::Green;
			button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Remise_bool = false;
			Remise = 0;
			button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Remise_bool == false || Remise != 6) {
			Remise_bool = true;
			Remise = 6;
			button7->BackColor = System::Drawing::Color::Green;
			button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));

		}
		else {
			Remise_bool = false;
			Remise = 0;
			button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));

		}
	}


	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Demarque_bool == false || Demarque != 2) {
			Demarque_bool = true;
			Demarque = 2;
			button10->BackColor = System::Drawing::Color::Green;
			button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Demarque_bool = false;
			Demarque = 0;
			button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Demarque_bool == false || Demarque != 3) {
			Demarque_bool = true;
			Demarque = 3;
			button11->BackColor = System::Drawing::Color::Green;
			button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Demarque_bool = false;
			Demarque = 0;
			button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Demarque_bool == false || Demarque != 5) {
			Demarque_bool = true;
			Demarque = 5;
			button12->BackColor = System::Drawing::Color::Green;
			button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
		else {
			Demarque_bool = false;
			Demarque = 0;
			button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (TVA_bool == false || Marge_bool == false || Remise_bool == false || Demarque_bool == false) {
			MessageBox::Show("Veuillez remplir tous les champs");
		}
		else {
			this->dgv_enr->Refresh();
			this->oDs = this->oSvc->Simulation("RSL",TVA, Marge, Remise, Demarque);
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
	}
};
}
