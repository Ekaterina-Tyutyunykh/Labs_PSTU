#pragma once

#include "OpenGL.h"
#include <algorithm>
#include "class_graph.h"
#include "matrix.h"

namespace OpenGL_on_a_Windows_Form {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace OpenGLForm;

    graph* current;
    graph test;

    int counter = 0;
    int SIZE = 0;
    int** matrix = new int*[SIZE];

    /// <summary>
    /// Summary for Form1
    ///
    /// WARNING: If you change the name of this class, you will need to change the
    ///          'Resource File Name' property for the managed resource compiler tool
    ///          associated with all .resx files this class depends on.  Otherwise,
    ///          the designers will not be able to interact properly with localized
    ///          resources associated with this form.
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
            OpenGL = gcnew COpenGL(this, 640, 480);

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::ComponentModel::IContainer^ components;
    public: System::Windows::Forms::Timer^ timer1;
    protected:

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::TextBox^ textBox1;



private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label5;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::TabControl^ tabControl2;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TabPage^ tabPage4;




       private:
           /// <summary>
           /// Required designer variable.
           /// </summary>

           OpenGLForm::COpenGL^ OpenGL;


#pragma region Windows Form Designer generated code
           /// <summary>
           /// Required method for Designer support - do not modify
           /// the contents of this method with the code editor.
           /// </summary>
           void InitializeComponent(void)
           {
               this->components = (gcnew System::ComponentModel::Container());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label31 = (gcnew System::Windows::Forms::Label());
               this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
               this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
               this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->label8 = (gcnew System::Windows::Forms::Label());
               this->label9 = (gcnew System::Windows::Forms::Label());
               this->label10 = (gcnew System::Windows::Forms::Label());
               this->label11 = (gcnew System::Windows::Forms::Label());
               this->label12 = (gcnew System::Windows::Forms::Label());
               this->label13 = (gcnew System::Windows::Forms::Label());
               this->label14 = (gcnew System::Windows::Forms::Label());
               this->label15 = (gcnew System::Windows::Forms::Label());
               this->label16 = (gcnew System::Windows::Forms::Label());
               this->label17 = (gcnew System::Windows::Forms::Label());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
               this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
               this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
               this->tabControl1->SuspendLayout();
               this->tabPage1->SuspendLayout();
               this->tabPage2->SuspendLayout();
               this->tabControl2->SuspendLayout();
               this->tabPage3->SuspendLayout();
               this->tabPage4->SuspendLayout();
               this->SuspendLayout();
               // 
               // button1
               // 
               this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                   static_cast<System::Int32>(static_cast<System::Byte>(220)));
               this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button1->Location = System::Drawing::Point(62, 107);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(392, 51);
               this->button1->TabIndex = 0;
               this->button1->Text = L"Добавить города";
               this->button1->UseVisualStyleBackColor = false;
               this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
               // 
               // timer1
               // 
               this->timer1->Enabled = true;
               this->timer1->Interval = 10;
               this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(252, 38);
               this->textBox1->MaxLength = 2;
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(100, 30);
               this->textBox1->TabIndex = 1;
               this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
               this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
               // 
               // label31
               // 
               this->label31->AutoSize = true;
               this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label31->Location = System::Drawing::Point(21, 31);
               this->label31->Name = L"label31";
               this->label31->Size = System::Drawing::Size(215, 38);
               this->label31->TabIndex = 133;
               this->label31->Text = L"Число городов:";
               // 
               // tabControl1
               // 
               this->tabControl1->Controls->Add(this->tabPage1);
               this->tabControl1->Controls->Add(this->tabPage2);
               this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->tabControl1->Location = System::Drawing::Point(879, 12);
               this->tabControl1->Name = L"tabControl1";
               this->tabControl1->SelectedIndex = 0;
               this->tabControl1->Size = System::Drawing::Size(611, 277);
               this->tabControl1->TabIndex = 134;
               // 
               // tabPage1
               // 
               this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->tabPage1->Controls->Add(this->label31);
               this->tabPage1->Controls->Add(this->button1);
               this->tabPage1->Controls->Add(this->textBox1);
               this->tabPage1->Location = System::Drawing::Point(4, 34);
               this->tabPage1->Name = L"tabPage1";
               this->tabPage1->Padding = System::Windows::Forms::Padding(3);
               this->tabPage1->Size = System::Drawing::Size(603, 239);
               this->tabPage1->TabIndex = 0;
               this->tabPage1->Text = L"Города";
               // 
               // tabPage2
               // 
               this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->tabPage2->Controls->Add(this->label3);
               this->tabPage2->Controls->Add(this->label2);
               this->tabPage2->Controls->Add(this->textBox4);
               this->tabPage2->Controls->Add(this->textBox3);
               this->tabPage2->Controls->Add(this->textBox2);
               this->tabPage2->Controls->Add(this->label1);
               this->tabPage2->Controls->Add(this->button2);
               this->tabPage2->Controls->Add(this->label4);
               this->tabPage2->Location = System::Drawing::Point(4, 34);
               this->tabPage2->Name = L"tabPage2";
               this->tabPage2->Padding = System::Windows::Forms::Padding(3);
               this->tabPage2->Size = System::Drawing::Size(603, 239);
               this->tabPage2->TabIndex = 1;
               this->tabPage2->Text = L"Дороги";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(170, 26);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(22, 25);
               this->label3->TabIndex = 7;
               this->label3->Text = L"в";
               this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(6, 27);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(84, 25);
               this->label2->TabIndex = 6;
               this->label2->Text = L"Путь из";
               // 
               // textBox4
               // 
               this->textBox4->Location = System::Drawing::Point(405, 24);
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(62, 30);
               this->textBox4->TabIndex = 5;
               this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox4_KeyPress);
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(194, 24);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(62, 30);
               this->textBox3->TabIndex = 4;
               this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(104, 23);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(62, 30);
               this->textBox2->TabIndex = 3;
               this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(16, 59);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(0, 25);
               this->label1->TabIndex = 2;
               // 
               // button2
               // 
               this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                   static_cast<System::Int32>(static_cast<System::Byte>(220)));
               this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button2->Location = System::Drawing::Point(477, 21);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(119, 34);
               this->button2->TabIndex = 1;
               this->button2->Text = L"Добавить";
               this->button2->UseVisualStyleBackColor = false;
               this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(253, 26);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(147, 25);
               this->label4->TabIndex = 8;
               this->label4->Text = L", расстояние =";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label5->Location = System::Drawing::Point(19, 25);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(0, 25);
               this->label5->TabIndex = 135;
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label7->Location = System::Drawing::Point(703, 12);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(0, 25);
               this->label7->TabIndex = 137;
               this->label7->Visible = false;
               // 
               // label8
               // 
               this->label8->AutoSize = true;
               this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label8->Location = System::Drawing::Point(703, 52);
               this->label8->Name = L"label8";
               this->label8->Size = System::Drawing::Size(0, 25);
               this->label8->TabIndex = 138;
               this->label8->Visible = false;
               // 
               // label9
               // 
               this->label9->AutoSize = true;
               this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label9->Location = System::Drawing::Point(703, 93);
               this->label9->Name = L"label9";
               this->label9->Size = System::Drawing::Size(0, 25);
               this->label9->TabIndex = 139;
               this->label9->Visible = false;
               // 
               // label10
               // 
               this->label10->AutoSize = true;
               this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label10->Location = System::Drawing::Point(703, 126);
               this->label10->Name = L"label10";
               this->label10->Size = System::Drawing::Size(0, 25);
               this->label10->TabIndex = 140;
               this->label10->Visible = false;
               // 
               // label11
               // 
               this->label11->AutoSize = true;
               this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label11->Location = System::Drawing::Point(703, 171);
               this->label11->Name = L"label11";
               this->label11->Size = System::Drawing::Size(0, 25);
               this->label11->TabIndex = 141;
               this->label11->Visible = false;
               // 
               // label12
               // 
               this->label12->AutoSize = true;
               this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label12->Location = System::Drawing::Point(703, 213);
               this->label12->Name = L"label12";
               this->label12->Size = System::Drawing::Size(0, 25);
               this->label12->TabIndex = 142;
               this->label12->Visible = false;
               // 
               // label13
               // 
               this->label13->AutoSize = true;
               this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label13->Location = System::Drawing::Point(703, 254);
               this->label13->Name = L"label13";
               this->label13->Size = System::Drawing::Size(0, 25);
               this->label13->TabIndex = 143;
               this->label13->Visible = false;
               // 
               // label14
               // 
               this->label14->AutoSize = true;
               this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label14->Location = System::Drawing::Point(703, 292);
               this->label14->Name = L"label14";
               this->label14->Size = System::Drawing::Size(0, 25);
               this->label14->TabIndex = 144;
               this->label14->Visible = false;
               // 
               // label15
               // 
               this->label15->AutoSize = true;
               this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label15->Location = System::Drawing::Point(703, 335);
               this->label15->Name = L"label15";
               this->label15->Size = System::Drawing::Size(0, 25);
               this->label15->TabIndex = 145;
               this->label15->Visible = false;
               // 
               // label16
               // 
               this->label16->AutoSize = true;
               this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
                   static_cast<System::Int32>(static_cast<System::Byte>(109)));
               this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label16->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
               this->label16->Location = System::Drawing::Point(703, 373);
               this->label16->Name = L"label16";
               this->label16->Size = System::Drawing::Size(0, 25);
               this->label16->TabIndex = 146;
               this->label16->Visible = false;
               // 
               // label17
               // 
               this->label17->AutoSize = true;
               this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->label17->Location = System::Drawing::Point(19, 21);
               this->label17->Name = L"label17";
               this->label17->Size = System::Drawing::Size(0, 25);
               this->label17->TabIndex = 147;
               // 
               // button3
               // 
               this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                   static_cast<System::Int32>(static_cast<System::Byte>(220)));
               this->button3->Location = System::Drawing::Point(428, 21);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(151, 37);
               this->button3->TabIndex = 148;
               this->button3->Text = L"Вычислить";
               this->button3->UseVisualStyleBackColor = false;
               this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
               // 
               // tabControl2
               // 
               this->tabControl2->Controls->Add(this->tabPage3);
               this->tabControl2->Controls->Add(this->tabPage4);
               this->tabControl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->tabControl2->Location = System::Drawing::Point(883, 314);
               this->tabControl2->Name = L"tabControl2";
               this->tabControl2->SelectedIndex = 0;
               this->tabControl2->Size = System::Drawing::Size(603, 340);
               this->tabControl2->TabIndex = 149;
               // 
               // tabPage3
               // 
               this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->tabPage3->Controls->Add(this->label5);
               this->tabPage3->ForeColor = System::Drawing::Color::Black;
               this->tabPage3->Location = System::Drawing::Point(4, 34);
               this->tabPage3->Name = L"tabPage3";
               this->tabPage3->Padding = System::Windows::Forms::Padding(3);
               this->tabPage3->Size = System::Drawing::Size(595, 302);
               this->tabPage3->TabIndex = 0;
               this->tabPage3->Text = L"Матрица смежности";
               // 
               // tabPage4
               // 
               this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(171)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->tabPage4->Controls->Add(this->button3);
               this->tabPage4->Controls->Add(this->label17);
               this->tabPage4->Location = System::Drawing::Point(4, 34);
               this->tabPage4->Name = L"tabPage4";
               this->tabPage4->Padding = System::Windows::Forms::Padding(3);
               this->tabPage4->Size = System::Drawing::Size(595, 302);
               this->tabPage4->TabIndex = 1;
               this->tabPage4->Text = L"Задача Комивояжера";
               // 
               // Form1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
                   static_cast<System::Int32>(static_cast<System::Byte>(220)));
               this->ClientSize = System::Drawing::Size(1491, 666);
               this->Controls->Add(this->tabControl2);
               this->Controls->Add(this->label16);
               this->Controls->Add(this->label15);
               this->Controls->Add(this->label14);
               this->Controls->Add(this->label13);
               this->Controls->Add(this->label12);
               this->Controls->Add(this->label11);
               this->Controls->Add(this->label10);
               this->Controls->Add(this->label9);
               this->Controls->Add(this->label8);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->tabControl1);
               this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
               this->Margin = System::Windows::Forms::Padding(4);
               this->MaximizeBox = false;
               this->Name = L"Form1";
               this->Text = L"Граф";
               this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
               this->tabControl1->ResumeLayout(false);
               this->tabPage1->ResumeLayout(false);
               this->tabPage1->PerformLayout();
               this->tabPage2->ResumeLayout(false);
               this->tabPage2->PerformLayout();
               this->tabControl2->ResumeLayout(false);
               this->tabPage3->ResumeLayout(false);
               this->tabPage3->PerformLayout();
               this->tabPage4->ResumeLayout(false);
               this->tabPage4->PerformLayout();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

  private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
  {
       
  }
  
    
  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

      INT16 count = System::Int16::Parse(this->textBox1->Text);
      if (count >= 1 && count < 11) {

      //scene render
      UNREFERENCED_PARAMETER(sender);
      UNREFERENCED_PARAMETER(e);
      OpenGL->get_data(&test);
      OpenGL->Render();
      OpenGL->SwapOpenGLBuffers();

      if (textBox1->Text != "") {
                    
              int x0 = 310;
              int y0 = 230;
              int x1, y1;
              int r = 190;
              
              SIZE = count;

              for (int i = 0; i < SIZE; i++) {
                  matrix[i] = new int[SIZE];
              }
              for (int i = 0; i < SIZE; i++) {
                  for (int j = 0; j < SIZE; j++) {
                      matrix[i][j] = 0;
                  }
              }
              
              //numbering and arrangement vertex
              for (int i = 1; i <= count; ++i) {
                  x1 = (r * cos((float)i * 6.28 / (float)count));
                  y1 = (r * sin((float)i * 6.28 / (float)count));
                  switch (i) {
                  case 1: {
                      this->label7->Visible = true;
                      this->label7->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label7->Text = "0";
                  }break;
                  case 2: {
                      this->label8->Visible = true;
                      this->label8->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label8->Text = "0";
                      this->label7->Text = "1";
                  }break;
                  case 3: {
                      this->label9->Visible = true;
                      this->label9->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label9->Text = "0";
                      this->label8->Text = "1";
                      this->label7->Text = "2";

                  }break;
                  case 4: {
                      this->label10->Visible = true;
                      this->label10->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label10->Text = "0";
                      this->label9->Text = "1";
                      this->label8->Text = "2";
                      this->label7->Text = "3";
                  }break;
                  case 5: {
                      this->label11->Visible = true;
                      this->label11->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label11->Text = "0";
                      this->label10->Text = "1";
                      this->label9->Text = "2";
                      this->label8->Text = "3";
                      this->label7->Text = "4";
                  }break;
                  case 6: {
                      this->label12->Visible = true;
                      this->label12->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label12->Text = "0";
                      this->label11->Text = "1";
                      this->label10->Text = "2";
                      this->label9->Text = "3";
                      this->label8->Text = "4";
                      this->label7->Text = "5";
                  }break;
                  case 7: {
                      this->label13->Visible = true;
                      this->label13->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label13->Text = "0";
                      this->label12->Text = "1";
                      this->label11->Text = "2";
                      this->label10->Text = "3";
                      this->label9->Text = "4";
                      this->label8->Text = "5";
                      this->label7->Text = "6";
                  }break;
                  case 8: {
                      this->label14->Visible = true;
                      this->label14->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label14->Text = "0";
                      this->label13->Text = "1";
                      this->label12->Text = "2";
                      this->label11->Text = "3";
                      this->label10->Text = "4";
                      this->label9->Text = "5";
                      this->label8->Text = "6";
                      this->label7->Text = "7";
                  }break;
                  case 9: {
                      this->label15->Visible = true;
                      this->label15->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label15->Text = "0";
                      this->label14->Text = "1";
                      this->label13->Text = "2";
                      this->label12->Text = "3";
                      this->label11->Text = "4";
                      this->label10->Text = "5";
                      this->label9->Text = "6";
                      this->label8->Text = "7";
                      this->label7->Text = "8";
                  }break;

                  case 10: {
                      this->label16->Visible = true;
                      this->label16->Location = System::Drawing::Point(x1 + x0, y1 + y0);
                      this->label16->Text = "0";
                      this->label15->Text = "1";
                      this->label14->Text = "2";
                      this->label13->Text = "3";
                      this->label12->Text = "4";
                      this->label11->Text = "5";
                      this->label10->Text = "6";
                      this->label9->Text = "7";
                      this->label8->Text = "8";
                      this->label7->Text = "9";
                  }break;

                  }
              }

          }
      }
      
  }


  private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

      //change count of vertex
      if (textBox1->Text != "") {
          INT16 count = System::Int16::Parse(this->textBox1->Text);
          if (count >= 1 && count < 11) {
              test.change_count(count);
              label1->Text = "";
              this->label7->Visible = false;
              this->label8->Visible = false;
              this->label9->Visible = false;
              this->label10->Visible = false;
              this->label11->Visible = false;
              this->label12->Visible = false;
              this->label13->Visible = false;
              this->label14->Visible = false;
              this->label15->Visible = false;
              this->label16->Visible = false;
          }
         
      }

  }


  private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
      if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
          e->Handled = true;
          
      }
      
  }
    

  private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {}

  private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
       
    if (textBox1->Text != "" && textBox2->Text != ""&& textBox3->Text != ""&& textBox4->Text != "") {
        INT16 count = System::Int16::Parse(this->textBox1->Text);
        int c1 = System::Int16::Parse(this->textBox2->Text);
        int c2 = System::Int16::Parse(this->textBox3->Text);
        int weight = System::Int16::Parse(this->textBox4->Text);

        //add track and cout information       
        if (c1 < count && c2 < count) {
            test.add_track(c1, c2, weight);

            //adjacency matrix filling
            matrix[c1][c2] = weight;
            counter++;
            label1->Text += c1.ToString();
            label1->Text += " --> ";
            label1->Text += c2.ToString();
            label1->Text += " = ";
            label1->Text += test.get_weight(c1,c2).ToString();
            label1->Text += ";     ";
            if (counter%4==0) {
                label1->Text += "\n";
            }
            //scene render
            OpenGL->get_data(&test);
            OpenGL->Render();
            OpenGL->SwapOpenGLBuffers();
        }
        int w = 0;
       
        label5->Text = "";      
        label5->Text += "      ";        
        for (int i = 0; i < count; i++) {             
            label5->Text += i.ToString();
            label5->Text += "    ";
        };

        label5->Text += "\n";
     
        for  (int c1 = 0; c1 < count; c1++) {   
            for (int c2 = 0; c2 < count; c2++) {  

                   w = test.get_weight(c1, c2);
                 
                   matrix[c1][c2] = w;

            }
          
        };

        for (int i = 0; i < count; i++) {
            label5->Text += i.ToString();
            label5->Text += "    ";
            for (int j = 0; j < count; j++) {
                //cout adjacency matrix
                label5->Text += matrix[i][j].ToString();
                label5->Text += "    ";
            }
            label5->Text += "\n";
        }

    }

}


  private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}


  private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

    INT16 count = System::Int16::Parse(this->textBox1->Text);
    int* sol = new int[count];
    //solution Kommivoyazher
    sol = Kommivoyazher(count, matrix);

    int j = 0;
    label17->Text = "Отрезки";
    label17->Text += "\n";
    int sum = 0;
    //cout result
    for (int i = 0; i < count; i++) {

        j = solution[i];
        label17->Text += i.ToString();
        label17->Text += " -> ";       
        label17->Text += j.ToString();
        label17->Text += ";     ";
        sum += matrix[i][j];
       
    }
    
    label17->Text += "\n ";
    label17->Text += "Сумма = ";
    label17->Text += sum.ToString();
    label17->Text += "\n ";
    label17->Text += "Путь = ";
   
    int temp = 0;
     for (int l = 0; l < count;)
     {
         for (int i = 0, j = 0; i < count; i++)
         {
             if (temp == 0 || i + 1 == temp)
             {
                 if (temp == 0) { 
                     label17->Text += i.ToString();
                 }
                 j = solution[i];
                 temp = j + 1;
                 
                 if (temp > 0){	
                     label17->Text += "-->";
                     label17->Text += (temp-1).ToString();
                    }
                 l++;
             }
         }
        }
   
}

  private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}

  private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
        e->Handled = true;
}

  private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
        e->Handled = true;
}

  private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
        e->Handled = true;
}
};

}