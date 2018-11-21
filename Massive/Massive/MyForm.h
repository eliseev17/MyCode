#pragma once
#include <random>
#include <cmath>
namespace Massive {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  txtMax;
	protected:

	private: System::Windows::Forms::TextBox^  txtMin;

	private: System::Windows::Forms::TextBox^  txtNum;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radDecrease;

	private: System::Windows::Forms::RadioButton^  radIncrease;


	private: System::Windows::Forms::RadioButton^  radOdd;


	private: System::Windows::Forms::RadioButton^  radEven;



	private: System::Windows::Forms::RadioButton^  radMax;

	private: System::Windows::Forms::RadioButton^  radMin;

	private: System::Windows::Forms::RadioButton^  radMid;

	private: System::Windows::Forms::RadioButton^  radSum;

	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Button^  btnGenerate;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtInput;


	private: System::Windows::Forms::Button^  btnInput;
	private: System::Windows::Forms::Button^  btnDo;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtOutput;

	private: System::Windows::Forms::Button^  btnSave;

	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::OpenFileDialog^  openFD;
	private: System::Windows::Forms::SaveFileDialog^  saveFD;
	private: System::Windows::Forms::Label^  lblError;
	private: System::Windows::Forms::RichTextBox^  txtMassiv;
	private: System::Windows::Forms::RichTextBox^  txtResult;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtMax = (gcnew System::Windows::Forms::TextBox());
			this->txtMin = (gcnew System::Windows::Forms::TextBox());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radDecrease = (gcnew System::Windows::Forms::RadioButton());
			this->radIncrease = (gcnew System::Windows::Forms::RadioButton());
			this->radOdd = (gcnew System::Windows::Forms::RadioButton());
			this->radEven = (gcnew System::Windows::Forms::RadioButton());
			this->radMax = (gcnew System::Windows::Forms::RadioButton());
			this->radMin = (gcnew System::Windows::Forms::RadioButton());
			this->radMid = (gcnew System::Windows::Forms::RadioButton());
			this->radSum = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->btnInput = (gcnew System::Windows::Forms::Button());
			this->btnDo = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtOutput = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->openFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFD = (gcnew System::Windows::Forms::SaveFileDialog());
			this->lblError = (gcnew System::Windows::Forms::Label());
			this->txtMassiv = (gcnew System::Windows::Forms::RichTextBox());
			this->txtResult = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtMax);
			this->groupBox1->Controls->Add(this->txtMin);
			this->groupBox1->Controls->Add(this->txtNum);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(619, 198);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// txtMax
			// 
			this->txtMax->Location = System::Drawing::Point(379, 147);
			this->txtMax->Name = L"txtMax";
			this->txtMax->Size = System::Drawing::Size(211, 35);
			this->txtMax->TabIndex = 5;
			this->txtMax->TextChanged += gcnew System::EventHandler(this, &MyForm::txtMax_TextChanged);
			// 
			// txtMin
			// 
			this->txtMin->Location = System::Drawing::Point(379, 95);
			this->txtMin->Name = L"txtMin";
			this->txtMin->Size = System::Drawing::Size(211, 35);
			this->txtMin->TabIndex = 4;
			this->txtMin->TextChanged += gcnew System::EventHandler(this, &MyForm::txtMin_TextChanged);
			// 
			// txtNum
			// 
			this->txtNum->Location = System::Drawing::Point(379, 45);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(211, 35);
			this->txtNum->TabIndex = 3;
			this->txtNum->TextChanged += gcnew System::EventHandler(this, &MyForm::txtNum_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(6, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(351, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Максимальное значение диапазона:\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(6, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(343, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минимальное значение диапазона:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(6, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов массива:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radDecrease);
			this->groupBox2->Controls->Add(this->radIncrease);
			this->groupBox2->Controls->Add(this->radOdd);
			this->groupBox2->Controls->Add(this->radEven);
			this->groupBox2->Controls->Add(this->radMax);
			this->groupBox2->Controls->Add(this->radMin);
			this->groupBox2->Controls->Add(this->radMid);
			this->groupBox2->Controls->Add(this->radSum);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->groupBox2->Location = System::Drawing::Point(12, 313);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(619, 216);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// radDecrease
			// 
			this->radDecrease->AutoSize = true;
			this->radDecrease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radDecrease->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radDecrease->Location = System::Drawing::Point(303, 161);
			this->radDecrease->Name = L"radDecrease";
			this->radDecrease->Size = System::Drawing::Size(270, 29);
			this->radDecrease->TabIndex = 7;
			this->radDecrease->TabStop = true;
			this->radDecrease->Text = L"Сортировка по убыванию";
			this->radDecrease->UseVisualStyleBackColor = true;
			this->radDecrease->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radDecrease_CheckedChanged);
			// 
			// radIncrease
			// 
			this->radIncrease->AutoSize = true;
			this->radIncrease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radIncrease->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radIncrease->Location = System::Drawing::Point(303, 121);
			this->radIncrease->Name = L"radIncrease";
			this->radIncrease->Size = System::Drawing::Size(301, 29);
			this->radIncrease->TabIndex = 6;
			this->radIncrease->TabStop = true;
			this->radIncrease->Text = L"Сортировка по возрастанию";
			this->radIncrease->UseVisualStyleBackColor = true;
			this->radIncrease->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radIncrease_CheckedChanged);
			// 
			// radOdd
			// 
			this->radOdd->AutoSize = true;
			this->radOdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radOdd->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radOdd->Location = System::Drawing::Point(303, 82);
			this->radOdd->Name = L"radOdd";
			this->radOdd->Size = System::Drawing::Size(235, 29);
			this->radOdd->TabIndex = 5;
			this->radOdd->TabStop = true;
			this->radOdd->Text = L"Нечётные элементы";
			this->radOdd->UseVisualStyleBackColor = true;
			this->radOdd->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radOdd_CheckedChanged);
			// 
			// radEven
			// 
			this->radEven->AutoSize = true;
			this->radEven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radEven->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radEven->Location = System::Drawing::Point(303, 47);
			this->radEven->Name = L"radEven";
			this->radEven->Size = System::Drawing::Size(213, 29);
			this->radEven->TabIndex = 4;
			this->radEven->TabStop = true;
			this->radEven->Text = L"Чётные элементы";
			this->radEven->UseVisualStyleBackColor = true;
			this->radEven->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radEven_CheckedChanged);
			// 
			// radMax
			// 
			this->radMax->AutoSize = true;
			this->radMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radMax->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radMax->Location = System::Drawing::Point(24, 161);
			this->radMax->Name = L"radMax";
			this->radMax->Size = System::Drawing::Size(269, 29);
			this->radMax->TabIndex = 3;
			this->radMax->TabStop = true;
			this->radMax->Text = L"Максимальный элемент";
			this->radMax->UseVisualStyleBackColor = true;
			this->radMax->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radMax_CheckedChanged);
			// 
			// radMin
			// 
			this->radMin->AutoSize = true;
			this->radMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radMin->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radMin->Location = System::Drawing::Point(24, 121);
			this->radMin->Name = L"radMin";
			this->radMin->Size = System::Drawing::Size(261, 29);
			this->radMin->TabIndex = 2;
			this->radMin->TabStop = true;
			this->radMin->Text = L"Минимальный элемент";
			this->radMin->UseVisualStyleBackColor = true;
			this->radMin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radMin_CheckedChanged);
			// 
			// radMid
			// 
			this->radMid->AutoSize = true;
			this->radMid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radMid->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radMid->Location = System::Drawing::Point(24, 82);
			this->radMid->Name = L"radMid";
			this->radMid->Size = System::Drawing::Size(209, 29);
			this->radMid->TabIndex = 1;
			this->radMid->TabStop = true;
			this->radMid->Text = L"Среднее значение";
			this->radMid->UseVisualStyleBackColor = true;
			this->radMid->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radMid_CheckedChanged);
			// 
			// radSum
			// 
			this->radSum->AutoSize = true;
			this->radSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radSum->ForeColor = System::Drawing::SystemColors::ControlText;
			this->radSum->Location = System::Drawing::Point(24, 43);
			this->radSum->Name = L"radSum";
			this->radSum->Size = System::Drawing::Size(214, 29);
			this->radSum->TabIndex = 0;
			this->radSum->TabStop = true;
			this->radSum->Text = L"Сумма элементов";
			this->radSum->UseVisualStyleBackColor = true;
			this->radSum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radSum_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(7, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Исходный массив:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 532);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 29);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Результат операции:";
			// 
			// btnGenerate
			// 
			this->btnGenerate->BackColor = System::Drawing::SystemColors::Window;
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGenerate->Location = System::Drawing::Point(650, 26);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(215, 45);
			this->btnGenerate->TabIndex = 6;
			this->btnGenerate->Text = L"Генерация массива";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &MyForm::btnGenerate_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(645, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(185, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Имя файла ввода:";
			// 
			// txtInput
			// 
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtInput->Location = System::Drawing::Point(650, 114);
			this->txtInput->Name = L"txtInput";
			this->txtInput->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtInput->Size = System::Drawing::Size(215, 35);
			this->txtInput->TabIndex = 8;
			// 
			// btnInput
			// 
			this->btnInput->BackColor = System::Drawing::SystemColors::Window;
			this->btnInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnInput->Location = System::Drawing::Point(650, 165);
			this->btnInput->Name = L"btnInput";
			this->btnInput->Size = System::Drawing::Size(215, 45);
			this->btnInput->TabIndex = 9;
			this->btnInput->Text = L"Ввод из файла";
			this->btnInput->UseVisualStyleBackColor = false;
			this->btnInput->Click += gcnew System::EventHandler(this, &MyForm::btnInput_Click);
			// 
			// btnDo
			// 
			this->btnDo->BackColor = System::Drawing::SystemColors::Window;
			this->btnDo->Enabled = false;
			this->btnDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDo->Location = System::Drawing::Point(650, 327);
			this->btnDo->Name = L"btnDo";
			this->btnDo->Size = System::Drawing::Size(215, 45);
			this->btnDo->TabIndex = 10;
			this->btnDo->Text = L"Выполнить";
			this->btnDo->UseVisualStyleBackColor = false;
			this->btnDo->Click += gcnew System::EventHandler(this, &MyForm::btnDo_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(645, 395);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Имя файла вывода:";
			// 
			// txtOutput
			// 
			this->txtOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOutput->Location = System::Drawing::Point(650, 428);
			this->txtOutput->Name = L"txtOutput";
			this->txtOutput->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtOutput->Size = System::Drawing::Size(215, 35);
			this->txtOutput->TabIndex = 12;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::SystemColors::Window;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave->Location = System::Drawing::Point(650, 484);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(215, 45);
			this->btnSave->TabIndex = 13;
			this->btnSave->Text = L"Сохранить в файл";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::SystemColors::Window;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(650, 563);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(215, 45);
			this->btnClose->TabIndex = 14;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// openFD
			// 
			this->openFD->FileName = L"input";
			// 
			// saveFD
			// 
			this->saveFD->DefaultExt = L"txt";
			this->saveFD->FileName = L"output";
			// 
			// lblError
			// 
			this->lblError->AutoSize = true;
			this->lblError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblError->ForeColor = System::Drawing::Color::Red;
			this->lblError->Location = System::Drawing::Point(245, 214);
			this->lblError->Name = L"lblError";
			this->lblError->Size = System::Drawing::Size(0, 37);
			this->lblError->TabIndex = 15;
			// 
			// txtMassiv
			// 
			this->txtMassiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMassiv->Location = System::Drawing::Point(12, 257);
			this->txtMassiv->Name = L"txtMassiv";
			this->txtMassiv->Size = System::Drawing::Size(853, 50);
			this->txtMassiv->TabIndex = 16;
			this->txtMassiv->Text = L"";
			// 
			// txtResult
			// 
			this->txtResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResult->Location = System::Drawing::Point(12, 563);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(619, 45);
			this->txtResult->TabIndex = 17;
			this->txtResult->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(882, 620);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtMassiv);
			this->Controls->Add(this->lblError);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtOutput);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnDo);
			this->Controls->Add(this->btnInput);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Обработка массива ";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
			 String^ currentArray = "";
			 String^ max(array<Int64>^ numbers)
			 {
				 Int64 Max = numbers[0];
				 for (int i = 1; i < numbers->Length; ++i) {
					 if (numbers[i] > Max) {
						 Max = numbers[i];
					 }
				 }
				 return Convert::ToString(Max);
			 }
			 String^ sum(array<Int64>^ numbers)
			 {
				 Int64 Sum = 0, i;
				 for (i = 0; i < numbers->Length; ++i) {
					 Sum += numbers[i];
				 }
				 return Convert::ToString(Sum);
			 }
			 String^ avg(array<Int64>^ numbers) {
				 int count = 0;
				 Int64 sum = 0;
				 for (int i = 0; i < numbers->Length; ++i) {
					 sum += numbers[i];
					 ++count;
				 }
				 return Convert::ToString(sum / (double)count);
			 }
			 array<Int64>^ decSort(array<Int64>^ numbers) {
				 Int64 tmp;
				 array<Int64>^ numbersCopy = numbers;

				 for (int i = 0; i < numbersCopy->Length - 1; ++i) {
					 for (int j = i + 1; j < numbersCopy->Length; ++j) {
						 if (numbersCopy[j] > numbersCopy[i]) {
							 tmp = numbersCopy[i];
							 numbersCopy[i] = numbersCopy[j];
							 numbersCopy[j] = tmp;
						 }
					 }
				 }

				 return numbersCopy;
			 }
			 String^ conv(array<Int64>^ numbers) {

				 String^ output = "";
				 for (int i = 0; i < numbers->Length; ++i) {
					 output += Convert::ToString(numbers[i]) + " ";
				 }
				 return output;
			 }
			 array<Int64>^ incSort(array<Int64>^ numbers) {
				 Int64 tmp;
				 array<Int64>^ numbersCopy = numbers;

				 for (int i = 0; i < numbersCopy->Length - 1; ++i) {
					 for (int j = i + 1; j < numbersCopy->Length; ++j) {
						 if (numbersCopy[j] < numbersCopy[i]) {
							 tmp = numbersCopy[i];
							 numbersCopy[i] = numbersCopy[j];
							 numbersCopy[j] = tmp;
						 }
					 }
				 }

				 return numbersCopy;
			 }
			 String^ min(array<Int64>^ numbers) {
				 Int64 Min = numbers[0];
				 for (int i = 1; i < numbers->Length; ++i) {
					 if (numbers[i] < Min) {
						 Min = numbers[i];
					 }
				 }
				 return Convert::ToString(Min);

			 }
			 String^ even(array<Int64>^ numbers) {
				 String^ output;
				 for (int i = 0; i < numbers->Length; ++i) {
					 if (numbers[i] % 2 == 0) {
						 output += Convert::ToString(numbers[i]) + " ";
					 }
				 }
				 return output;
			 }
			 String^ odd(array<Int64>^ numbers) {
				 String^ output;
				 for (int i = 0; i < numbers->Length; ++i) {
					 if (numbers[i] % 2 == 1) {
						 output += Convert::ToString(numbers[i]) + " ";
					 }
				 }
				 return output;
			 }
			 void fill(array<Int64>^ numbers) { //ф-ция отвечает за автоматическое определение
				 Int64 Min, Max;               //min, max и кол-ва элементов
				 int i;
				 Min = Max = numbers[0];
				 for (int i = 1; i < numbers->Length; ++i) {
					 if (numbers[i] > Max) {
						 Max = numbers[i];
					 }
					 if (numbers[i] < Min) {
						 Min = numbers[i];
					 }
				 }
				 txtMax->Text = Convert::ToString(Max);
				 txtMin->Text = Convert::ToString(Min);
				 txtNum->Text = Convert::ToString(numbers->Length);
			 }
private: System::Void btnDo_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtMassiv->Text->Length == 0) {
		lblError->Text = "Заполните исходный массив";
		txtResult->Text = "";
		return;
	}
	array<String^>^ strings = txtMassiv->Text->Split(' ');
	Converter<String^, Int64>^ converter =
		gcnew Converter<String^, Int64>(Convert::ToInt64);

	array<String^>^ cleaned = gcnew array<String^>(strings->Length);

	int index = 0;
	for each(String^ s in strings) {
		if (!String::IsNullOrEmpty(s)) {
			cleaned[index++] = s;
		}
	}
	Array::Resize(cleaned, index);

	array<Int64>^ numbers;
	numbers = Array::ConvertAll(cleaned, converter);
	try {
		numbers = Array::ConvertAll(cleaned, converter);
		fill(numbers);
	}
	catch (FormatException^)
	{
		lblError->Text = "Некорректный формат";
		txtResult->Text = "";
		return;
	}
	catch (OverflowException^) {
		lblError->Text = "Число не попадает в допустимый ряд";
		txtResult->Text = "";
		return;
	}
	txtResult->Text = "";
	txtMassiv->Text = "";
	btnSave->Enabled = true;
	for (int i = 0; i < cleaned->Length; ++i) {
		txtMassiv->Text += Convert::ToString(cleaned[i]) + " ";
	}
	lblError->Text = "";
	if (radMid->Checked) {
		txtResult->Text = "Среднее значение: " + avg(numbers);
	}
	else if (radDecrease->Checked) {
		txtResult->Text = "Сортировка по убыванию: " + conv(decSort(numbers));
	}
	else if (radEven->Checked) {
		txtResult->Text = "Чётные элементы: " + even(numbers);
	}
	else if (radIncrease->Checked) {
		txtResult->Text = "Сортировка по возрастанию: " + conv(incSort(numbers));
	}
	else if (radMax->Checked) {
		txtResult->Text = "Максимальный элемент: " + max(numbers);
	}
	else if (radMin->Checked) {
		txtResult->Text = "Минимальный элемент: " + min(numbers);
	}
	else if (radOdd->Checked) {
		txtResult->Text = "Нечётные элементы: " + odd(numbers);
	}
	else if (radSum->Checked) {
		txtResult->Text = "Сумма элементов: " + sum(numbers);
	}
	btnDo->Enabled = false;
}
private: System::Void btnGenerate_Click(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	txtMassiv->Text = "";
	Random^ rand = gcnew Random();
	int count;
	Int64 Max, Min;
	if (txtMax->Text->Length == 0 || txtMin->Text->Length == 0 || txtNum->Text->Length == 0) {
		lblError->Text = "Заполните все поля";
		return;
	}
	try
	{
		count = Convert::ToInt32(txtNum->Text);
		Max = Convert::ToInt64(txtMax->Text);
		Min = Convert::ToInt64(txtMin->Text);
	}
	catch (FormatException^)
	{
		lblError->Text = "Некорректный формат";

		return;
	}
	if (Max < Min) {
		lblError->Text = "Диапазон массива указан неверно";
		return;
	}
	if (count < 1) {
		lblError->Text = "В массиве должно быть не менее 1 элемента";
		return;
	}
	String^ input;
	for (int i = 0; i < count; ++i) {
		input += Convert::ToString(rand->Next(Min, Max + 1)) + " ";
	}
	lblError->Text = "";
	currentArray = input;
	txtMassiv->Text = input;
}
private: System::Void btnInput_Click(System::Object^  sender, System::EventArgs^  e) {
	openFD->DefaultExt = ".txt";
	openFD->Filter = "Text files |*.txt";
	OpenFileDialog^ openFD = gcnew OpenFileDialog();
	try {
		if (openFD->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFD->FileName->Length > 0)
		{
			txtMax->Text = "";
			txtMin->Text = "";
			txtNum->Text = "";
			txtMassiv->Text = "";
			txtResult->Text = "";
			txtInput->Text = openFD->FileName;
			txtMassiv->Text = File::ReadAllText(txtInput->Text);
			array<String^>^ strings = txtMassiv->Text->Split(' ');
			Converter<String^, Int64>^ converter =
				gcnew Converter<String^, Int64>(Convert::ToInt64);

			array<String^>^ cleaned = gcnew array<String^>(strings->Length);

			int index = 0;
			for each(String^ s in strings) {
				if (!String::IsNullOrEmpty(s)) {
					cleaned[index++] = s;
				}
			}
			Array::Resize(cleaned, index);

			array<Int64>^ numbers;
			try {
				numbers = Array::ConvertAll(cleaned, converter);
				fill(numbers);
			}
			catch (FormatException^)
			{
				lblError->Text = "Некорректный формат";
				txtResult->Text = "";
				return;
			}
			catch (OverflowException^) {
				lblError->Text = "Число не попадает в допустимый ряд";
				txtResult->Text = "";
				return;
			}
			txtMassiv->Text = File::ReadAllText(txtInput->Text);
		}
	}
	catch (FileNotFoundException^) {
		lblError->Text = "Такого файла нет";

	}
	lblError->Text = "";
}
		 bool empty = true;
private: System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtResult->Text == "") {
		lblError->Text = "Отсутствует результат операции";
		return;
	}
	try {
		if (currentArray != txtMassiv->Text || empty) {
			empty = false;
			currentArray = txtInput->Text;
			SaveFileDialog^ saveFD = gcnew SaveFileDialog();
			saveFD->DefaultExt = ".txt";
			saveFD->Filter = "Text files |*.txt";
			if (saveFD->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFD->FileName->Length > 0)
			{
				btnSave->Enabled = false;
				txtOutput->Text = saveFD->FileName;
				StreamWriter^sw = gcnew StreamWriter(saveFD->FileName, true);
				if (txtMassiv->Text)
				sw->WriteLine("Сгенерированный массив: " + txtMassiv->Text);
				sw->WriteLine("Результаты обработки: " + txtResult->Text);
				sw->Close();
			}
		}
	}
	catch (...) {
		lblError->Text = "Такого файла нет";
		txtResult->Text = "";
	}
	lblError->Text = "";

}
private: System::Void txtInput_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radSum_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radMid_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radMin_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radMax_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radEven_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radOdd_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radIncrease_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;
}
private: System::Void radDecrease_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtResult->Text = "";
	btnDo->Enabled = true;

}
private: System::Void txtNum_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtMassiv->Text = "";
	txtResult->Text = "";
}
private: System::Void txtMin_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtMassiv->Text = "";
	txtResult->Text = "";
}
private: System::Void txtMax_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	txtMassiv->Text = "";
	txtResult->Text = "";
}
};
}
