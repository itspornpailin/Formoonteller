#pragma once

namespace Formoonteller {

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
	private: System::Windows::Forms::Button^ buttonNext1;
	private: System::Windows::Forms::Panel^ panelTwo;
	private: System::Windows::Forms::Label^ labelBirthday;
	private: System::Windows::Forms::ComboBox^ comboBoxDay;
	private: System::Windows::Forms::Label^ labelDay;
	private: System::Windows::Forms::ComboBox^ comboBoxYear;
	private: System::Windows::Forms::ComboBox^ comboBoxMonth;
	private: System::Windows::Forms::Label^ labelMonth;
	private: System::Windows::Forms::Label^ labelYear;
	private: System::Windows::Forms::Button^ buttonNext2;
	private: System::Windows::Forms::Panel^ panelThree;
	private: System::Windows::Forms::Label^ labelSummary;
	private: System::Windows::Forms::Button^ buttonNext3;
	private: System::Windows::Forms::Button^ buttonBack2;
	private: System::Windows::Forms::Panel^ panelFour;
	private: System::Windows::Forms::PictureBox^ pictureBoxPast;
	private: System::Windows::Forms::PictureBox^ pictureBoxFuture;
	private: System::Windows::Forms::PictureBox^ pictureBoxPresent;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonRestart2;
	private: System::Windows::Forms::Button^ buttonRetry;

		   String^ userName;
		   char userGender;
		   int userDay;
		   String^ userMonth;
		   int userYear;
		   String^ userSummary;
		   int monthNumbers;
		   String^ userZodiac;
		   array<Image^>^ pictureArrayPast = gcnew array<Image^>(44);
		   array<Image^>^ pictureArrayPresent = gcnew array<Image^>(44);
		   array<Image^>^ pictureArrayFuture = gcnew array<Image^>(44);
		   Random^ rnd = gcnew Random();
		   int randomPast = rnd->Next(0, pictureArrayPast->Length);
		   int randomPresent = rnd->Next(0, pictureArrayPresent->Length);
		   int randomFuture = rnd->Next(0, pictureArrayFuture->Length);
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			array<String^>^ monthNames = gcnew array<String^>(12) {
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
				comboBoxMonth->Items->Add(monthNames[i]);
			}
			for (int i = 1960; i <= 2024; i++) {
				comboBoxYear->Items->Add(i);
			}
			pictureArrayPast[0] = Image::FromFile("BalsamicMoon_Past.png");
			pictureArrayPast[1] = Image::FromFile("BlueMoon_Past.png");
			pictureArrayPast[2] = Image::FromFile("CardinalMoon_Past.png");
			pictureArrayPast[3] = Image::FromFile("DisseminatingMoon_Past.png");
			pictureArrayPast[4] = Image::FromFile("FirstQuarterMoon_Past.png");
			pictureArrayPast[5] = Image::FromFile("FixedMoon_Past.png");
			pictureArrayPast[6] = Image::FromFile("FullMoon_Past.png");
			pictureArrayPast[7] = Image::FromFile("FullMoonEclipse_Past.png");
			pictureArrayPast[8] = Image::FromFile("FullMoonInAquarius_Past.png");
			pictureArrayPast[9] = Image::FromFile("FullMoonInAries_Past.png");
			pictureArrayPast[10] = Image::FromFile("FullMoonInCancer_Past.png");
			pictureArrayPast[11] = Image::FromFile("FullMoonInCapricorn_Past.png");
			pictureArrayPast[12] = Image::FromFile("FullMoonInGemini_Past.png");
			pictureArrayPast[13] = Image::FromFile("FullMoonInLeo_Past.png");
			pictureArrayPast[14] = Image::FromFile("FullMoonInLibra_Past.png");
			pictureArrayPast[15] = Image::FromFile("FullMoonInPisces_Past.png");
			pictureArrayPast[16] = Image::FromFile("FullMoonInSagittarius_Past.png");
			pictureArrayPast[17] = Image::FromFile("FullMoonInScorpio_Past.png");
			pictureArrayPast[18] = Image::FromFile("FullMoonInTaurus_Past.png");
			pictureArrayPast[19] = Image::FromFile("FullMoonInVirgo_Past.png");
			pictureArrayPast[20] = Image::FromFile("GibbousMoon_Past.png");
			pictureArrayPast[21] = Image::FromFile("MutableMoon_Past.png");
			pictureArrayPast[22] = Image::FromFile("NewMoon_Past.png");
			pictureArrayPast[23] = Image::FromFile("NewMoonEclipse_Past.png");
			pictureArrayPast[24] = Image::FromFile("NewMoonInAquarius_Past.png");
			pictureArrayPast[25] = Image::FromFile("NewMoonInAries_Past.png");
			pictureArrayPast[26] = Image::FromFile("NewMoonInCancer_Past.png");
			pictureArrayPast[27] = Image::FromFile("NewMoonInCapricorn_Past.png");
			pictureArrayPast[28] = Image::FromFile("NewMoonInGemini_Past.png");
			pictureArrayPast[29] = Image::FromFile("NewMoonInLeo_Past.png");
			pictureArrayPast[30] = Image::FromFile("NewMoonInLibra_Past.png");
			pictureArrayPast[31] = Image::FromFile("NewMoonInPisces_Past.png");
			pictureArrayPast[32] = Image::FromFile("NewMoonInSagittarius_Past.png");
			pictureArrayPast[33] = Image::FromFile("NewMoonInScorpio_Past.png");
			pictureArrayPast[34] = Image::FromFile("NewMoonInTaurus_Past.png");
			pictureArrayPast[35] = Image::FromFile("NewMoonInVirgo_Past.png");
			pictureArrayPast[36] = Image::FromFile("NorthNode_Past.png");
			pictureArrayPast[37] = Image::FromFile("SouthNode_Past.png");
			pictureArrayPast[38] = Image::FromFile("Supermoon_Past.png");
			pictureArrayPast[39] = Image::FromFile("ThirdQuarterMoon_Past.png");
			pictureArrayPast[40] = Image::FromFile("Void-Of-CourseMoon_Past.png");
			pictureArrayPast[41] = Image::FromFile("WaningMoon_Past.png");
			pictureArrayPast[42] = Image::FromFile("WaxingCrescentMoon_Past.png");
			pictureArrayPast[43] = Image::FromFile("WaxingMoon_Past.png");

			pictureArrayPresent[0] = Image::FromFile("BalsamicMoon_Present.png");
			pictureArrayPresent[1] = Image::FromFile("BlueMoon_Present.png");
			pictureArrayPresent[2] = Image::FromFile("CardinalMoon_Present.png");
			pictureArrayPresent[3] = Image::FromFile("DisseminatingMoon_Present.png");
			pictureArrayPresent[4] = Image::FromFile("FirstQuarterMoon_Present.png");
			pictureArrayPresent[5] = Image::FromFile("FixedMoon_Present.png");
			pictureArrayPresent[6] = Image::FromFile("FullMoon_Present.png");
			pictureArrayPresent[7] = Image::FromFile("FullMoonEclipse_Present.png");
			pictureArrayPresent[8] = Image::FromFile("FullMoonInAquarius_Present.png");
			pictureArrayPresent[9] = Image::FromFile("FullMoonInAries_Present.png");
			pictureArrayPresent[10] = Image::FromFile("FullMoonInCancer_Present.png");
			pictureArrayPresent[11] = Image::FromFile("FullMoonInCapricorn_Present.png");
			pictureArrayPresent[12] = Image::FromFile("FullMoonInGemini_Present.png");
			pictureArrayPresent[13] = Image::FromFile("FullMoonInLeo_Present.png");
			pictureArrayPresent[14] = Image::FromFile("FullMoonInLibra_Present.png");
			pictureArrayPresent[15] = Image::FromFile("FullMoonInPisces_Present.png");
			pictureArrayPresent[16] = Image::FromFile("FullMoonInSagittarius_Present.png");
			pictureArrayPresent[17] = Image::FromFile("FullMoonInScorpio_Present.png");
			pictureArrayPresent[18] = Image::FromFile("FullMoonInTaurus_Present.png");
			pictureArrayPresent[19] = Image::FromFile("FullMoonInVirgo_Present.png");
			pictureArrayPresent[20] = Image::FromFile("GibbousMoon_Present.png");
			pictureArrayPresent[21] = Image::FromFile("MutableMoon_Present.png");
			pictureArrayPresent[22] = Image::FromFile("NewMoon_Present.png");
			pictureArrayPresent[23] = Image::FromFile("NewMoonEclipse_Present.png");
			pictureArrayPresent[24] = Image::FromFile("NewMoonInAquarius_Present.png");
			pictureArrayPresent[25] = Image::FromFile("NewMoonInAries_Present.png");
			pictureArrayPresent[26] = Image::FromFile("NewMoonInCancer_Present.png");
			pictureArrayPresent[27] = Image::FromFile("NewMoonInCapricorn_Present.png");
			pictureArrayPresent[28] = Image::FromFile("NewMoonInGemini_Present.png");
			pictureArrayPresent[29] = Image::FromFile("NewMoonInLeo_Present.png");
			pictureArrayPresent[30] = Image::FromFile("NewMoonInLibra_Present.png");
			pictureArrayPresent[31] = Image::FromFile("NewMoonInPisces_Present.png");
			pictureArrayPresent[32] = Image::FromFile("NewMoonInSagittarius_Present.png");
			pictureArrayPresent[33] = Image::FromFile("NewMoonInScorpio_Present.png");
			pictureArrayPresent[34] = Image::FromFile("NewMoonInTaurus_Present.png");
			pictureArrayPresent[35] = Image::FromFile("NewMoonInVirgo_Present.png");
			pictureArrayPresent[36] = Image::FromFile("NorthNode_Present.png");
			pictureArrayPresent[37] = Image::FromFile("SouthNode_Present.png");
			pictureArrayPresent[38] = Image::FromFile("Supermoon_Present.png");
			pictureArrayPresent[39] = Image::FromFile("ThirdQuarterMoon_Present.png");
			pictureArrayPresent[40] = Image::FromFile("Void-Of-CourseMoon_Present.png");
			pictureArrayPresent[41] = Image::FromFile("WaningMoon_Present.png");
			pictureArrayPresent[42] = Image::FromFile("WaxingCrescentMoon_Present.png");
			pictureArrayPresent[43] = Image::FromFile("WaxingMoon_Present.png");

			pictureArrayFuture[0] = Image::FromFile("BalsamicMoon_Future.png");
			pictureArrayFuture[1] = Image::FromFile("BlueMoon_Future.png");
			pictureArrayFuture[2] = Image::FromFile("CardinalMoon_Future.png");
			pictureArrayFuture[3] = Image::FromFile("DisseminatingMoon_Future.png");
			pictureArrayFuture[4] = Image::FromFile("FirstQuarterMoon_Future.png");
			pictureArrayFuture[5] = Image::FromFile("FixedMoon_Future.png");
			pictureArrayFuture[6] = Image::FromFile("FullMoon_Future.png");
			pictureArrayFuture[7] = Image::FromFile("FullMoonEclipse_Future.png");
			pictureArrayFuture[8] = Image::FromFile("FullMoonInAquarius_Future.png");
			pictureArrayFuture[9] = Image::FromFile("FullMoonInAries_Future.png");
			pictureArrayFuture[10] = Image::FromFile("FullMoonInCancer_Future.png");
			pictureArrayFuture[11] = Image::FromFile("FullMoonInCapricorn_Future.png");
			pictureArrayFuture[12] = Image::FromFile("FullMoonInGemini_Future.png");
			pictureArrayFuture[13] = Image::FromFile("FullMoonInLeo_Future.png");
			pictureArrayFuture[14] = Image::FromFile("FullMoonInLibra_Future.png");
			pictureArrayFuture[15] = Image::FromFile("FullMoonInPisces_Future.png");
			pictureArrayFuture[16] = Image::FromFile("FullMoonInSagittarius_Future.png");
			pictureArrayFuture[17] = Image::FromFile("FullMoonInScorpio_Future.png");
			pictureArrayFuture[18] = Image::FromFile("FullMoonInTaurus_Future.png");
			pictureArrayFuture[19] = Image::FromFile("FullMoonInVirgo_Future.png");
			pictureArrayFuture[20] = Image::FromFile("GibbousMoon_Future.png");
			pictureArrayFuture[21] = Image::FromFile("MutableMoon_Future.png");
			pictureArrayFuture[22] = Image::FromFile("NewMoon_Future.png");
			pictureArrayFuture[23] = Image::FromFile("NewMoonEclipse_Future.png");
			pictureArrayFuture[24] = Image::FromFile("NewMoonInAquarius_Future.png");
			pictureArrayFuture[25] = Image::FromFile("NewMoonInAries_Future.png");
			pictureArrayFuture[26] = Image::FromFile("NewMoonInCancer_Future.png");
			pictureArrayFuture[27] = Image::FromFile("NewMoonInCapricorn_Future.png");
			pictureArrayFuture[28] = Image::FromFile("NewMoonInGemini_Future.png");
			pictureArrayFuture[29] = Image::FromFile("NewMoonInLeo_Future.png");
			pictureArrayFuture[30] = Image::FromFile("NewMoonInLibra_Future.png");
			pictureArrayFuture[31] = Image::FromFile("NewMoonInPisces_Future.png");
			pictureArrayFuture[32] = Image::FromFile("NewMoonInSagittarius_Future.png");
			pictureArrayFuture[33] = Image::FromFile("NewMoonInScorpio_Future.png");
			pictureArrayFuture[34] = Image::FromFile("NewMoonInTaurus_Future.png");
			pictureArrayFuture[35] = Image::FromFile("NewMoonInVirgo_Future.png");
			pictureArrayFuture[36] = Image::FromFile("NorthNode_Future.png");
			pictureArrayFuture[37] = Image::FromFile("SouthNode_Future.png");
			pictureArrayFuture[38] = Image::FromFile("Supermoon_Future.png");
			pictureArrayFuture[39] = Image::FromFile("ThirdQuarterMoon_Future.png");
			pictureArrayFuture[40] = Image::FromFile("Void-Of-CourseMoon_Future.png");
			pictureArrayFuture[41] = Image::FromFile("WaningMoon_Future.png");
			pictureArrayFuture[42] = Image::FromFile("WaxingCrescentMoon_Future.png");
			pictureArrayFuture[43] = Image::FromFile("WaxingMoon_Future.png");
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
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Panel^ panelOne;
	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::RadioButton^ radioButtonOther;
	private: System::Windows::Forms::RadioButton^ radioButtonFemale;
	private: System::Windows::Forms::RadioButton^ radioButtonMale;
	private: System::Windows::Forms::Label^ labelGender;
	private: System::Windows::Forms::Button^ buttonBack1;


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
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->panelOne = (gcnew System::Windows::Forms::Panel());
			this->panelTwo = (gcnew System::Windows::Forms::Panel());
			this->panelThree = (gcnew System::Windows::Forms::Panel());
			this->panelFour = (gcnew System::Windows::Forms::Panel());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonRestart2 = (gcnew System::Windows::Forms::Button());
			this->buttonRetry = (gcnew System::Windows::Forms::Button());
			this->pictureBoxFuture = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPresent = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPast = (gcnew System::Windows::Forms::PictureBox());
			this->buttonBack1 = (gcnew System::Windows::Forms::Button());
			this->buttonBack2 = (gcnew System::Windows::Forms::Button());
			this->buttonNext3 = (gcnew System::Windows::Forms::Button());
			this->labelSummary = (gcnew System::Windows::Forms::Label());
			this->buttonNext2 = (gcnew System::Windows::Forms::Button());
			this->labelYear = (gcnew System::Windows::Forms::Label());
			this->comboBoxYear = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxMonth = (gcnew System::Windows::Forms::ComboBox());
			this->labelMonth = (gcnew System::Windows::Forms::Label());
			this->comboBoxDay = (gcnew System::Windows::Forms::ComboBox());
			this->labelDay = (gcnew System::Windows::Forms::Label());
			this->labelBirthday = (gcnew System::Windows::Forms::Label());
			this->buttonNext1 = (gcnew System::Windows::Forms::Button());
			this->radioButtonOther = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonFemale = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonMale = (gcnew System::Windows::Forms::RadioButton());
			this->labelGender = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->panelOne->SuspendLayout();
			this->panelTwo->SuspendLayout();
			this->panelThree->SuspendLayout();
			this->panelFour->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFuture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPresent))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPast))->BeginInit();
			this->SuspendLayout();
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->Location = System::Drawing::Point(240, 50);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(305, 48);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"Formoonteller";
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15));
			this->buttonStart->Location = System::Drawing::Point(296, 340);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(150, 50);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// panelOne
			// 
			this->panelOne->Controls->Add(this->panelTwo);
			this->panelOne->Controls->Add(this->buttonNext1);
			this->panelOne->Controls->Add(this->radioButtonOther);
			this->panelOne->Controls->Add(this->radioButtonFemale);
			this->panelOne->Controls->Add(this->radioButtonMale);
			this->panelOne->Controls->Add(this->labelGender);
			this->panelOne->Controls->Add(this->textBoxName);
			this->panelOne->Controls->Add(this->labelName);
			this->panelOne->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelOne->Location = System::Drawing::Point(0, 0);
			this->panelOne->Name = L"panelOne";
			this->panelOne->Size = System::Drawing::Size(782, 453);
			this->panelOne->TabIndex = 2;
			this->panelOne->Visible = false;
			// 
			// panelTwo
			// 
			this->panelTwo->Controls->Add(this->panelThree);
			this->panelTwo->Controls->Add(this->buttonNext2);
			this->panelTwo->Controls->Add(this->buttonBack2);
			this->panelTwo->Controls->Add(this->labelYear);
			this->panelTwo->Controls->Add(this->comboBoxYear);
			this->panelTwo->Controls->Add(this->comboBoxMonth);
			this->panelTwo->Controls->Add(this->labelMonth);
			this->panelTwo->Controls->Add(this->comboBoxDay);
			this->panelTwo->Controls->Add(this->labelDay);
			this->panelTwo->Controls->Add(this->labelBirthday);
			this->panelTwo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelTwo->Location = System::Drawing::Point(0, 0);
			this->panelTwo->Name = L"panelTwo";
			this->panelTwo->Size = System::Drawing::Size(782, 453);
			this->panelTwo->TabIndex = 7;
			this->panelTwo->Visible = false;
			// 
			// panelThree
			// 
			this->panelThree->Controls->Add(this->panelFour);
			this->panelThree->Controls->Add(this->buttonBack1);
			this->panelThree->Controls->Add(this->buttonNext3);
			this->panelThree->Controls->Add(this->labelSummary);
			this->panelThree->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelThree->Location = System::Drawing::Point(0, 0);
			this->panelThree->Name = L"panelThree";
			this->panelThree->Size = System::Drawing::Size(782, 453);
			this->panelThree->TabIndex = 8;
			this->panelThree->Visible = false;
			// 
			// panelFour
			// 
			this->panelFour->Controls->Add(this->buttonExit);
			this->panelFour->Controls->Add(this->buttonRestart2);
			this->panelFour->Controls->Add(this->buttonRetry);
			this->panelFour->Controls->Add(this->pictureBoxFuture);
			this->panelFour->Controls->Add(this->pictureBoxPresent);
			this->panelFour->Controls->Add(this->pictureBoxPast);
			this->panelFour->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelFour->Location = System::Drawing::Point(0, 0);
			this->panelFour->Name = L"panelFour";
			this->panelFour->Size = System::Drawing::Size(782, 453);
			this->panelFour->TabIndex = 3;
			this->panelFour->Visible = false;
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(551, 357);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(150, 50);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Visible = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// buttonRestart2
			// 
			this->buttonRestart2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRestart2->Location = System::Drawing::Point(215, 357);
			this->buttonRestart2->Name = L"buttonRestart2";
			this->buttonRestart2->Size = System::Drawing::Size(150, 50);
			this->buttonRestart2->TabIndex = 5;
			this->buttonRestart2->Text = L"Restart";
			this->buttonRestart2->UseVisualStyleBackColor = true;
			this->buttonRestart2->Visible = false;
			this->buttonRestart2->Click += gcnew System::EventHandler(this, &MyForm::buttonRestart2_Click);
			// 
			// buttonRetry
			// 
			this->buttonRetry->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRetry->Location = System::Drawing::Point(50, 357);
			this->buttonRetry->Name = L"buttonRetry";
			this->buttonRetry->Size = System::Drawing::Size(150, 50);
			this->buttonRetry->TabIndex = 4;
			this->buttonRetry->Text = L"Retry";
			this->buttonRetry->UseVisualStyleBackColor = true;
			this->buttonRetry->Visible = false;
			this->buttonRetry->Click += gcnew System::EventHandler(this, &MyForm::buttonRetry_Click);
			// 
			// pictureBoxFuture
			// 
			this->pictureBoxFuture->Location = System::Drawing::Point(551, 50);
			this->pictureBoxFuture->Name = L"pictureBoxFuture";
			this->pictureBoxFuture->Size = System::Drawing::Size(170, 280);
			this->pictureBoxFuture->SizeMode = PictureBoxSizeMode::Zoom;
			this->pictureBoxFuture->TabIndex = 2;
			this->pictureBoxFuture->TabStop = false;
			this->pictureBoxFuture->Visible = false;
			// 
			// pictureBoxPresent
			// 
			this->pictureBoxPresent->Location = System::Drawing::Point(309, 50);
			this->pictureBoxPresent->Name = L"pictureBoxPresent";
			this->pictureBoxPresent->Size = System::Drawing::Size(170, 280);
			this->pictureBoxPresent->SizeMode = PictureBoxSizeMode::Zoom;
			this->pictureBoxPresent->TabIndex = 1;
			this->pictureBoxPresent->TabStop = false;
			this->pictureBoxPresent->Visible = false;
			// 
			// pictureBoxPast
			// 
			this->pictureBoxPast->Location = System::Drawing::Point(76, 50);
			this->pictureBoxPast->Name = L"pictureBoxPast";
			this->pictureBoxPast->Size = System::Drawing::Size(170, 280);
			this->pictureBoxPast->SizeMode = PictureBoxSizeMode::Zoom;
			this->pictureBoxPast->TabIndex = 0;
			this->pictureBoxPast->TabStop = false;
			this->pictureBoxPast->Visible = false;
			// 
			// buttonBack1
			// 
			this->buttonBack1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15));
			this->buttonBack1->Location = System::Drawing::Point(365, 357);
			this->buttonBack1->Name = L"buttonBack1";
			this->buttonBack1->Size = System::Drawing::Size(150, 50);
			this->buttonBack1->TabIndex = 2;
			this->buttonBack1->Text = L"Back";
			this->buttonBack1->UseVisualStyleBackColor = true;
			this->buttonBack1->Visible = false;
			this->buttonBack1->Click += gcnew System::EventHandler(this, &MyForm::buttonBack1_Click);
			// 
			// buttonBack2
			// 
			this->buttonBack2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15));
			this->buttonBack2->Location = System::Drawing::Point(365, 357);
			this->buttonBack2->Name = L"buttonBack1";
			this->buttonBack2->Size = System::Drawing::Size(150, 50);
			this->buttonBack2->TabIndex = 1;
			this->buttonBack2->Text = L"Back";
			this->buttonBack2->UseVisualStyleBackColor = true;
			this->buttonBack2->Visible = false;
			this->buttonBack2->Click += gcnew System::EventHandler(this, &MyForm::buttonBack2_Click);
			// 
			// buttonNext3
			// 
			this->buttonNext3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15));
			this->buttonNext3->Location = System::Drawing::Point(551, 357);
			this->buttonNext3->Name = L"buttonNext3";
			this->buttonNext3->Size = System::Drawing::Size(150, 50);
			this->buttonNext3->TabIndex = 1;
			this->buttonNext3->Text = L"Next";
			this->buttonNext3->UseVisualStyleBackColor = true;
			this->buttonNext3->Visible = false;
			this->buttonNext3->Click += gcnew System::EventHandler(this, &MyForm::buttonNext3_Click);
			// 
			// labelSummary
			// 
			this->labelSummary->AutoSize = true;
			this->labelSummary->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSummary->Location = System::Drawing::Point(201, 78);
			this->labelSummary->Name = L"labelSummary";
			this->labelSummary->Size = System::Drawing::Size(0, 31);
			this->labelSummary->TabIndex = 0;
			this->labelSummary->Visible = false;
			// 
			// buttonNext2
			// 
			this->buttonNext2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNext2->Location = System::Drawing::Point(551, 357);
			this->buttonNext2->Name = L"buttonNext2";
			this->buttonNext2->Size = System::Drawing::Size(150, 50);
			this->buttonNext2->TabIndex = 7;
			this->buttonNext2->Text = L"Next";
			this->buttonNext2->UseVisualStyleBackColor = true;
			this->buttonNext2->Click += gcnew System::EventHandler(this, &MyForm::buttonNext2_Click);
			// 
			// labelYear
			// 
			this->labelYear->AutoSize = true;
			this->labelYear->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16));
			this->labelYear->Location = System::Drawing::Point(513, 112);
			this->labelYear->Name = L"labelYear";
			this->labelYear->Size = System::Drawing::Size(88, 29);
			this->labelYear->TabIndex = 6;
			this->labelYear->Text = L"Year *";
			this->labelYear->Visible = false;
			// 
			// comboBoxYear
			// 
			this->comboBoxYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxYear->FormattingEnabled = true;
			this->comboBoxYear->Location = System::Drawing::Point(518, 154);
			this->comboBoxYear->Name = L"comboBoxYear";
			this->comboBoxYear->Size = System::Drawing::Size(183, 33);
			this->comboBoxYear->TabIndex = 5;
			this->comboBoxYear->Visible = false;
			this->comboBoxYear->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxYear_SelectedIndexChanged);
			// 
			// comboBoxMonth
			// 
			this->comboBoxMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxMonth->FormattingEnabled = true;
			this->comboBoxMonth->Location = System::Drawing::Point(296, 154);
			this->comboBoxMonth->Name = L"comboBoxMonth";
			this->comboBoxMonth->Size = System::Drawing::Size(183, 33);
			this->comboBoxMonth->TabIndex = 4;
			this->comboBoxMonth->Visible = false;
			this->comboBoxMonth->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxMonth_SelectedIndexChanged);
			// 
			// labelMonth
			// 
			this->labelMonth->AutoSize = true;
			this->labelMonth->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16));
			this->labelMonth->Location = System::Drawing::Point(291, 112);
			this->labelMonth->Name = L"labelMonth";
			this->labelMonth->Size = System::Drawing::Size(106, 29);
			this->labelMonth->TabIndex = 3;
			this->labelMonth->Text = L"Month *";
			this->labelMonth->Visible = false;
			// 
			// comboBoxDay
			// 
			this->comboBoxDay->BackColor = System::Drawing::SystemColors::Window;
			this->comboBoxDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->comboBoxDay->FormattingEnabled = true;
			this->comboBoxDay->Location = System::Drawing::Point(63, 154);
			this->comboBoxDay->Name = L"comboBoxDay";
			this->comboBoxDay->Size = System::Drawing::Size(183, 33);
			this->comboBoxDay->TabIndex = 2;
			this->comboBoxDay->Visible = false;
			this->comboBoxDay->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxDay_SelectedIndexChanged);
			// 
			// labelDay
			// 
			this->labelDay->AutoSize = true;
			this->labelDay->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 16));
			this->labelDay->Location = System::Drawing::Point(58, 112);
			this->labelDay->Name = L"labelDay";
			this->labelDay->Size = System::Drawing::Size(78, 29);
			this->labelDay->TabIndex = 1;
			this->labelDay->Text = L"Day *";
			this->labelDay->Visible = false;
			// 
			// labelBirthday
			// 
			this->labelBirthday->AutoSize = true;
			this->labelBirthday->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBirthday->Location = System::Drawing::Point(253, 50);
			this->labelBirthday->Name = L"labelBirthday";
			this->labelBirthday->Size = System::Drawing::Size(272, 31);
			this->labelBirthday->TabIndex = 0;
			this->labelBirthday->Text = L"Enter Your Birthday";
			this->labelBirthday->Visible = false;
			// 
			// buttonNext1
			// 
			this->buttonNext1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNext1->Location = System::Drawing::Point(551, 357);
			this->buttonNext1->Name = L"buttonNext1";
			this->buttonNext1->Size = System::Drawing::Size(150, 50);
			this->buttonNext1->TabIndex = 6;
			this->buttonNext1->Text = L"Next";
			this->buttonNext1->UseVisualStyleBackColor = true;
			this->buttonNext1->Visible = false;
			this->buttonNext1->Click += gcnew System::EventHandler(this, &MyForm::buttonNext1_Click);
			// 
			// radioButtonOther
			// 
			this->radioButtonOther->AutoSize = true;
			this->radioButtonOther->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonOther->Location = System::Drawing::Point(103, 309);
			this->radioButtonOther->Name = L"radioButtonOther";
			this->radioButtonOther->Size = System::Drawing::Size(84, 28);
			this->radioButtonOther->TabIndex = 5;
			this->radioButtonOther->TabStop = true;
			this->radioButtonOther->Text = L"Other";
			this->radioButtonOther->UseVisualStyleBackColor = true;
			this->radioButtonOther->Visible = false;
			this->radioButtonOther->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonOther_CheckedChanged);
			// 
			// radioButtonFemale
			// 
			this->radioButtonFemale->AutoSize = true;
			this->radioButtonFemale->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonFemale->Location = System::Drawing::Point(103, 275);
			this->radioButtonFemale->Name = L"radioButtonFemale";
			this->radioButtonFemale->Size = System::Drawing::Size(98, 28);
			this->radioButtonFemale->TabIndex = 4;
			this->radioButtonFemale->TabStop = true;
			this->radioButtonFemale->Text = L"Female";
			this->radioButtonFemale->UseVisualStyleBackColor = true;
			this->radioButtonFemale->Visible = false;
			this->radioButtonFemale->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonFemale_CheckedChanged);
			// 
			// radioButtonMale
			// 
			this->radioButtonMale->AutoSize = true;
			this->radioButtonMale->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonMale->Location = System::Drawing::Point(103, 241);
			this->radioButtonMale->Name = L"radioButtonMale";
			this->radioButtonMale->Size = System::Drawing::Size(77, 28);
			this->radioButtonMale->TabIndex = 3;
			this->radioButtonMale->TabStop = true;
			this->radioButtonMale->Text = L"Male";
			this->radioButtonMale->UseVisualStyleBackColor = true;
			this->radioButtonMale->Visible = false;
			this->radioButtonMale->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtonMale_CheckedChanged);
			// 
			// labelGender
			// 
			this->labelGender->AutoSize = true;
			this->labelGender->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold));
			this->labelGender->Location = System::Drawing::Point(97, 197);
			this->labelGender->Name = L"labelGender";
			this->labelGender->Size = System::Drawing::Size(130, 31);
			this->labelGender->TabIndex = 2;
			this->labelGender->Text = L"Gender *";
			this->labelGender->Visible = false;
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::Color::White;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxName->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxName->Location = System::Drawing::Point(103, 144);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(341, 34);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->Visible = false;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxName_TextChanged);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Bold));
			this->labelName->Location = System::Drawing::Point(97, 97);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(111, 31);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Name *";
			this->labelName->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->panelOne);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->labelTitle);
			this->Name = L"MyForm";
			this->Text = L"Formoonteller";
			this->panelOne->ResumeLayout(false);
			this->panelOne->PerformLayout();
			this->panelTwo->ResumeLayout(false);
			this->panelTwo->PerformLayout();
			this->panelThree->ResumeLayout(false);
			this->panelThree->PerformLayout();
			this->panelFour->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFuture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPresent))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPast))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Visible = false;
		buttonStart->Visible = false;

		panelOne->Visible = true;
		labelName->Visible = true;
		textBoxName->Visible = true;
		labelGender->Visible = true;
		radioButtonMale->Visible = true;
		radioButtonFemale->Visible = true;
		radioButtonOther->Visible = true;
		buttonNext1->Visible = true;
	}
	private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		userName = textBoxName->Text;
	}
    private: System::Void radioButtonMale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonMale->Checked) {
			userGender = 'M';
		}
    }
    private: System::Void radioButtonFemale_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonFemale->Checked) {
			userGender = 'F';
		}
    }
    private: System::Void radioButtonOther_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonOther->Checked) {
			userGender = 'O';
		}
    }
    private: System::Void buttonNext1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxName->Text == "" || (!radioButtonMale->Checked && !radioButtonFemale->Checked && !radioButtonOther->Checked)) {
			MessageBox::Show("Please enter your name and select a gender.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		labelName->Visible = false;
		textBoxName->Visible = false;
		labelGender->Visible = false;
		radioButtonMale->Visible = false;
		radioButtonFemale->Visible = false;
		radioButtonOther->Visible = false;
		buttonNext1->Visible = false;

		panelTwo->Visible = true;
		labelBirthday->Visible = true;
		labelDay->Visible = true;
		labelMonth->Visible = true;
		labelYear->Visible = true;
		comboBoxDay->Visible = true;
		comboBoxMonth->Visible = true;
		comboBoxYear->Visible = true;
		buttonBack2->Visible = true;
		buttonNext2->Visible = true;
    }
	private: System::Void buttonBack2_Click(System::Object^ sender, System::EventArgs^ e) {
		panelTwo->Visible = false;
		labelBirthday->Visible = false;
		labelDay->Visible = false;
		labelMonth->Visible = false;
		labelYear->Visible = false;
		comboBoxDay->Visible = false;
		comboBoxMonth->Visible = false;
		comboBoxYear->Visible = false;
		buttonBack2->Visible = false;
		buttonNext2->Visible = false;

		panelOne->Visible = true;
		labelName->Visible = true;
		textBoxName->Visible = true;
		labelGender->Visible = true;
		radioButtonMale->Visible = true;
		radioButtonFemale->Visible = true;
		radioButtonOther->Visible = true;
		buttonNext1->Visible = true;
	}
    private: System::Void comboBoxDay_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		userDay = comboBoxDay->SelectedIndex + 1;
    }
    private: System::Void comboBoxMonth_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		userMonth = comboBoxMonth->SelectedItem->ToString();
		if (userMonth == "January") {
			monthNumbers = 1;
		}
		else if (userMonth == "February") {
			monthNumbers = 2;
		}
		else if (userMonth == "March") {
			monthNumbers = 3;
		}
		else if (userMonth == "April") {
			monthNumbers = 4;
		}
		else if (userMonth == "May") {
			monthNumbers = 5;
		}
		else if (userMonth == "June") {
			monthNumbers = 6;
		}
		else if (userMonth == "July") {
			monthNumbers = 7;
		}
		else if (userMonth == "August") {
			monthNumbers = 8;
		}
		else if (userMonth == "September") {
			monthNumbers = 9;
		}
		else if (userMonth == "October") {
			monthNumbers = 10;
		}
		else if (userMonth == "November") {
			monthNumbers = 11;
		}
		else if (userMonth == "December") {
			monthNumbers = 12;
		}
    }
    private: System::Void comboBoxYear_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		userYear = comboBoxYear->SelectedIndex + 1;
    }
    private: System::Void buttonNext2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxDay->SelectedItem == nullptr || comboBoxMonth->SelectedItem == nullptr || comboBoxYear->SelectedItem == nullptr || (userDay == 30 && monthNumbers == 2) || (userDay == 31 && monthNumbers == 2) || (userDay == 29 && monthNumbers == 2 && (userYear - 1)%4 != 0) || (userDay == 31 && (monthNumbers == 4 || monthNumbers == 6 || monthNumbers == 9 || monthNumbers == 11))) {
			MessageBox::Show("Please select your birthday correctly.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if ((monthNumbers == 1 && userDay >= 20) || (monthNumbers == 2 && userDay <= 18)) {
			userZodiac = "Aquarius";
		}
		if ((monthNumbers == 2 && userDay >= 19) || (monthNumbers == 3 && userDay <= 20)) {
			userZodiac = "Pisces";
		}
		if ((monthNumbers == 3 && userDay >= 21) || (monthNumbers == 4 && userDay <= 19)) {
			userZodiac = "Aries";
		}
		if ((monthNumbers == 4 && userDay >= 20) || (monthNumbers == 5 && userDay <= 20)) {
			userZodiac = "Taurus";
		}
		if ((monthNumbers == 5 && userDay >= 21) || (monthNumbers == 6 && userDay <= 20)) {
			userZodiac = "Gemini";
		}
		if ((monthNumbers == 6 && userDay >= 21) || (monthNumbers == 7 && userDay <= 22)) {
			userZodiac = "Cancer";
		}
		if ((monthNumbers == 7 && userDay >= 23) || (monthNumbers == 8 && userDay <= 22)) {
			userZodiac = "Leo";
		}
		if ((monthNumbers == 8 && userDay >= 23) || (monthNumbers == 9 && userDay <= 22)) {
			userZodiac = "Virgo";
		}
		if ((monthNumbers == 9 && userDay >= 23) || (monthNumbers == 10 && userDay <= 22)) {
			userZodiac = "Libra";
		}
		if ((monthNumbers == 10 && userDay >= 23) || (monthNumbers == 11 && userDay <= 21)) {
			userZodiac = "Scorpio";
		}
		if ((monthNumbers == 11 && userDay >= 22) || (monthNumbers == 12 && userDay <= 21)) {
			userZodiac = "Sagittarius";
		}
		if ((monthNumbers == 12 && userDay >= 22) || (monthNumbers == 1 && userDay <= 19)) {
			userZodiac = "Capricorn";
		}

		labelBirthday->Visible = false;
		labelDay->Visible = false;
		labelMonth->Visible = false;
		labelYear->Visible = false;
		comboBoxDay->Visible = false;
		comboBoxMonth->Visible = false;
		comboBoxYear->Visible = false;
		buttonNext2->Visible = false;

		panelThree->Visible = true;
		labelSummary->Visible = true;
		buttonNext3->Visible = true;
		buttonBack1->Visible = true;

		userSummary = "Hello ";
		if (userGender == 'M') {
			userSummary += "Mr. " + userName + ".\n";
		}
		else if (userGender == 'F') {
			userSummary += "Ms. " + userName + ".\n";
		}
		else if (userGender == 'O') {
			userSummary += userName + ".\n";
		}
		userSummary += "Your birthday is on " + userMonth + " " + userDay + ".\n";
		userSummary += "That makes you a ";

		labelSummary->Text = userSummary + userZodiac + ".";
    }
    private: System::Void buttonBack1_Click(System::Object^ sender, System::EventArgs^ e) {
		panelThree->Visible = false;
		panelFour->Visible = false;
		labelSummary->Visible = false;
		buttonNext3->Visible = false;
		buttonBack1->Visible = false;

		panelOne->Visible = true;
		panelTwo->Visible = true;
		labelBirthday->Visible = true;
		labelDay->Visible = true;
		labelMonth->Visible = true;
		labelYear->Visible = true;
		comboBoxDay->Visible = true;
		comboBoxMonth->Visible = true;
		comboBoxYear->Visible = true;
		buttonNext2->Visible = true;
    }
    private: System::Void buttonNext3_Click(System::Object^ sender, System::EventArgs^ e) {
		labelSummary->Visible = false;
		buttonNext3->Visible = false;
		buttonBack1->Visible = false;

		panelFour->Visible = true;
		pictureBoxPast->Visible = true;
		pictureBoxPresent->Visible = true;
		pictureBoxFuture->Visible = true;
		buttonRetry->Visible = true;
		buttonRestart2->Visible = true;
		buttonExit->Visible = true;

		pictureBoxPast->Image = pictureArrayPast[randomPast];
		pictureBoxPresent->Image = pictureArrayPresent[randomPresent];
		pictureBoxFuture->Image = pictureArrayPast[randomFuture];
    }
	private: System::Void buttonRetry_Click(System::Object^ sender, System::EventArgs^ e) {
		randomPast = rnd->Next(0, pictureArrayPast->Length);
		randomPresent = rnd->Next(0, pictureArrayPresent->Length);
		randomFuture = rnd->Next(0, pictureArrayFuture->Length);
		pictureBoxPast->Image = pictureArrayPast[randomPast];
		pictureBoxPresent->Image = pictureArrayPresent[randomPresent];
		pictureBoxFuture->Image = pictureArrayPast[randomFuture];
	}
	private: System::Void buttonRestart2_Click(System::Object^ sender, System::EventArgs^ e) {
		panelOne->Visible = false;
		panelTwo->Visible = false;
		panelThree->Visible = false;
		panelFour->Visible = false;
		pictureBoxPast->Visible = false;
		pictureBoxPresent->Visible = false;
		pictureBoxFuture->Visible = false;
		buttonRetry->Visible = false;
		buttonRestart2->Visible = false;
		buttonExit->Visible = false;

		labelTitle->Visible = true;
		buttonStart->Visible = true;

		textBoxName->Text = "";
		if (radioButtonMale->Checked) {
			radioButtonMale->Checked = false;
		}
		else if (radioButtonFemale->Checked) {
			radioButtonFemale->Checked = false;
		}
		else if (radioButtonOther->Checked) {
			radioButtonOther->Checked = false;
		}
		comboBoxDay->SelectedIndex = -1;
		comboBoxMonth->Text = " ";
		comboBoxYear->SelectedIndex = -1;
		pictureBoxPast->Image = nullptr;
		pictureBoxPresent->Image = nullptr;
		pictureBoxFuture->Image = nullptr;

		randomPast = rnd->Next(0, pictureArrayPast->Length);
		randomPresent = rnd->Next(0, pictureArrayPresent->Length);
		randomFuture = rnd->Next(0, pictureArrayFuture->Length);
		pictureBoxPast->Image = pictureArrayPast[randomPast];
		pictureBoxPresent->Image = pictureArrayPresent[randomPresent];
		pictureBoxFuture->Image = pictureArrayPast[randomFuture];
	}
    private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
