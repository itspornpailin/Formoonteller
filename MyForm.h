#pragma once

#include <string>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
	private: System::Windows::Forms::Label^ greetings;
	private: System::Windows::Forms::Button^ buttonNext3;
	private: System::Windows::Forms::Button^ buttonRestart1;
	private: System::Windows::Forms::PictureBox^ pictureBoxPast;
	private: System::Windows::Forms::PictureBox^ pictureBoxPresent;
	private: System::Windows::Forms::PictureBox^ pictureBoxFuture;
	private: System::Windows::Forms::Button^ buttonRestart2;
	private: System::Windows::Forms::Button^ buttonRetry1;

		char genderChar;
		String^ nameString;
		String^ greetingMessage;
		int selectedDay;
		String^ selectedMonth;
		int selectedYear;

		String^ YourZodiac() {
			String^ ZodiacSign;

			if ((selectedMonth == "March" && selectedDay >= 21) || (selectedMonth == "April" && selectedDay <= 19))
				ZodiacSign = "Aries";
			else if ((selectedMonth == "April" && selectedDay >= 20) || (selectedMonth == "May" && selectedDay <= 20))
				ZodiacSign = "Taurus";
			else if ((selectedMonth == "May" && selectedDay >= 21) || (selectedMonth == "June" && selectedDay <= 20))
				ZodiacSign = "Gemini";
			else if ((selectedMonth == "June" && selectedDay >= 21) || (selectedMonth == "July" && selectedDay <= 22))
				ZodiacSign = "Cancer";
			else if ((selectedMonth == "July" && selectedDay >= 23) || (selectedMonth == "August" && selectedDay <= 22))
				ZodiacSign = "Leo";
			else if ((selectedMonth == "August" && selectedDay >= 23) || (selectedMonth == "September" && selectedDay <= 22))
				ZodiacSign = "Virgo";
			else if ((selectedMonth == "September" && selectedDay >= 23) || (selectedMonth == "October" && selectedDay <= 22))
				ZodiacSign = "Libra";
			else if ((selectedMonth == "October" && selectedDay >= 23) || (selectedMonth == "November" && selectedDay <= 21))
				ZodiacSign = "Scorpio";
			else if ((selectedMonth == "November" && selectedDay >= 22) || (selectedMonth == "December" && selectedDay <= 21))
				ZodiacSign = "Sagittarius";
			else if ((selectedMonth == "December" && selectedDay >= 22) || (selectedMonth == "January" && selectedDay <= 19))
				ZodiacSign = "Capricorn";
			else if ((selectedMonth == "January" && selectedDay >= 20) || (selectedMonth == "February" && selectedDay <= 18))
				ZodiacSign = "Aquarius";
			else if ((selectedMonth == "February" && selectedDay >= 19) || (selectedMonth == "March" && selectedDay <= 20))
				ZodiacSign = "Pisces";
			else
				ZodiacSign = "not calculated due to invalid date.";

			return ZodiacSign;
		}

		String^ zodiacSign;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			array<String^>^ months = gcnew array<String^>(12) {
				"January",
				"February",
				"March",
				"April",
				"May",
				"June",
				"July",
				"August",
				"September",
				"October",
				"November",
				"December"
			};

			for (int i = 1; i <= 31; i++) {
				comboBoxDay->Items->Add(i);
			}

			for (int i = 0; i < 12; i++) {
				comboBoxMonth->Items->Add(months[i]);
			}

			for (int i = 1960; i <= 2024; i++) {
				comboBoxYear->Items->Add(i);
			}

			zodiacSign = YourZodiac();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	
	protected:

	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ gender;
	private: System::Windows::Forms::RadioButton^ radioButtonMale;
	private: System::Windows::Forms::RadioButton^ radioButtonFemale;
	private: System::Windows::Forms::RadioButton^ radioButtonOther;
	private: System::Windows::Forms::Button^ buttonNext1;
	private: System::Windows::Forms::ComboBox^ comboBoxDay;
	private: System::Windows::Forms::ComboBox^ comboBoxMonth;
	private: System::Windows::Forms::ComboBox^ comboBoxYear;
	private: System::Windows::Forms::Button^ buttonNext2;
	private: System::Windows::Forms::Label^ day;
	private: System::Windows::Forms::Label^ month;
	private: System::Windows::Forms::Label^ year;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->title = (gcnew System::Windows::Forms::Label());
			this->start = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->name = (gcnew System::Windows::Forms::Label());
			this->gender = (gcnew System::Windows::Forms::Label());
			this->radioButtonMale = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFemale = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOther = (gcnew System::Windows::Forms::RadioButton());
			this->buttonNext1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxDay = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxMonth = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxYear = (gcnew System::Windows::Forms::ComboBox());
			this->buttonNext2 = (gcnew System::Windows::Forms::Button());
			this->day = (gcnew System::Windows::Forms::Label());
			this->month = (gcnew System::Windows::Forms::Label());
			this->year = (gcnew System::Windows::Forms::Label());
			this->greetings = (gcnew System::Windows::Forms::Label());
			this->buttonNext3 = (gcnew System::Windows::Forms::Button());
			this->buttonRestart1 = (gcnew System::Windows::Forms::Button());
			this->pictureBoxPast = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPresent = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFuture = (gcnew System::Windows::Forms::PictureBox());
			this->buttonRestart2 = (gcnew System::Windows::Forms::Button());
			this->buttonRetry1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPast))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPresent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFuture))->BeginInit();
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->title->Location = System::Drawing::Point(165, 55);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(336, 58);
			this->title->TabIndex = 0;
			this->title->Text = L"Formoonteller";
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(239, 336);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(107, 37);
			this->start->TabIndex = 1;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(61, 182);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(285, 22);
			this->textBoxName->TabIndex = 2;
			this->textBoxName->Visible = false;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxName_TextChanged);
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->name->Location = System::Drawing::Point(57, 156);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(100, 23);
			this->name->TabIndex = 3;
			this->name->Text = L"Name *";
			this->name->Visible = false;
			// 
			// gender
			// 
			this->gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->gender->Location = System::Drawing::Point(58, 225);
			this->gender->Name = L"gender";
			this->gender->Size = System::Drawing::Size(100, 23);
			this->gender->TabIndex = 4;
			this->gender->Text = L"Gender *";
			this->gender->Visible = false;
			// 
			// radioButtonMale
			// 
			this->radioButtonMale->AutoSize = true;
			this->radioButtonMale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->radioButtonMale->Location = System::Drawing::Point(62, 251);
			this->radioButtonMale->Name = L"radioButtonMale";
			this->radioButtonMale->Size = System::Drawing::Size(59, 21);
			this->radioButtonMale->TabIndex = 5;
			this->radioButtonMale->TabStop = true;
			this->radioButtonMale->Text = L"Male";
			this->radioButtonMale->UseVisualStyleBackColor = true;
			this->radioButtonMale->Visible = false;
			this->radioButtonMale->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonMale_CheckedChanged);
			// 
			// radioButtonFemale
			// 
			this->radioButtonFemale->AutoSize = true;
			this->radioButtonFemale->Location = System::Drawing::Point(62, 278);
			this->radioButtonFemale->Name = L"radioButtonFemale";
			this->radioButtonFemale->Size = System::Drawing::Size(74, 20);
			this->radioButtonFemale->TabIndex = 6;
			this->radioButtonFemale->TabStop = true;
			this->radioButtonFemale->Text = L"Female";
			this->radioButtonFemale->UseVisualStyleBackColor = true;
			this->radioButtonFemale->Visible = false;
			this->radioButtonFemale->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonFemale_CheckedChanged);
			// 
			// radioButtonOther
			// 
			this->radioButtonOther->AutoSize = true;
			this->radioButtonOther->Location = System::Drawing::Point(62, 304);
			this->radioButtonOther->Name = L"radioButtonOther";
			this->radioButtonOther->Size = System::Drawing::Size(60, 20);
			this->radioButtonOther->TabIndex = 7;
			this->radioButtonOther->TabStop = true;
			this->radioButtonOther->Text = L"Other";
			this->radioButtonOther->UseVisualStyleBackColor = true;
			this->radioButtonOther->Visible = false;
			this->radioButtonOther->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonOther_CheckedChanged);
			// 
			// buttonNext1
			// 
			this->buttonNext1->Location = System::Drawing::Point(408, 336);
			this->buttonNext1->Name = L"buttonNext1";
			this->buttonNext1->Size = System::Drawing::Size(107, 37);
			this->buttonNext1->TabIndex = 8;
			this->buttonNext1->Text = L"Next";
			this->buttonNext1->UseVisualStyleBackColor = true;
			this->buttonNext1->Visible = false;
			this->buttonNext1->Click += gcnew System::EventHandler(this, &MyForm::buttonNext1_Click);
			// 
			// comboBoxDay
			// 
			this->comboBoxDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->comboBoxDay->FormattingEnabled = true;
			this->comboBoxDay->Location = System::Drawing::Point(61, 116);
			this->comboBoxDay->Name = L"comboBoxDay";
			this->comboBoxDay->Size = System::Drawing::Size(121, 24);
			this->comboBoxDay->TabIndex = 9;
			this->comboBoxDay->Visible = false;
			this->comboBoxDay->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxDay_SelectedIndexChanged);
			// 
			// comboBoxMonth
			// 
			this->comboBoxMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->comboBoxMonth->FormattingEnabled = true;
			this->comboBoxMonth->Location = System::Drawing::Point(239, 116);
			this->comboBoxMonth->Name = L"comboBoxMonth";
			this->comboBoxMonth->Size = System::Drawing::Size(121, 24);
			this->comboBoxMonth->TabIndex = 10;
			this->comboBoxMonth->Visible = false;
			this->comboBoxMonth->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxMonth_SelectedIndexChanged);
			// 
			// comboBoxYear
			// 
			this->comboBoxYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->comboBoxYear->FormattingEnabled = true;
			this->comboBoxYear->Location = System::Drawing::Point(408, 116);
			this->comboBoxYear->Name = L"comboBoxYear";
			this->comboBoxYear->Size = System::Drawing::Size(121, 24);
			this->comboBoxYear->TabIndex = 11;
			this->comboBoxYear->Visible = false;
			this->comboBoxYear->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxYear_SelectedIndexChanged);
			// 
			// buttonNext2
			// 
			this->buttonNext2->Location = System::Drawing::Point(408, 336);
			this->buttonNext2->Name = L"buttonNext2";
			this->buttonNext2->Size = System::Drawing::Size(107, 37);
			this->buttonNext2->TabIndex = 12;
			this->buttonNext2->Text = L"Next";
			this->buttonNext2->UseVisualStyleBackColor = true;
			this->buttonNext2->Visible = false;
			this->buttonNext2->Click += gcnew System::EventHandler(this, &MyForm::buttonNext2_Click);
			// 
			// day
			// 
			this->day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->day->Location = System::Drawing::Point(59, 90);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(100, 23);
			this->day->TabIndex = 13;
			this->day->Text = L"Day *";
			this->day->Visible = false;
			// 
			// month
			// 
			this->month->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->month->Location = System::Drawing::Point(238, 90);
			this->month->Name = L"month";
			this->month->Size = System::Drawing::Size(100, 23);
			this->month->TabIndex = 14;
			this->month->Text = L"Month *";
			this->month->Visible = false;
			// 
			// year
			// 
			this->year->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->year->Location = System::Drawing::Point(406, 90);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 23);
			this->year->TabIndex = 15;
			this->year->Text = L"Year *";
			this->year->Visible = false;
			// 
			// greetings
			// 
			this->greetings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->greetings->Location = System::Drawing::Point(142, 143);
			this->greetings->Name = L"greetings";
			this->greetings->Size = System::Drawing::Size(329, 205);
			this->greetings->TabIndex = 16;
			this->greetings->Visible = false;
			// 
			// buttonNext3
			// 
			this->buttonNext3->Location = System::Drawing::Point(422, 336);
			this->buttonNext3->Name = L"buttonNext3";
			this->buttonNext3->Size = System::Drawing::Size(107, 37);
			this->buttonNext3->TabIndex = 17;
			this->buttonNext3->Text = L"Next";
			this->buttonNext3->UseVisualStyleBackColor = true;
			this->buttonNext3->Visible = false;
			this->buttonNext3->Click += gcnew System::EventHandler(this, &MyForm::buttonNext3_Click);
			// 
			// buttonRestart1
			// 
			this->buttonRestart1->Location = System::Drawing::Point(295, 336);
			this->buttonRestart1->Name = L"buttonRestart1";
			this->buttonRestart1->Size = System::Drawing::Size(107, 37);
			this->buttonRestart1->TabIndex = 18;
			this->buttonRestart1->Text = L"Restart";
			this->buttonRestart1->UseVisualStyleBackColor = true;
			this->buttonRestart1->Visible = false;
			this->buttonRestart1->Click += gcnew System::EventHandler(this, &MyForm::buttonRestart1_Click);
			// 
			// pictureBoxPast
			// 
			this->pictureBoxPast->Location = System::Drawing::Point(31, 60);
			this->pictureBoxPast->Name = L"pictureBoxPast";
			this->pictureBoxPast->Size = System::Drawing::Size(151, 264);
			this->pictureBoxPast->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxPast->TabIndex = 19;
			this->pictureBoxPast->TabStop = false;
			this->pictureBoxPast->Visible = false;
			// 
			// pictureBoxPresent
			// 
			this->pictureBoxPresent->Location = System::Drawing::Point(219, 60);
			this->pictureBoxPresent->Name = L"pictureBoxPresent";
			this->pictureBoxPresent->Size = System::Drawing::Size(151, 264);
			this->pictureBoxPresent->TabIndex = 20;
			this->pictureBoxPresent->TabStop = false;
			this->pictureBoxPresent->Visible = false;
			// 
			// pictureBoxFuture
			// 
			this->pictureBoxFuture->Location = System::Drawing::Point(410, 60);
			this->pictureBoxFuture->Name = L"pictureBoxFuture";
			this->pictureBoxFuture->Size = System::Drawing::Size(151, 264);
			this->pictureBoxFuture->TabIndex = 21;
			this->pictureBoxFuture->TabStop = false;
			this->pictureBoxFuture->Visible = false;
			// 
			// buttonRestart2
			// 
			this->buttonRestart2->Location = System::Drawing::Point(295, 336);
			this->buttonRestart2->Name = L"buttonRestart2";
			this->buttonRestart2->Size = System::Drawing::Size(107, 37);
			this->buttonRestart2->TabIndex = 22;
			this->buttonRestart2->Text = L"Restart";
			this->buttonRestart2->UseVisualStyleBackColor = true;
			this->buttonRestart2->Visible = false;
			this->buttonRestart2->Click += gcnew System::EventHandler(this, &MyForm::buttonRestart2_Click);
			// 
			// buttonRetry1
			// 
			this->buttonRetry1->Location = System::Drawing::Point(422, 336);
			this->buttonRetry1->Name = L"buttonRetry1";
			this->buttonRetry1->Size = System::Drawing::Size(107, 37);
			this->buttonRetry1->TabIndex = 23;
			this->buttonRetry1->Text = L"Retry";
			this->buttonRetry1->UseVisualStyleBackColor = true;
			this->buttonRetry1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(582, 453);
			this->Controls->Add(this->buttonRetry1);
			this->Controls->Add(this->buttonRestart2);
			this->Controls->Add(this->pictureBoxFuture);
			this->Controls->Add(this->pictureBoxPresent);
			this->Controls->Add(this->pictureBoxPast);
			this->Controls->Add(this->buttonRestart1);
			this->Controls->Add(this->buttonNext3);
			this->Controls->Add(this->greetings);
			this->Controls->Add(this->year);
			this->Controls->Add(this->month);
			this->Controls->Add(this->day);
			this->Controls->Add(this->buttonNext2);
			this->Controls->Add(this->comboBoxYear);
			this->Controls->Add(this->comboBoxMonth);
			this->Controls->Add(this->comboBoxDay);
			this->Controls->Add(this->buttonNext1);
			this->Controls->Add(this->radioButtonOther);
			this->Controls->Add(this->radioButtonFemale);
			this->Controls->Add(this->radioButtonMale);
			this->Controls->Add(this->gender);
			this->Controls->Add(this->name);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->title);
			this->Controls->Add(this->start);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPast))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPresent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFuture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		title->Visible = false;
		start->Visible = false;

		name->Visible = true;
		textBoxName->Visible = true;
		gender->Visible = true;
		radioButtonMale->Visible = true;
		radioButtonFemale->Visible = true;
		radioButtonOther->Visible = true;
		buttonNext1->Visible = true;
	}

	private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		nameString = textBoxName->Text;
	}

	private: System::Void radioButtonMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonMale->Checked) {
			genderChar = 'M';
		}
	}

	private: System::Void radioButtonFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonFemale->Checked) {
			genderChar = 'F';
		}
	}

	private: System::Void radioButtonOther_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonOther->Checked) {
			genderChar = 'O';
		}
	}

	private: System::Void buttonNext1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxName->Text == "" || (!radioButtonMale->Checked && !radioButtonFemale->Checked && !radioButtonOther->Checked)) {
			MessageBox::Show("Please enter your name and select a gender.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		name->Visible = false;
		textBoxName->Visible = false;
		gender->Visible = false;
		radioButtonMale->Visible = false;
		radioButtonFemale->Visible = false;
		radioButtonOther->Visible = false;
		buttonNext1->Visible = false;

		day->Visible = true;
		month->Visible = true;
		year->Visible = true;
		comboBoxDay->Visible = true;
		comboBoxMonth->Visible = true;
		comboBoxYear->Visible = true;
		buttonNext2->Visible = true;
	}

	private: System::Void comboBoxDay_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedDay = (Convert::ToInt32(comboBoxDay->SelectedIndex)) + 1;
	}

	private: System::Void comboBoxMonth_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedMonth = comboBoxMonth->SelectedItem->ToString();
	}

	private: System::Void comboBoxYear_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		selectedYear = Convert::ToInt32(comboBoxYear->SelectedIndex);
	}
	private: System::Void buttonNext2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxDay->SelectedItem == nullptr || comboBoxMonth->SelectedItem == nullptr || comboBoxYear->SelectedItem == nullptr) {
			MessageBox::Show("Please select your birthday.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		day->Visible = false;
		month->Visible = false;
		year->Visible = false;
		comboBoxDay->Visible = false;
		comboBoxMonth->Visible = false;
		comboBoxYear->Visible = false;
		buttonNext2->Visible = false;

		buttonRestart1->Visible = true;
		buttonNext3->Visible = true;
		greetings->Visible = true;

		greetingMessage = "Hello ";
		if (genderChar == 'M') {
			greetingMessage += "Mr. " + nameString + "\n";
		}
		else if (genderChar == 'F') {
			greetingMessage += "Ms. " + nameString + "\n";
		}
		else if (genderChar == 'O') {
			greetingMessage += nameString + "\n";
		}

		greetingMessage += "Your Zodiac Sign is ";

		greetings->Text = greetingMessage + zodiacSign + selectedDay + selectedMonth;
	}

    private: System::Void buttonNext3_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonNext3->Visible = false;
		greetings->Visible = false;
		buttonRestart1->Visible = false;

		buttonRetry1->Visible = true;
		buttonRestart1->Visible = true;
		pictureBoxPast->Visible = true;
		pictureBoxPresent->Visible = true;
		pictureBoxFuture->Visible = true;
    }
    private: System::Void buttonRestart1_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonNext3->Visible = false;
		greetings->Visible = false;
		buttonRestart1->Visible = false;
		pictureBoxPast->Visible = false;
		pictureBoxPresent->Visible = false;
		pictureBoxFuture->Visible = false;
		buttonRetry1->Visible = false;

		buttonRestart1->Visible = false;
		title->Visible = true;
		start->Visible = true;
    }
    private: System::Void buttonRestart2_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonRetry1->Visible = false;
		buttonRestart2->Visible = false;
		pictureBoxPast->Visible = false;
		pictureBoxPresent->Visible = false;
		pictureBoxFuture->Visible = false;

		title->Visible = true;
		start->Visible = true;
    }

};
}
