#pragma once

namespace projconf {

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

	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button_generate;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox_divide;
	private: System::Windows::Forms::TextBox^ textBox_multiply;
	private: System::Windows::Forms::TextBox^ textBox_minus;
	private: System::Windows::Forms::TextBox^ textBox_plus;
	private: System::Windows::Forms::Button^ button_u_div_v;

	private: System::Windows::Forms::Button^ button_u_mult_v;


	private: System::Windows::Forms::Button^ button_u_minus_v;

	private: System::Windows::Forms::Button^ button_u_plus_v;


	private: System::Windows::Forms::Button^ button_c_u;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Button^ button_reset;
	private: String^ temp;
	private: System::Windows::Forms::RadioButton^ radioButton_1;


	private: System::Windows::Forms::RadioButton^ radioButton_3;

	private: System::Windows::Forms::RadioButton^ radioButton_2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_1_div_u;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button_generate = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox_divide = (gcnew System::Windows::Forms::TextBox());
			this->textBox_multiply = (gcnew System::Windows::Forms::TextBox());
			this->textBox_minus = (gcnew System::Windows::Forms::TextBox());
			this->textBox_plus = (gcnew System::Windows::Forms::TextBox());
			this->button_u_div_v = (gcnew System::Windows::Forms::Button());
			this->button_u_mult_v = (gcnew System::Windows::Forms::Button());
			this->button_u_minus_v = (gcnew System::Windows::Forms::Button());
			this->button_u_plus_v = (gcnew System::Windows::Forms::Button());
			this->button_c_u = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_reset = (gcnew System::Windows::Forms::Button());
			this->radioButton_1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_2 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_1_div_u = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 23);
			this->label1->TabIndex = 59;
			this->label1->Text = L"Генератор";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button23
			// 
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(740, 30);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(30, 29);
			this->button23->TabIndex = 58;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button_generate
			// 
			this->button_generate->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_generate->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_generate->FlatAppearance->BorderSize = 0;
			this->button_generate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button_generate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button_generate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_generate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_generate->Location = System::Drawing::Point(661, 109);
			this->button_generate->Name = L"button_generate";
			this->button_generate->Size = System::Drawing::Size(109, 37);
			this->button_generate->TabIndex = 57;
			this->button_generate->Text = L"Генерировать";
			this->button_generate->UseVisualStyleBackColor = false;
			this->button_generate->Click += gcnew System::EventHandler(this, &MyForm::button_generate_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(661, 174);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(109, 37);
			this->button21->TabIndex = 56;
			this->button21->Text = L"Копировать";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// textBox_divide
			// 
			this->textBox_divide->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_divide->Location = System::Drawing::Point(85, 508);
			this->textBox_divide->Name = L"textBox_divide";
			this->textBox_divide->Size = System::Drawing::Size(65, 28);
			this->textBox_divide->TabIndex = 55;
			this->textBox_divide->Text = L"0";
			this->textBox_divide->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_divide_TextChanged);
			this->textBox_divide->Enter += gcnew System::EventHandler(this, &MyForm::textBox_divide_Enter);
			this->textBox_divide->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_divide_KeyPress);
			this->textBox_divide->Leave += gcnew System::EventHandler(this, &MyForm::textBox_divide_Leave);
			// 
			// textBox_multiply
			// 
			this->textBox_multiply->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_multiply->Location = System::Drawing::Point(85, 457);
			this->textBox_multiply->Name = L"textBox_multiply";
			this->textBox_multiply->Size = System::Drawing::Size(65, 28);
			this->textBox_multiply->TabIndex = 54;
			this->textBox_multiply->Text = L"0";
			this->textBox_multiply->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_multiply_TextChanged);
			this->textBox_multiply->Enter += gcnew System::EventHandler(this, &MyForm::textBox_multiply_Enter);
			this->textBox_multiply->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_multiply_KeyPress);
			this->textBox_multiply->Leave += gcnew System::EventHandler(this, &MyForm::textBox_multiply_Leave);
			// 
			// textBox_minus
			// 
			this->textBox_minus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_minus->Location = System::Drawing::Point(85, 408);
			this->textBox_minus->Name = L"textBox_minus";
			this->textBox_minus->Size = System::Drawing::Size(65, 28);
			this->textBox_minus->TabIndex = 53;
			this->textBox_minus->Text = L"0";
			this->textBox_minus->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_minus_TextChanged);
			this->textBox_minus->Enter += gcnew System::EventHandler(this, &MyForm::textBox_minus_Enter);
			this->textBox_minus->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_minus_KeyPress);
			this->textBox_minus->Leave += gcnew System::EventHandler(this, &MyForm::textBox_minus_Leave);
			// 
			// textBox_plus
			// 
			this->textBox_plus->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_plus->Location = System::Drawing::Point(85, 358);
			this->textBox_plus->Name = L"textBox_plus";
			this->textBox_plus->Size = System::Drawing::Size(65, 28);
			this->textBox_plus->TabIndex = 52;
			this->textBox_plus->Text = L"0";
			this->textBox_plus->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_plus_TextChanged);
			this->textBox_plus->Enter += gcnew System::EventHandler(this, &MyForm::textBox_plus_Enter);
			this->textBox_plus->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_plus_KeyPress);
			this->textBox_plus->Leave += gcnew System::EventHandler(this, &MyForm::textBox_plus_Leave);
			// 
			// button_u_div_v
			// 
			this->button_u_div_v->FlatAppearance->BorderSize = 0;
			this->button_u_div_v->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_u_div_v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_u_div_v.Image")));
			this->button_u_div_v->Location = System::Drawing::Point(681, 597);
			this->button_u_div_v->Name = L"button_u_div_v";
			this->button_u_div_v->Size = System::Drawing::Size(79, 119);
			this->button_u_div_v->TabIndex = 51;
			this->button_u_div_v->UseVisualStyleBackColor = true;
			this->button_u_div_v->Click += gcnew System::EventHandler(this, &MyForm::button_u_div_v_Click);
			// 
			// button_u_mult_v
			// 
			this->button_u_mult_v->FlatAppearance->BorderSize = 0;
			this->button_u_mult_v->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_u_mult_v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_u_mult_v.Image")));
			this->button_u_mult_v->Location = System::Drawing::Point(566, 663);
			this->button_u_mult_v->Name = L"button_u_mult_v";
			this->button_u_mult_v->Size = System::Drawing::Size(86, 53);
			this->button_u_mult_v->TabIndex = 50;
			this->button_u_mult_v->UseVisualStyleBackColor = true;
			this->button_u_mult_v->Click += gcnew System::EventHandler(this, &MyForm::button_u_mult_v_Click);
			// 
			// button_u_minus_v
			// 
			this->button_u_minus_v->FlatAppearance->BorderSize = 0;
			this->button_u_minus_v->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_u_minus_v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_u_minus_v.Image")));
			this->button_u_minus_v->Location = System::Drawing::Point(444, 663);
			this->button_u_minus_v->Name = L"button_u_minus_v";
			this->button_u_minus_v->Size = System::Drawing::Size(93, 54);
			this->button_u_minus_v->TabIndex = 49;
			this->button_u_minus_v->UseVisualStyleBackColor = true;
			this->button_u_minus_v->Click += gcnew System::EventHandler(this, &MyForm::button_u_minus_v_Click);
			// 
			// button_u_plus_v
			// 
			this->button_u_plus_v->FlatAppearance->BorderSize = 0;
			this->button_u_plus_v->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_u_plus_v->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_u_plus_v.Image")));
			this->button_u_plus_v->Location = System::Drawing::Point(322, 663);
			this->button_u_plus_v->Name = L"button_u_plus_v";
			this->button_u_plus_v->Size = System::Drawing::Size(93, 53);
			this->button_u_plus_v->TabIndex = 48;
			this->button_u_plus_v->UseVisualStyleBackColor = true;
			this->button_u_plus_v->Click += gcnew System::EventHandler(this, &MyForm::button_u_plus_v_Click);
			// 
			// button_c_u
			// 
			this->button_c_u->FlatAppearance->BorderSize = 0;
			this->button_c_u->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_c_u->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_c_u.Image")));
			this->button_c_u->Location = System::Drawing::Point(203, 663);
			this->button_c_u->Name = L"button_c_u";
			this->button_c_u->Size = System::Drawing::Size(90, 53);
			this->button_c_u->TabIndex = 47;
			this->button_c_u->UseVisualStyleBackColor = true;
			this->button_c_u->Click += gcnew System::EventHandler(this, &MyForm::button_c_u_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(681, 352);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(79, 70);
			this->button15->TabIndex = 46;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(524, 352);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(147, 70);
			this->button14->TabIndex = 45;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(328, 555);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(181, 61);
			this->button13->TabIndex = 44;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(328, 493);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(182, 57);
			this->button12->TabIndex = 43;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(203, 420);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(119, 61);
			this->button11->TabIndex = 42;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(601, 425);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(73, 61);
			this->button10->TabIndex = 41;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(203, 487);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(119, 59);
			this->button9->TabIndex = 40;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(524, 555);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 60);
			this->button8->TabIndex = 38;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(328, 426);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(182, 62);
			this->button7->TabIndex = 37;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(211, 555);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 61);
			this->button6->TabIndex = 36;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(524, 426);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 63);
			this->button5->TabIndex = 35;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(524, 489);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 61);
			this->button4->TabIndex = 34;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(328, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 69);
			this->button2->TabIndex = 32;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(203, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 59);
			this->button1->TabIndex = 31;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button_reset
			// 
			this->button_reset->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_reset->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button_reset->FlatAppearance->BorderSize = 0;
			this->button_reset->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button_reset->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button_reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_reset->Location = System::Drawing::Point(661, 240);
			this->button_reset->Name = L"button_reset";
			this->button_reset->Size = System::Drawing::Size(109, 37);
			this->button_reset->TabIndex = 61;
			this->button_reset->Text = L"Сбросить";
			this->button_reset->UseVisualStyleBackColor = false;
			this->button_reset->Click += gcnew System::EventHandler(this, &MyForm::button_reset_Click);
			// 
			// radioButton_1
			// 
			this->radioButton_1->AutoSize = true;
			this->radioButton_1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_1->Location = System::Drawing::Point(25, 627);
			this->radioButton_1->Name = L"radioButton_1";
			this->radioButton_1->Size = System::Drawing::Size(101, 24);
			this->radioButton_1->TabIndex = 63;
			this->radioButton_1->TabStop = true;
			this->radioButton_1->Text = L"Школьник";
			this->radioButton_1->UseVisualStyleBackColor = false;
			this->radioButton_1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton_3
			// 
			this->radioButton_3->AutoSize = true;
			this->radioButton_3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_3->Location = System::Drawing::Point(25, 692);
			this->radioButton_3->Name = L"radioButton_3";
			this->radioButton_3->Size = System::Drawing::Size(150, 24);
			this->radioButton_3->TabIndex = 64;
			this->radioButton_3->TabStop = true;
			this->radioButton_3->Text = L"Преподаватель";
			this->radioButton_3->UseVisualStyleBackColor = false;
			this->radioButton_3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton_2
			// 
			this->radioButton_2->AutoSize = true;
			this->radioButton_2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton_2->Location = System::Drawing::Point(25, 659);
			this->radioButton_2->Name = L"radioButton_2";
			this->radioButton_2->Size = System::Drawing::Size(92, 24);
			this->radioButton_2->TabIndex = 65;
			this->radioButton_2->TabStop = true;
			this->radioButton_2->Text = L"Студент";
			this->radioButton_2->UseVisualStyleBackColor = false;
			this->radioButton_2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(30, 593);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 23);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Сложность";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(42, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(563, 173);
			this->label2->TabIndex = 60;
			this->label2->Text = L"Для вывода";
			// 
			// button_1_div_u
			// 
			this->button_1_div_u->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_1_div_u->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_1_div_u.Image")));
			this->button_1_div_u->Location = System::Drawing::Point(681, 425);
			this->button_1_div_u->Name = L"button_1_div_u";
			this->button_1_div_u->Size = System::Drawing::Size(81, 127);
			this->button_1_div_u->TabIndex = 67;
			this->button_1_div_u->UseVisualStyleBackColor = true;
			this->button_1_div_u->Click += gcnew System::EventHandler(this, &MyForm::button_1_div_u_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(800, 750);
			this->Controls->Add(this->button_1_div_u);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->radioButton_2);
			this->Controls->Add(this->radioButton_3);
			this->Controls->Add(this->radioButton_1);
			this->Controls->Add(this->button_reset);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button_generate);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->textBox_divide);
			this->Controls->Add(this->textBox_multiply);
			this->Controls->Add(this->textBox_minus);
			this->Controls->Add(this->textBox_plus);
			this->Controls->Add(this->button_u_div_v);
			this->Controls->Add(this->button_u_mult_v);
			this->Controls->Add(this->button_u_minus_v);
			this->Controls->Add(this->button_u_plus_v);
			this->Controls->Add(this->button_c_u);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool btn_ctg = false;
	private: bool btn_sin = false;
	private: bool btn_cos = false;
	private: bool btn_tg = false;
	private: bool btn_arctg = false;
	private: bool btn_arcsin = false;
	private: bool btn_arccos = false;
	private: bool btn_arcctg = false;
	private: bool btn_ln_u = false;
	private: bool btn_u_a = false;
	private: bool btn_sqrt_u = false;
	private: bool btn_a_u = false;
	private: bool btn_e_u = false;
	private: bool btn_log_a_u = false;
	private: bool btn_one_div_u = false;

	private: bool btn_c_u = false;
	private: bool btn_u_plus_v = false;
	private: bool u_minus_v = false;
	private: bool u_mult_v = false;
	private: bool u_div_a = false;

	private: bool difficult1 = false;
	private: bool difficult2 = false;
	private: bool difficult3 = false;



	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e);
	private: String^ fileName = "config.txt";
	private: String^ bufferr = "";
	private: bool is = false;

	private: System::Void textBox_plus_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void textBox_minus_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void textBox_multiply_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void textBox_divide_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		   /*private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);*/
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button_generate_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_reset_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_divide_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_divide_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_divide_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_multiply_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_minus_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_plus_Leave(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_plus_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_minus_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_multiply_Enter(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_multiply_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_minus_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void textBox_plus_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button_c_u_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_u_plus_v_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_u_minus_v_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_u_mult_v_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_u_div_v_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_1_div_u_Click(System::Object^ sender, System::EventArgs^ e);
};
}
