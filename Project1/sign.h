#pragma once
#include "shop.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <list>
#include <vector>
using namespace System::IO;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sign
	/// </summary>
	public ref class sign : public System::Windows::Forms::Form
	{
	public:
		sign(void)
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
		~sign()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sign::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(214, 214);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(214, 292);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(214, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 25);
			this->button1->TabIndex = 3;
			this->button1->Text = L"create account";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &sign::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(320, 217);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"This username is already in use";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &sign::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(320, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(476, 346);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(37, 12);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Login";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &sign::linkLabel1_LinkClicked);
			// 
			// sign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"sign";
			this->Text = L"sign";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text1 = textBox1->Text;
		String^ text2 = textBox2->Text;

		// Read the existing usernames from the file
		std::ifstream file("data.txt");
		std::string line;
		std::vector<std::string> usernames;

		if (file.is_open()) {
			while (std::getline(file, line)) {
				std::size_t pos = line.find(",");
				if (pos != std::string::npos) {
					std::string username = line.substr(0, pos);
					usernames.push_back(username);
				}
			}
			file.close();
		}

		// Check if the entered username is already used
		std::string enteredUsername = msclr::interop::marshal_as<std::string>(text1);
		if (std::find(usernames.begin(), usernames.end(), enteredUsername) != usernames.end()) {
			label1->Visible = true;  // Display label1 indicating the username is already used
			return;  // Stop execution without saving the new information
		}

		// Check if textbox2 contains at least 8 characters or integers
		if (text2->Length >= 8 && System::Text::RegularExpressions::Regex::IsMatch(text2, "^[a-zA-Z0-9]*$")) {
			// Write the information from textbox1 and textbox2 to the data file
			StreamWriter^ outfile = gcnew StreamWriter("data.txt", true); // true for append mode
			String^ data = text1 + "," + text2;
			outfile->WriteLine(data);
			outfile->Close();

			// Open the shop form
			shop^ newForm = gcnew shop();
			newForm->Show();
		}
		else {
			// Display an error message
			label2->Visible = true;
			label2->Text = "Please enter at least 8 integers/letters";
		}
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
