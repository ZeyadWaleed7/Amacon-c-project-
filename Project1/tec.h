#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tec
	/// </summary>
	public ref class tec : public System::Windows::Forms::Form
	{
	public:
		tec(void)
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
		~tec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button10;
	protected:
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tec::typeid));
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(607, 25);
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
			this->button9->Location = System::Drawing::Point(449, 25);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(122, 24);
			this->button9->TabIndex = 14;
			this->button9->Text = L"customer service ";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::DarkOrange;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Location = System::Drawing::Point(617, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 15);
			this->label4->TabIndex = 30;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::DarkOrange;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(446, 435);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 15);
			this->label3->TabIndex = 29;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkOrange;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(272, 435);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 15);
			this->label2->TabIndex = 28;
			this->label2->Text = L"0";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkOrange;
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(302, 462);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(127, 24);
			this->button11->TabIndex = 27;
			this->button11->Text = L"Confirm tec order ";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkOrange;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(103, 435);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 15);
			this->label1->TabIndex = 26;
			this->label1->Text = L"0";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(563, 430);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 26);
			this->button8->TabIndex = 25;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &tec::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(389, 430);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 26);
			this->button7->TabIndex = 24;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &tec::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(218, 430);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 26);
			this->button6->TabIndex = 23;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &tec::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(47, 430);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(25, 26);
			this->button5->TabIndex = 22;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &tec::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(659, 430);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(25, 26);
			this->button4->TabIndex = 21;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &tec::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(485, 430);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(25, 26);
			this->button3->TabIndex = 20;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &tec::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(313, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(25, 26);
			this->button2->TabIndex = 19;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &tec::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(141, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 26);
			this->button1->TabIndex = 18;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &tec::button1_Click);
			// 
			// tec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(734, 496);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Name = L"tec";
			this->Text = L"tec";
			this->Load += gcnew System::EventHandler(this, &tec::tec_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int itemCount1 = 0;
		int itemCount2 = 0;
		int itemCount3 = 0;
		int itemCount4 = 0;
	private: System::Void tec_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		itemCount4++;
		label4->Text = itemCount4.ToString();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount1++;
	label1->Text = itemCount1.ToString();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount2++;
	label2->Text = itemCount2.ToString();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount3++;
	label3->Text = itemCount3.ToString();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount1 = Math::Max(itemCount1 - 1, 0);
	label1->Text = itemCount1.ToString();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount2 = Math::Max(itemCount2 - 1, 0);
	label2->Text = itemCount2.ToString();
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount3 = Math::Max(itemCount3 - 1, 0);
	label3->Text = itemCount3.ToString();
}

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	itemCount4= Math::Max(itemCount4- 1, 0);
	label4->Text = itemCount4.ToString();
}
};
}
