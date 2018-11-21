#pragma once
#include <math.h>
#include <cmath>
namespace kvadrat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtA;
	private: System::Windows::Forms::TextBox^  txtB;
	private: System::Windows::Forms::TextBox^  txtC;



	private: System::Windows::Forms::TextBox^  resultX1;
	private: System::Windows::Forms::TextBox^  resultX2;
	protected:





	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblComment;

	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Button^  btnSolve;
	private: System::Windows::Forms::Button^  btnClose;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->txtC = (gcnew System::Windows::Forms::TextBox());
			this->resultX1 = (gcnew System::Windows::Forms::TextBox());
			this->resultX2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblComment = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnSolve = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(17, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэффициенты\r\nуравнения";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// txtA
			// 
			this->txtA->Location = System::Drawing::Point(64, 97);
			this->txtA->Name = L"txtA";
			this->txtA->Size = System::Drawing::Size(145, 26);
			this->txtA->TabIndex = 1;
			this->txtA->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textA_KeyPress);
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(64, 163);
			this->txtB->Name = L"txtB";
			this->txtB->Size = System::Drawing::Size(145, 26);
			this->txtB->TabIndex = 2;
			this->txtB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textB_KeyPress);
			// 
			// txtC
			// 
			this->txtC->Location = System::Drawing::Point(64, 229);
			this->txtC->Name = L"txtC";
			this->txtC->Size = System::Drawing::Size(145, 26);
			this->txtC->TabIndex = 3;
			this->txtC->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textC_KeyPress);
			// 
			// resultX1
			// 
			this->resultX1->Location = System::Drawing::Point(297, 97);
			this->resultX1->Name = L"resultX1";
			this->resultX1->ReadOnly = true;
			this->resultX1->Size = System::Drawing::Size(145, 26);
			this->resultX1->TabIndex = 4;
			// 
			// resultX2
			// 
			this->resultX2->Location = System::Drawing::Point(530, 97);
			this->resultX2->Name = L"resultX2";
			this->resultX2->ReadOnly = true;
			this->resultX2->Size = System::Drawing::Size(145, 26);
			this->resultX2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(378, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Корни уравнения";
			// 
			// lblComment
			// 
			this->lblComment->AutoSize = true;
			this->lblComment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblComment->Location = System::Drawing::Point(253, 178);
			this->lblComment->Name = L"lblComment";
			this->lblComment->Size = System::Drawing::Size(0, 29);
			this->lblComment->TabIndex = 7;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(64, 294);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(145, 40);
			this->btnReset->TabIndex = 8;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnSolve
			// 
			this->btnSolve->Location = System::Drawing::Point(297, 294);
			this->btnSolve->Name = L"btnSolve";
			this->btnSolve->Size = System::Drawing::Size(145, 40);
			this->btnSolve->TabIndex = 9;
			this->btnSolve->Text = L"Решить";
			this->btnSolve->UseVisualStyleBackColor = true;
			this->btnSolve->Click += gcnew System::EventHandler(this, &MyForm::btnSolve_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(530, 294);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(145, 40);
			this->btnClose->TabIndex = 10;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 29);
			this->label4->TabIndex = 11;
			this->label4->Text = L"a =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 29);
			this->label5->TabIndex = 12;
			this->label5->Text = L"b =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 29);
			this->label6->TabIndex = 13;
			this->label6->Text = L"c =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(230, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 29);
			this->label7->TabIndex = 14;
			this->label7->Text = L"x1 =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(463, 94);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 29);
			this->label8->TabIndex = 15;
			this->label8->Text = L"x2 =";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 346);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSolve);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lblComment);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->resultX2);
			this->Controls->Add(this->resultX1);
			this->Controls->Add(this->txtC);
			this->Controls->Add(this->txtB);
			this->Controls->Add(this->txtA);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Решение квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    //Функция, отвечающая за закрытие программы
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	//Функция, отвечающая за сброс
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtA->Text = L"";//очищение полей
		this->txtB->Text = L"";
		this->txtC->Text = L"";
		this->resultX1->Text = L"";
		this->resultX2->Text = L"";
		this->lblComment->Text = L"";
	}
	//Функция, выполняющая команду "решить"
	private: System::Void btnSolve_Click(System::Object^  sender, System::EventArgs^  e) {
		//очищение полей результата
		this->resultX1->Text = L"";
		this->resultX2->Text = L"";
		double a, b, c;
		double D, x1, x2;
		//проверка на пустые поля ввода
		if ((this->txtA->Text != L"") && (this->txtB->Text != L"") && (this->txtC->Text != L"")) {
			a = Convert::ToDouble(txtA->Text);
			b = Convert::ToDouble(txtB->Text);
			c = Convert::ToDouble(txtC->Text);
			if (a == 0 && b == 0 && c == 0) {
				this->lblComment->Text = L"Верное равенство";
			}
			else if (a == 0 && b == 0) {
				this->lblComment->Text = L"Неверное равенство";
			}
			else if(a==0){
					x1 = -b / c;
					this->lblComment->Text = L"Линейное уравнение\nимеет один корень";
					this->resultX1->Text = Convert::ToString(x1);
				}
			else
			{
				D = (b*b) - (4 * a*c);//подсчет дискриминанта
				//вычисление корней уравнения
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);
				//варианты значений дискриминанта
				if (D > 0) {
					this->lblComment->Text = L"Дискриминант > 0.\nУравнение имеет 2 корня";
					this->resultX1->Text = Convert::ToString(x1);
					this->resultX2->Text = Convert::ToString(x2);
				}
				else if (D == 0) {
					this->lblComment->Text = L"Дискриминант = 0.\nУравнение имеет 2 одинаковых\nкорня";
					this->resultX1->Text = Convert::ToString(x1);
					this->resultX2->Text = Convert::ToString(x2);
				}
				else if (D < 0) {
					this->resultX1->Text = L"";
					this->resultX2->Text = L"";
					this->lblComment->Text = L"Дискриминант < 0.\nДействительных корней нет";
				}
			}
		}
		else {
			this->lblComment->Text = L"Введите числа";
		}
	}

	private: System::Void textA_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		{
			return;
		}
		if (e->KeyChar == '-')
			if ((txtA->Text == "") && (txtA->Text->IndexOf('-') != -1))
			{
				e->Handled = true;
			}
			else {
				return;
			}
		if (e->KeyChar == '.')
		{
			e->KeyChar = ',';
		}
		if (e->KeyChar == ',')
		{
			if ((txtA->Text == "") || (txtA->Text->IndexOf(',') != -1))
			{
				e->Handled = true;
			}
			return;
		}
		if (e->KeyChar == 0x08)
		{
			return;
		}
		e->Handled = true;
	}
private: System::Void textB_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((txtB->Text == "") && (txtB->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else {
			return;
		}
	if (e->KeyChar == '.')
	{
		e->KeyChar = ',';
	}
	if (e->KeyChar == ',')
	{
		if ((txtB->Text == "") || (txtB->Text->IndexOf(',') != -1))
		{
			e->Handled = true;
		}
		return;
	}
	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
}
private: System::Void textC_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((txtC->Text == "") && (txtC->Text->IndexOf('-') != -1))
		{
			e->Handled = true;
		}
		else {
			return;
		}
	if (e->KeyChar == '.')
	{
		e->KeyChar = ',';
	}
	if (e->KeyChar == ',')
	{
		if ((txtC->Text == "") || (txtC->Text->IndexOf(',') != -1))
		{
			e->Handled = true;
		}
		return;
	}
	if (e->KeyChar == 0x08)
	{
		return;
	}
	e->Handled = true;
}

	};
}

