#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_print;
	private: System::Windows::Forms::Button^ button_Out_A;
	protected:


	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownA_Strings;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA_Colomns;
	private: System::Windows::Forms::Button^ button_create_a;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_print = (gcnew System::Windows::Forms::Button());
			this->button_Out_A = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownA_Strings = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownA_Colomns = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_create_a = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_Strings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_Colomns))->BeginInit();
			this->SuspendLayout();
			// 
			// button_print
			// 
			this->button_print->Location = System::Drawing::Point(15, 282);
			this->button_print->Margin = System::Windows::Forms::Padding(4);
			this->button_print->Name = L"button_print";
			this->button_print->Size = System::Drawing::Size(151, 44);
			this->button_print->TabIndex = 0;
			this->button_print->Text = L"ввести значени€";
			this->button_print->UseVisualStyleBackColor = true;
			this->button_print->Click += gcnew System::EventHandler(this, &MyForm::button1_print);
			// 
			// button_Out_A
			// 
			this->button_Out_A->Location = System::Drawing::Point(427, 282);
			this->button_Out_A->Margin = System::Windows::Forms::Padding(4);
			this->button_Out_A->Name = L"button_Out_A";
			this->button_Out_A->Size = System::Drawing::Size(160, 44);
			this->button_Out_A->TabIndex = 1;
			this->button_Out_A->Text = L"вывести матрицу  в файле";
			this->button_Out_A->UseVisualStyleBackColor = true;
			this->button_Out_A->Click += gcnew System::EventHandler(this, &MyForm::button_Out_A_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"введите кол-во строк от 1 до 100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"введите кол-во столбцов от 1 до 100";
			// 
			// numericUpDownA_Strings
			// 
			this->numericUpDownA_Strings->Location = System::Drawing::Point(467, 50);
			this->numericUpDownA_Strings->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownA_Strings->Name = L"numericUpDownA_Strings";
			this->numericUpDownA_Strings->Size = System::Drawing::Size(71, 22);
			this->numericUpDownA_Strings->TabIndex = 10;
			this->numericUpDownA_Strings->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownA_Colomns
			// 
			this->numericUpDownA_Colomns->Location = System::Drawing::Point(467, 173);
			this->numericUpDownA_Colomns->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownA_Colomns->Name = L"numericUpDownA_Colomns";
			this->numericUpDownA_Colomns->Size = System::Drawing::Size(71, 22);
			this->numericUpDownA_Colomns->TabIndex = 11;
			this->numericUpDownA_Colomns->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_create_a
			// 
			this->button_create_a->Location = System::Drawing::Point(221, 282);
			this->button_create_a->Name = L"button_create_a";
			this->button_create_a->Size = System::Drawing::Size(155, 44);
			this->button_create_a->TabIndex = 12;
			this->button_create_a->Text = L"создать матрицу";
			this->button_create_a->UseVisualStyleBackColor = true;
			this->button_create_a->Click += gcnew System::EventHandler(this, &MyForm::button_create_a_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 388);
			this->Controls->Add(this->button_create_a);
			this->Controls->Add(this->numericUpDownA_Colomns);
			this->Controls->Add(this->numericUpDownA_Strings);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_Out_A);
			this->Controls->Add(this->button_print);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"создание n-мерной матрицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_Strings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_Colomns))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_print(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_create_a_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_Out_A_Click(System::Object^ sender, System::EventArgs^ e);
};
}
