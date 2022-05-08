#pragma once
#include <math.h>


double logar(double b, double a)
{
	return log(b) / log(a);
};

namespace Calculator {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	protected:








	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(214, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 78);
			this->label1->TabIndex = 0;
			this->label1->Text = L"log";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(214, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 78);
			this->label2->TabIndex = 1;
			this->label2->Text = L"log";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(381, 66);
			this->textBox2->MaxLength = 3;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(120, 75);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(506, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 69);
			this->label3->TabIndex = 4;
			this->label3->Text = L"=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(506, 294);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 69);
			this->label4->TabIndex = 5;
			this->label4->Text = L"=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(516, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 69);
			this->label5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(562, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 69);
			this->label6->TabIndex = 10;
			this->label6->Text = L" ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(227, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(315, 51);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(97, 66);
			this->textBox1->MaxLength = 3;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 75);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox3->Location = System::Drawing::Point(558, 66);
			this->textBox3->MaxLength = 3;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(120, 75);
			this->textBox3->TabIndex = 13;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox4->Location = System::Drawing::Point(482, 16);
			this->textBox4->MaxLength = 3;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 49);
			this->textBox4->TabIndex = 14;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox5->Location = System::Drawing::Point(323, 131);
			this->textBox5->MaxLength = 3;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 49);
			this->textBox5->TabIndex = 15;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(371, 294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 69);
			this->label7->TabIndex = 16;
			this->label7->Text = L" ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(325, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 44);
			this->label8->TabIndex = 17;
			this->label8->Text = L" ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(487, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 44);
			this->label9->TabIndex = 18;
			this->label9->Text = L" ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(85, 297);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(46, 69);
			this->label10->TabIndex = 19;
			this->label10->Text = L" ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(201, 389);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 69);
			this->label11->TabIndex = 20;
			this->label11->Text = L" ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HighlightText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(777, 483);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyForm";
			this->Text = L"Калькулятор интегралов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		double base, degree, cof, result, term; // 8 9 10 6 7     11-предупреждение
		double base1=1, degree1=1, cof1=1, result1=1, term1=1;
		int counter = 0;

		//cof = System::Double::Parse(this->textBox1->Text); //коэффицент
		//term = System::Double::Parse(this->textBox2->Text);  //лог выражение
		//result  = System::Double::Parse(this->textBox3->Text);// результат
		//degree = System::Double::Parse(this->textBox4->Text);//степень
		//base = System::Double::Parse(this->textBox5->Text);//основание

		if (!(textBox1->Text == "")){
			cof = System::Double::Parse(this->textBox1->Text); //коэффицент
			++counter;
			label10->Text = cof.ToString();
		}
		if (!(textBox2->Text == "")) {
			term = System::Double::Parse(this->textBox2->Text);  //лог выражение
			++counter;
			label7->Text = term.ToString();
		}
		if (!(textBox3->Text == "")) {
			result = System::Double::Parse(this->textBox3->Text);// результат
			++counter;
			label6->Text = result.ToString();
		}
		if (!(textBox4->Text == "")) {
			degree = System::Double::Parse(this->textBox4->Text);//степень
			++counter;
			label9->Text = degree.ToString();
		}
		if (!(textBox5->Text == "")) {
			base = System::Double::Parse(this->textBox5->Text);//основание
			++counter;
			label8->Text = base.ToString();
		}
		
		if (counter != 4) {
			label11->Text = "Неверный ввод";
		}
		else {
			if (textBox3->Text == "") { // результат
				degree1 = degree * cof;
				term1 = pow(term,degree1);
				result1 = logar(term1, base);
				result1 = round(result1 * 10) / 10;
				label6->Text = result1.ToString();
			}
			if (textBox1->Text == "") { // коэфиценте перед лог
				term1 = pow(base, result);
				degree1 = logar(term1, base);
				cof1 = degree1 / degree;
				cof1 = round(cof1 * 10) / 10;
				label10->Text = cof1.ToString();
			}
			if (textBox2->Text == "") { // лог выражение
				degree1 = cof * degree;
				term1 = pow(base, result);
				term1 = pow(term1, 1.0 / degree1);
				term1 = round(term1 * 10) / 10;
				label7->Text = term1.ToString();
			}
			if (textBox4->Text == "") { //степень
				term1 = pow(base, result);
				degree1 = logar(term1, term);
				degree1 = degree1 / cof;
				degree1 = round(degree1 * 10) / 10;
				label9->Text = degree1.ToString();
			}
			if (textBox5->Text == "") { //основание
				degree1 = degree * cof;
				term1 = pow(term, degree);
				base1 = pow(term1, 1.0 / result);
								base1 = round(base1 * 10) / 10;
				label8->Text = base1.ToString();
			}


		}
		

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Only allow 1 decimal point
		if (e->KeyChar == '.')
		{
			if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
				e->Handled = true;
		}
		// Accept only digits "." and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Only allow 1 decimal point
		if (e->KeyChar == '.')
		{
			if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
				e->Handled = true;
		}
		// Accept only digits "." and the Backspace character
		else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Only allow 1 decimal point
	if (e->KeyChar == '.')
	{
		if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Only allow 1 decimal point
	if (e->KeyChar == '.')
	{
		if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Only allow 1 decimal point
	if (e->KeyChar == '.')
	{
		if (this->textBox2->Text->Contains(".") && !this->textBox2->SelectedText->Contains("."))
			e->Handled = true;
	}
	// Accept only digits "." and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
		e->Handled = true;
}
};
};

