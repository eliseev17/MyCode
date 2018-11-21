#pragma once

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FFirst
	/// </summary>
	public ref class FFirst : public System::Windows::Forms::Form
	{
	public:
		FFirst(void)
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
		~FFirst()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnReset;
	private: System::Windows::Forms::Label^  lblOper;
	private: System::Windows::Forms::Label^  lbl1;
	private: System::Windows::Forms::Label^  lbl2;
	private: System::Windows::Forms::Label^  lblResult;
	private: System::Windows::Forms::TextBox^  txt1;
	private: System::Windows::Forms::TextBox^  txt2;
	private: System::Windows::Forms::TextBox^  txtResult;
	private: System::Windows::Forms::Button^  btnDed;
	private: System::Windows::Forms::Button^  btnMult;
	private: System::Windows::Forms::Button^  btnDiv;



	private: System::Windows::Forms::Label^  label1;

	protected:

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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnDed = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(266, 202);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(101, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &FFirst::btnClose_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(266, 12);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(101, 30);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &FFirst::btnAdd_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(266, 164);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(101, 30);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &FFirst::btnReset_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(20, 12);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 25);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(4, 54);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(119, 20);
			this->lbl1->TabIndex = 4;
			this->lbl1->Text = L"Первое число:";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(4, 92);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(118, 20);
			this->lbl2->TabIndex = 5;
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(4, 133);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(93, 20);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"Результат:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(133, 54);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 26);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FFirst::txt1_KeyPress);
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(133, 92);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 26);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FFirst::txt2_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(133, 133);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 26);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnDed
			// 
			this->btnDed->Location = System::Drawing::Point(266, 50);
			this->btnDed->Name = L"btnDed";
			this->btnDed->Size = System::Drawing::Size(101, 30);
			this->btnDed->TabIndex = 10;
			this->btnDed->Text = L"Вычесть";
			this->btnDed->UseVisualStyleBackColor = true;
			this->btnDed->Click += gcnew System::EventHandler(this, &FFirst::btnDed_Click);
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(266, 88);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(101, 30);
			this->btnMult->TabIndex = 11;
			this->btnMult->Text = L"Умножить";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &FFirst::btnMult_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(266, 126);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(101, 30);
			this->btnDiv->TabIndex = 12;
			this->btnDiv->Text = L"Разделить";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &FFirst::btnDiv_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(61, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 13;
			// 
			// FFirst
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 244);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDed);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnClose);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FFirst";
			this->Text = L"Калькулятор";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();//Закрытие программы
	}
	private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtResult->Text = L"";//Очистка текстового поля "результат"
		this->label1->Text = L"";//Очистка метки, отображающей ошибки и предпупреждения
		float i1, i2, i3;//Переменные, хранящие в себе введенные данные и результат
		if ((txt1->Text != "") && (txt2->Text != ""))//Проверка на пустые поля
		{
			this->lblOper->Text = L"Сложение";//Вывод типа операции в метке
			i1 = Convert::ToSingle(txt1->Text);
			i2 = Convert::ToSingle(txt2->Text);
			i3 = i1 + i2;//Получение результата сложения введенных чисел
			this->txtResult->Text = Convert::ToString(i3);//Вывод результата в текстовое поле "результат"
		}
		else
		{
			this->label1->Text = L"Введите числа";//Сообщение о том, что поле/поля пустые
		}
	}
	private: System::Void btnReset_Click(System::Object^  sender, System::EventArgs^  e) {
		this->lblOper->Text = L"";//Очищение поля операции
		this->txt1->Text = L"";//Очищение поля первого числа
		this->txt2->Text = L"";//Очищение поля второго числа
		this->txtResult->Text = L"";//Очищение поля результата
	}
	private: System::Void btnDed_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtResult->Text = L"";//Очищение поля результата
		this->label1->Text = L"";//Очищение метки, отображающей ошибку
		float i1, i2, i3;//Переменные, хранящие в себе введенные данные и результат
		if ((txt1->Text != "") && (txt2->Text != ""))//Проверка на пустые поля
		{
			this->lblOper->Text = L"Вычитание";//Вывод типа операции в метке
			i1 = Convert::ToSingle(txt1->Text);
			i2 = Convert::ToSingle(txt2->Text);
			i3 = i1 - i2;//Получение результата вычитания введенных чисел
			this->txtResult->Text = Convert::ToString(i3);//Вывод результата в текстовое поле "результат"
		}
		else
		{
			this->label1->Text = L"Введите числа";//Сообщение о том, что поле/поля пустые
		}
	}
	private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtResult->Text = L"";//Очищение поля результата
		this->label1->Text = L"";//Очищение метки, отображающей ошибку
		float i1, i2, i3;//Переменные, хранящие в себе введенные данные и результат
		if ((txt1->Text != "") && (txt2->Text != ""))
		{
			this->lblOper->Text = L"Умножение";//Вывод типа операции в метке
			i1 = Convert::ToSingle(txt1->Text);
			i2 = Convert::ToSingle(txt2->Text);
			i3 = i1 * i2;//Получение результата умножения введенных чисел
			this->txtResult->Text = Convert::ToString(i3);//Вывод результата в текстовое поле "результат"
		}
		else
		{
			this->label1->Text = L"Введите числа";//Сообщение о том, что поле/поля пустые
		}
	}
	private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
		this->txtResult->Text = L"";//Очищение поля результата
		this->label1->Text = L"";//Очищение метки, отображающей ошибку
		float i1, i2, i3;//Переменные, хранящие в себе введенные данные и результат
		if ((txt1->Text != "") && (txt2->Text != ""))
		{
			this->lblOper->Text = L"Деление";//Вывод типа операции в метке
			i1 = Convert::ToSingle(txt1->Text);
			i2 = Convert::ToSingle(txt2->Text);
			if (i2 == 0) {//Проверка на то, чтобы делительне ге был равен нулю
				this->label1->Text = L"Делить на 0 \n нельзя";//Если делитель равен нулю, вывод ошибки в метку
			}
			else
			{
				i3 = i1 / i2;//Получение результата деления введенных чисел
				this->txtResult->Text = Convert::ToString(i3);//Вывод результата в текстовое поле "результат"
			}
		}
		else
		{
			this->label1->Text = L"Введите числа";//Сообщение о том, что поле/поля пустые
		}
	}

	private: System::Void txt1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
		{
			return;
		}
		if (e->KeyChar== '-')
			if ((txt1->Text == "") && (txt1->Text->IndexOf('-') != -1))
			{
				e->Handled = true;
			}
			else{
		return;
	}
		if (e->KeyChar == '.')
		{
			e->KeyChar = ',';
		}
		if (e->KeyChar == ',')
		{
			if ((txt1->Text == "") || (txt1->Text->IndexOf(',') != -1))
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
private: System::Void txt2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '-')
		if ((txt2->Text == "") && (txt2->Text->IndexOf('-') != -1))
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
		if ((txt2->Text == "") || (txt2->Text->IndexOf(',') != -1))
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
	
}
	; }

