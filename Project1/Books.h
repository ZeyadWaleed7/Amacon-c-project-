#pragma once
#include "cart.h"
#include <msclr\marshal_cppstd.h> // Required for converting System::String^ to std::string
#include <fstream>
#include "customerser.h"
namespace Project1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Books
	/// </summary>
	public ref class Books : public System::Windows::Forms::Form
	{
	public:
		Books(void)
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
		~Books()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Books::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(658, 431);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 26);
			this->button4->TabIndex = 3;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Books::button4_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(562, 431);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 26);
			this->button8->TabIndex = 7;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Books::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(388, 431);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 26);
			this->button7->TabIndex = 6;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Books::button7_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(484, 431);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 26);
			this->button3->TabIndex = 2;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Books::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(312, 431);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 26);
			this->button2->TabIndex = 1;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Books::button2_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(217, 431);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 26);
			this->button6->TabIndex = 5;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Books::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(46, 431);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 26);
			this->button5->TabIndex = 4;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Books::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(140, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Books::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkOrange;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(102, 436);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"0";
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
			this->button9->TabIndex = 12;
			this->button9->Text = L"customer service ";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Books::button9_Click);
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
			this->button10->TabIndex = 13;
			this->button10->Text = L"cart";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Books::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkOrange;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(301, 463);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(127, 24);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Confirm books order ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Books::button11_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkOrange;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(271, 436);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 15);
			this->label2->TabIndex = 15;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkOrange;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(445, 436);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 15);
			this->label3->TabIndex = 16;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkOrange;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Location = System::Drawing::Point(619, 436);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 15);
			this->label4->TabIndex = 17;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label5->ForeColor = System::Drawing::Color::DarkOrange;
			this->label5->Location = System::Drawing::Point(67, 396);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"20";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label6->ForeColor = System::Drawing::Color::DarkOrange;
			this->label6->Location = System::Drawing::Point(239, 396);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"30";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label7->ForeColor = System::Drawing::Color::DarkOrange;
			this->label7->Location = System::Drawing::Point(409, 396);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"35";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label8->ForeColor = System::Drawing::Color::DarkOrange;
			this->label8->Location = System::Drawing::Point(587, 396);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"15";
			this->label8->Click += gcnew System::EventHandler(this, &Books::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::DarkOrange;
			this->label9->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label9->Location = System::Drawing::Point(43, 371);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"it starts with us 2022";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::DarkOrange;
			this->label10->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label10->Location = System::Drawing::Point(214, 371);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"it ends with us 2022";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::DarkOrange;
			this->label11->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label11->Location = System::Drawing::Point(385, 371);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Atomic Habits";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::DarkOrange;
			this->label12->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label12->Location = System::Drawing::Point(559, 371);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Harry potter";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::White;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(43, 347);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(94, 15);
			this->linkLabel1->TabIndex = 26;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"seller :A book";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Books::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->ForeColor = System::Drawing::Color::White;
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(214, 347);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(94, 15);
			this->linkLabel2->TabIndex = 27;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"seller :A book";
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->ForeColor = System::Drawing::Color::White;
			this->linkLabel3->LinkColor = System::Drawing::Color::White;
			this->linkLabel3->Location = System::Drawing::Point(385, 347);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(94, 15);
			this->linkLabel3->TabIndex = 28;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"seller :A book";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->ForeColor = System::Drawing::Color::White;
			this->linkLabel4->LinkColor = System::Drawing::Color::White;
			this->linkLabel4->Location = System::Drawing::Point(559, 347);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(94, 15);
			this->linkLabel4->TabIndex = 29;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"seller :A book";
			// 
			// Books
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->linkLabel3);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Books";
			this->Text = L"Books";
			this->Load += gcnew System::EventHandler(this, &Books::Books_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int itemCount1 = 0;
		int itemCount2 = 0;
		int itemCount3 = 0;
		int itemCount4 = 0;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
 // Increase the count of items
    itemCount1++;

    // Update the label to display the new count
    label1->Text = itemCount1.ToString();
	}
	private: System::Void Books_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount1 = Math::Max(itemCount1 - 1, 0);

	// Update the label to display the new count
    label1->Text = itemCount1.ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Increase the count of items
	itemCount2++;

	// Update the label to display the new count
	label2->Text = itemCount2.ToString();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount2 = Math::Max(itemCount2 - 1, 0);

	// Update the label to display the new count
	label2->Text = itemCount2.ToString();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Increase the count of items
	itemCount3++;

	// Update the label to display the new count
	label3->Text = itemCount3.ToString();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount3 = Math::Max(itemCount3 - 1, 0);

	// Update the label to display the new count
	label3->Text = itemCount3.ToString();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount4 = Math::Max(itemCount4 - 1, 0);

	// Update the label to display the new count
	label4->Text = itemCount4.ToString();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Increase the count of items
	itemCount4++;

	// Update the label to display the new count
	label4->Text = itemCount4.ToString();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the values from the labels
	String^ labelText1 = label1->Text;
	String^ labelText2 = label2->Text;
	String^ labelText3 = label3->Text;
	String^ labelText4 = label4->Text;
	String^ labelText5 = label5->Text;
	String^ labelText6 = label6->Text;
	String^ labelText7 = label7->Text;
	String^ labelText8 = label8->Text;
	String^ labelText9 = label9->Text;
	String^ labelText10 = label10->Text;
	String^ labelText11 = label11->Text;
	String^ labelText12 = label12->Text;

	// Parse the values to integers
	int value1 = System::Int32::Parse(labelText1);
	int value2 = System::Int32::Parse(labelText2);
	int value3 = System::Int32::Parse(labelText3);
	int value4 = System::Int32::Parse(labelText4);
	int value5 = System::Int32::Parse(labelText5);
	int value6 = System::Int32::Parse(labelText6);
	int value7 = System::Int32::Parse(labelText7);
	int value8 = System::Int32::Parse(labelText8);

	// Perform the multiplications
	int result1 = value1 * value5;
	int result2 = value2 * value6;
	int result3 = value3 * value7;
	int result4 = value4 * value8;

	// Save the results to the text file
	StreamWriter^ outfile = gcnew StreamWriter("calculations.txt", true); // true for append mode
	if (result1 > 0) {
		outfile->WriteLine(result1);
	}

	if (result2 > 0) {
		outfile->WriteLine(result2);
	}

	if (result3 > 0) {
		outfile->WriteLine(result3);
	}

	if (result4 > 0) {
		outfile->WriteLine(result4);
	}

	outfile->Close();
	// Save the label texts to separate files based on conditions
	if (value1 > 0) {
		StreamWriter^ cartFile1 = gcnew StreamWriter("cart.txt", true);
		cartFile1->WriteLine(labelText9);
		cartFile1->Close();
	}

	if (value2 > 0) {
		StreamWriter^ cartFile2 = gcnew StreamWriter("cart.txt", true);
		cartFile2->WriteLine(labelText10);
		cartFile2->Close();
	}

	if (value3 > 0) {
		StreamWriter^ cartFile3 = gcnew StreamWriter("cart.txt", true);
		cartFile3->WriteLine(labelText11);
		cartFile3->Close();
	}

	if (value4 > 0) {
		StreamWriter^ cartFile4 = gcnew StreamWriter("cart.txt", true);
		cartFile4->WriteLine(labelText12);
		cartFile4->Close();
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the tec form
	cart^ cartForm = gcnew cart();

	// Show the tec form
	cartForm->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	customerser^ csForm = gcnew customerser();

	// Show the food form
	csForm->Show();
}
};
}
