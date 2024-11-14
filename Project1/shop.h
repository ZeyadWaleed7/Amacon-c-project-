#pragma once
#include "Books.h"
#include "tec.h"
#include "food.h"
#include "det.h"
#include "cash.h"
#include "cart.h"
#include "customerser.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for shop
	/// </summary>
	public ref class shop : public System::Windows::Forms::Form
	{
	public:
		shop(void)
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
		~shop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(shop::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(608, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(58, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"cart";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &shop::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(452, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 24);
			this->button2->TabIndex = 1;
			this->button2->Text = L"customer service ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &shop::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Orange;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(80, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Technology ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &shop::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Orange;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(239, 196);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Food ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &shop::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Orange;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(397, 196);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Detergent";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &shop::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Orange;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(558, 196);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Books";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &shop::button6_Click);
			// 
			// shop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"shop";
			this->Text = L"shop";
			this->Load += gcnew System::EventHandler(this, &shop::shop_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of the tec form
		cart^ cartForm = gcnew cart();

		// Show the tec form
		cartForm->Show();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		customerser^ csForm = gcnew customerser();

		// Show the food form
		csForm->Show();

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of the Books form
		Books^ booksForm = gcnew Books();

		// Show the Books form
		booksForm->Show();

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the tec form
	tec^ tecForm = gcnew tec();

	// Show the tec form
	tecForm->Show();
}
private: System::Void shop_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the food form
	food^ foodForm = gcnew food();

	// Show the food form
	foodForm->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the det form
	det^ detForm = gcnew det();

	// Show the det form
	detForm->Show();
}
};
}
