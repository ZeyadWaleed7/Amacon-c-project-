#pragma once
#include "cash.h"
#include "card.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for payment
	/// </summary>
	public ref class payment : public System::Windows::Forms::Form
	{
	public:
		payment(void)
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
		~payment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(payment::typeid));
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->linkLabel1->Location = System::Drawing::Point(120, 168);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(27, 13);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"valu";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &payment::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->linkLabel2->Location = System::Drawing::Point(120, 212);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(35, 13);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Fawry";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &payment::linkLabel2_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->linkLabel3->Location = System::Drawing::Point(120, 260);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(52, 13);
			this->linkLabel3->TabIndex = 2;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"vodafone";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &payment::linkLabel3_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->linkLabel4->Location = System::Drawing::Point(120, 312);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(34, 13);
			this->linkLabel4->TabIndex = 3;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Apple";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &payment::linkLabel4_LinkClicked);
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->linkLabel5->LinkColor = System::Drawing::Color::Black;
			this->linkLabel5->Location = System::Drawing::Point(120, 369);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(73, 13);
			this->linkLabel5->TabIndex = 4;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"a pay it (soon)";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &payment::linkLabel5_LinkClicked);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(261, 194);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 86);
			this->button1->TabIndex = 5;
			this->button1->Text = L"cash";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &payment::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(485, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(179, 86);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Card";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &payment::button2_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(606, 26);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(58, 24);
			this->button10->TabIndex = 15;
			this->button10->Text = L"cart";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(448, 26);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(122, 24);
			this->button9->TabIndex = 14;
			this->button9->Text = L"customer service ";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// payment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel5);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"payment";
			this->Text = L"payment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		cash^ cashForm = gcnew cash();
		cashForm->Show();
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.valu.com.eg/home");

}

private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.myfawry.com/MyFawryWeb/home.jsp#/");

}
	   
private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://web.vodafone.com.eg/en/vodafone-cash");
}

private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.apple.com/apple-pay/");
}

private: System::Void linkLabel5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	card^ cardForm = gcnew card();
	cardForm->Show();
}
};
}
