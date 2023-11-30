#pragma once

#include "ThirdForm.h"

namespace projetpoo {

    public ref class SecondForm : public MyForm
    {
    public:
        SecondForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~SecondForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ button2;
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(1677, 12);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(96, 39);
            this->button2->TabIndex = 0;
            this->button2->Text = L"Go to Third Form";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &SecondForm::button2_Click);
            // 
            // SecondForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(1785, 1364);
            this->Controls->Add(this->button2);
            this->Name = L"SecondForm";
            this->Text = L"Second Form";
            this->ResumeLayout(false);
        }
#pragma endregion
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Перейти на третью форму
        ThirdForm^ thirdForm = gcnew ThirdForm();
        thirdForm->Show();
        this->Close();
    }
    };
}
