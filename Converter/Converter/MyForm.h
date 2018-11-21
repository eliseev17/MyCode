#pragma once
#include <cmath>
namespace ConverterAPM {

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
	private: System::Windows::Forms::GroupBox^  Box1;
	protected:
	private: System::Windows::Forms::GroupBox^  Box2;
	private: System::Windows::Forms::GroupBox^  Box3;
	private: System::Windows::Forms::Button^  btnConvert;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt2;

	private: System::Windows::Forms::TextBox^  txt1;

	private: System::Windows::Forms::Label^  result;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  vvod;
	private: System::Windows::Forms::TextBox^  vod;
	private: System::Windows::Forms::TextBox^  res;
	private: System::Windows::Forms::RadioButton^  rbtn2;




	private: System::Windows::Forms::RadioButton^  rbtn1;



	private: System::Windows::Forms::RadioButton^  rbtn3;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  rbtn4;

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
			this->Box1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->Box2 = (gcnew System::Windows::Forms::GroupBox());
			this->result = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->vvod = (gcnew System::Windows::Forms::Label());
			this->vod = (gcnew System::Windows::Forms::TextBox());
			this->res = (gcnew System::Windows::Forms::TextBox());
			this->Box3 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtn4 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn3 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbtn1 = (gcnew System::Windows::Forms::RadioButton());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->Box1->SuspendLayout();
			this->Box2->SuspendLayout();
			this->Box3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Box1
			// 
			this->Box1->Controls->Add(this->label3);
			this->Box1->Controls->Add(this->label2);
			this->Box1->Controls->Add(this->label1);
			this->Box1->Controls->Add(this->txt2);
			this->Box1->Controls->Add(this->txt1);
			this->Box1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Box1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Box1->Location = System::Drawing::Point(12, 12);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(609, 240);
			this->Box1->TabIndex = 0;
			this->Box1->TabStop = false;
			this->Box1->Text = L"Исходные данные";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(276, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 37);
			this->label3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(6, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(285, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Курс конвертации (₽/$):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(6, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сумма для конвертации:";
			// 
			// txt2
			// 
			this->txt2->Enabled = false;
			this->txt2->Location = System::Drawing::Point(329, 145);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(244, 35);
			this->txt2->TabIndex = 1;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt2_KeyPress);
			this->txt2->Leave += gcnew System::EventHandler(this, &MyForm::txt2_Leave);
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(329, 70);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(244, 35);
			this->txt1->TabIndex = 0;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txt1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txt1_KeyPress);
			this->txt1->Leave += gcnew System::EventHandler(this, &MyForm::txt1_Leave);
			// 
			// Box2
			// 
			this->Box2->Controls->Add(this->result);
			this->Box2->Controls->Add(this->label4);
			this->Box2->Controls->Add(this->vvod);
			this->Box2->Controls->Add(this->vod);
			this->Box2->Controls->Add(this->res);
			this->Box2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Box2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Box2->Location = System::Drawing::Point(12, 258);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(609, 121);
			this->Box2->TabIndex = 1;
			this->Box2->TabStop = false;
			this->Box2->Text = L"Результат конвертации";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->ForeColor = System::Drawing::SystemColors::ControlText;
			this->result->Location = System::Drawing::Point(524, 57);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 29);
			this->result->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(298, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"=";
			// 
			// vvod
			// 
			this->vvod->AutoSize = true;
			this->vvod->ForeColor = System::Drawing::SystemColors::ControlText;
			this->vvod->Location = System::Drawing::Point(235, 57);
			this->vvod->Name = L"vvod";
			this->vvod->Size = System::Drawing::Size(0, 29);
			this->vvod->TabIndex = 2;
			// 
			// vod
			// 
			this->vod->Location = System::Drawing::Point(55, 54);
			this->vod->Name = L"vod";
			this->vod->ReadOnly = true;
			this->vod->Size = System::Drawing::Size(174, 35);
			this->vod->TabIndex = 1;
			this->vod->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// res
			// 
			this->res->Location = System::Drawing::Point(344, 54);
			this->res->Name = L"res";
			this->res->ReadOnly = true;
			this->res->Size = System::Drawing::Size(174, 35);
			this->res->TabIndex = 0;
			this->res->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Box3
			// 
			this->Box3->Controls->Add(this->rbtn4);
			this->Box3->Controls->Add(this->rbtn3);
			this->Box3->Controls->Add(this->rbtn2);
			this->Box3->Controls->Add(this->rbtn1);
			this->Box3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Box3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->Box3->Location = System::Drawing::Point(627, 12);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(325, 316);
			this->Box3->TabIndex = 2;
			this->Box3->TabStop = false;
			this->Box3->Text = L"Направление конвертации";
			// 
			// rbtn4
			// 
			this->rbtn4->AutoSize = true;
			this->rbtn4->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::HotTrack;
			this->rbtn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtn4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn4->Location = System::Drawing::Point(21, 246);
			this->rbtn4->Name = L"rbtn4";
			this->rbtn4->Size = System::Drawing::Size(189, 33);
			this->rbtn4->TabIndex = 3;
			this->rbtn4->Text = L"Рубли в евро";
			this->rbtn4->UseVisualStyleBackColor = true;
			this->rbtn4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// rbtn3
			// 
			this->rbtn3->AutoSize = true;
			this->rbtn3->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::HotTrack;
			this->rbtn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtn3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn3->Location = System::Drawing::Point(21, 207);
			this->rbtn3->Name = L"rbtn3";
			this->rbtn3->Size = System::Drawing::Size(189, 33);
			this->rbtn3->TabIndex = 2;
			this->rbtn3->Text = L"Евро в рубли";
			this->rbtn3->UseVisualStyleBackColor = true;
			this->rbtn3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// rbtn2
			// 
			this->rbtn2->AutoSize = true;
			this->rbtn2->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::HotTrack;
			this->rbtn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtn2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn2->Location = System::Drawing::Point(21, 105);
			this->rbtn2->Name = L"rbtn2";
			this->rbtn2->Size = System::Drawing::Size(236, 33);
			this->rbtn2->TabIndex = 1;
			this->rbtn2->Text = L"Рубли в доллары";
			this->rbtn2->UseVisualStyleBackColor = true;
			this->rbtn2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// rbtn1
			// 
			this->rbtn1->AutoSize = true;
			this->rbtn1->FlatAppearance->CheckedBackColor = System::Drawing::SystemColors::HotTrack;
			this->rbtn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->rbtn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->rbtn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtn1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbtn1->Location = System::Drawing::Point(21, 66);
			this->rbtn1->Name = L"rbtn1";
			this->rbtn1->Size = System::Drawing::Size(236, 33);
			this->rbtn1->TabIndex = 0;
			this->rbtn1->Text = L"Доллары в рубли";
			this->rbtn1->UseVisualStyleBackColor = true;
			this->rbtn1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// btnConvert
			// 
			this->btnConvert->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnConvert->Enabled = false;
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnConvert->Location = System::Drawing::Point(627, 334);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(189, 45);
			this->btnConvert->TabIndex = 3;
			this->btnConvert->Text = L"Конвертировать";
			this->btnConvert->UseVisualStyleBackColor = false;
			this->btnConvert->Click += gcnew System::EventHandler(this, &MyForm::btnConvert_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(822, 334);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(130, 45);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 391);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->Box3);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->Box1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"APM оператора обменного пункта";
			this->Box1->ResumeLayout(false);
			this->Box1->PerformLayout();
			this->Box2->ResumeLayout(false);
			this->Box2->PerformLayout();
			this->Box3->ResumeLayout(false);
			this->Box3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
	bool bol = true;
	double i1, i2, i3;
	int param;
	double c1, c2, c3, c4;
	String^ temp;
		//напрвление доллары в рубли
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	vod->Text = L"";//очистка полей
	res->Text = L"";//
	vvod->Text = L"$";
	result->Text = L"₽";
	label2->Text = L"Курс конвертации (₽/$):";
	bol = true;//логическая переменная для определения операции (деление/сложение)
	param = 1;//присваивание значения param для алгоритма с выбором варианта
	txt2->Text = c1.ToString("f2");//вывод курса в текстовое поле в формате f2
	btnConvert->Enabled = true;
	txt2->Enabled = true;
}
		 //направление рубли в доллары
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	vod->Text = L"";//очистка полей
	res->Text = L"";//
	vvod->Text = L"₽";
	result->Text = L"$";
	label2->Text = L"Курс конвертации (₽/$):";
	bol = false;//логическая переменная для определения операции (деление/сложение)
	param = 2;
	txt2->Text = c2.ToString("f2");
	btnConvert->Enabled = true;
	txt2->Enabled = true;
}
		 //напрвление евро в рубли
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	vod->Text = L"";//очистка полей
	res->Text = L"";//
	vvod->Text = L"€";
	result->Text = L"₽";
	label2->Text = L"Курс конвертации (₽/€):";
	bol = true;
	param = 3;
	txt2->Text = c3.ToString("f2");
	btnConvert->Enabled = true;
	txt2->Enabled = true;
}
		 //напрвление рубли в евро
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	vod->Text = L"";//очистка полей
	res->Text = L"";//
	vvod->Text = L"₽";
	result->Text = L"€";
	label2->Text = L"Курс конвертации (₽/€):";
	bol = false;
	param = 4;
	txt2->Text = c4.ToString("f2");
	btnConvert->Enabled = true;
	txt2->Enabled = true;
}
private: System::Void btnConvert_Click(System::Object^  sender, System::EventArgs^  e) {
	label3->Text = L"";//очистка полей
	res->Text = L"";  //
		//проверка на пустую строку
	if ((txt1->Text != L"") && (txt2->Text != L"")) {
		i1 = Convert::ToDouble(txt1->Text);
		i2 = Convert::ToDouble(txt2->Text);
		temp = i1.ToString("f2");
		vod->Text = temp;
		//определение операции (умноженме/деление)
		if (bol == true) {
			i3 = i2 * i1;
			i3 = floor(i3 * 100) / 100;//округление
			temp = i3.ToString("f2");
			res->Text = temp;//вывод
		}
		else {
			i3 = i1 / i2;
			i3 = floor(i3 * 100) / 100;//окркгление
			temp = i3.ToString("f2");
			res->Text = temp;//вывод
		}
	}
	else {
		//сообщение о пустой строке/строках
		this->label3->Text = L"Введите числа";
	}
}

private: System::Void txt1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
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

private: System::Void txt1_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (txt1->Text->Length != 0) {
		String^ temp;
		i1 = Convert::ToDouble(txt1->Text);
		temp = i1.ToString("f2");
		txt1->Text = temp;
	}
}
		 //действие при выходе из текстового поля с курсом конвертации
private: System::Void txt2_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (txt2->Text->Length != 0) {
		String^ temp;
		i2 = Convert::ToDouble(txt2->Text);
		temp = i2.ToString("f2");
		txt2->Text = temp;
	}
	//алгоритм с выбором варианта для запомниания курса
	//для каждого направления конвертации
	switch (param)
	{
	case 1:
		c1 = i2;
		break;
	case 2:
		c2 = i2;
		break;
	case 3:
		c3 =i2;
		break;
	case 4:
		c4 = i2;
		break;
	}
	

}

}

; }

