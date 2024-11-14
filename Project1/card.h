#pragma once
#include "shipping.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for card
	/// </summary>
	public ref class card : public System::Windows::Forms::Form
	{
	public:
		card(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~card()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(card::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(43, 332);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(218, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(43, 405);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Location = System::Drawing::Point(404, 332);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 2;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(404, 369);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(165, 17);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"agree to terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &card::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(227, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Place order ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &card::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(575, 373);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"check the box first ";
			this->label1->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(448, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 24);
			this->button2->TabIndex = 7;
			this->button2->Text = L"customer service ";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(604, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 24);
			this->button3->TabIndex = 6;
			this->button3->Text = L"cart";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// card
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"card";
			this->Text = L"card";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = checkBox1->Checked;
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBox1->Checked) {
		label1->Visible = true;
		return;
	}
	shipping^ shippingForm = gcnew shipping();
	shippingForm->Show();
	
}

};
}
