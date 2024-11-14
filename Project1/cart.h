#pragma once
#include "payment.h"
#include <msclr\marshal_cppstd.h> 
#include <fstream>
namespace Project1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cart
	/// </summary>
	public ref class cart : public System::Windows::Forms::Form
	{
	public:
		cart(void)
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
		~cart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cart::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(560, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"payment";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &cart::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(449, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 24);
			this->button2->TabIndex = 3;
			this->button2->Text = L"customer service ";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(605, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"cart";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(50, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(50, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkOrange;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(560, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 68);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Show order";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &cart::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(50, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(50, 267);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(50, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(50, 328);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(50, 357);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(50, 388);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(375, 98);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 20);
			this->label11->TabIndex = 15;
			this->label11->Text = L"label11";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(375, 132);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(67, 20);
			this->label12->TabIndex = 16;
			this->label12->Text = L"label12";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(375, 166);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 20);
			this->label13->TabIndex = 17;
			this->label13->Text = L"label13";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(375, 199);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 20);
			this->label14->TabIndex = 18;
			this->label14->Text = L"label14";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(375, 234);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 20);
			this->label15->TabIndex = 19;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(375, 267);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 20);
			this->label16->TabIndex = 20;
			this->label16->Text = L"label16";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(375, 298);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 20);
			this->label17->TabIndex = 21;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(375, 328);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 20);
			this->label18->TabIndex = 22;
			this->label18->Text = L"label18";
			this->label18->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(375, 357);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(67, 20);
			this->label19->TabIndex = 23;
			this->label19->Text = L"label19";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(375, 388);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 20);
			this->label20->TabIndex = 24;
			this->label20->Text = L"label20";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(196, 440);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(77, 24);
			this->label21->TabIndex = 25;
			this->label21->Text = L"label21";
			this->label21->Visible = false;
			// 
			// cart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"cart";
			this->Text = L"cart";
			this->Load += gcnew System::EventHandler(this, &cart::cart_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of the sign form
		payment^ paymentForm = gcnew payment();

		// Show the sign form
		paymentForm->Show();
	}
	private: System::Void cart_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Read the lines from the "cart.txt" file
		array<String^>^ cartLines = File::ReadAllLines("cart.txt");

		// Iterate over the lines and assign them to the labels
		for (int i = 0; i < cartLines->Length && i < 10; i++) {
			String^ labelText = cartLines[i];
			String^ labelName = "label" + (i + 1).ToString();

			// Find the label by name using Controls::Find and assign the text
			array<Control^>^ labelControls = this->Controls->Find(labelName, true);
			if (labelControls->Length > 0 && labelControls[0] != nullptr && labelControls[0]->GetType() == Label::typeid) {
				Label^ label = dynamic_cast<Label^>(labelControls[0]);
				label->Text = labelText;
				label->Visible = true; // Set the label to visible
			}
		}

		// Read the lines from the "calculations.txt" file
		array<String^>^ calculationsLines = File::ReadAllLines("calculations.txt");
		int sum = 0;

		// Iterate over the lines and assign the numbers to the labels
		for (int i = 0; i < calculationsLines->Length && i < 10; i++) {
			int number = Int32::Parse(calculationsLines[i]);
			if (number != 0) {
				String^ labelName = "label" + (i + 11).ToString();

				// Find the label by name using Controls::Find and assign the number
				array<Control^>^ labelControls = this->Controls->Find(labelName, true);
				if (labelControls->Length > 0 && labelControls[0] != nullptr && labelControls[0]->GetType() == Label::typeid) {
					Label^ label = dynamic_cast<Label^>(labelControls[0]);
					label->Text = number.ToString();
					label->Visible = true; // Set the label to visible

					sum += number; // Add the number to the sum
				}
			}
		}

		// Display the sum on label21
		label21->Text = sum.ToString();
		label21->Visible = true;
	}

};
}
