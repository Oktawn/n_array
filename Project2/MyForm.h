#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA_n;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA_Strings;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA_Colomns;
	private: System::Windows::Forms::Button^ button_create_a;



	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_print = (gcnew System::Windows::Forms::Button());
			this->button_Out_A = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownA_n = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownA_Strings = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownA_Colomns = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_create_a = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_n))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_Strings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_Colomns))->BeginInit();
			this->SuspendLayout();
			// 
			// button_print
			// 
			this->button_print->Location = System::Drawing::Point(15, 337);
			this->button_print->Margin = System::Windows::Forms::Padding(4);
			this->button_print->Name = L"button_print";
			this->button_print->Size = System::Drawing::Size(151, 44);
			this->button_print->TabIndex = 0;
			this->button_print->Text = L"ввести значения";
			this->button_print->UseVisualStyleBackColor = true;
			this->button_print->Click += gcnew System::EventHandler(this, &MyForm::button1_print);
			// 
			// button_Out_A
			// 
			this->button_Out_A->Location = System::Drawing::Point(427, 337);
			this->button_Out_A->Margin = System::Windows::Forms::Padding(4);
			this->button_Out_A->Name = L"button_Out_A";
			this->button_Out_A->Size = System::Drawing::Size(160, 44);
			this->button_Out_A->TabIndex = 1;
			this->button_Out_A->Text = L"вывести грани";
			this->button_Out_A->UseVisualStyleBackColor = true;
			this->button_Out_A->Click += gcnew System::EventHandler(this, &MyForm::button_Out_A_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"введите глубину от 1 до 10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(220, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"введите кол-во строк от 1 до 100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"введите кол-во столбцов от 1 до 100";
			// 
			// numericUpDownA_n
			// 
			this->numericUpDownA_n->Location = System::Drawing::Point(467, 43);
			this->numericUpDownA_n->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownA_n->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownA_n->Name = L"numericUpDownA_n";
			this->numericUpDownA_n->Size = System::Drawing::Size(120, 22);
			this->numericUpDownA_n->TabIndex = 9;
			this->numericUpDownA_n->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownA_Strings
			// 
			this->numericUpDownA_Strings->Location = System::Drawing::Point(467, 129);
			this->numericUpDownA_Strings->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownA_Strings->Name = L"numericUpDownA_Strings";
			this->numericUpDownA_Strings->Size = System::Drawing::Size(120, 22);
			this->numericUpDownA_Strings->TabIndex = 10;
			this->numericUpDownA_Strings->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownA_Colomns
			// 
			this->numericUpDownA_Colomns->Location = System::Drawing::Point(467, 225);
			this->numericUpDownA_Colomns->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownA_Colomns->Name = L"numericUpDownA_Colomns";
			this->numericUpDownA_Colomns->Size = System::Drawing::Size(120, 22);
			this->numericUpDownA_Colomns->TabIndex = 11;
			this->numericUpDownA_Colomns->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_create_a
			// 
			this->button_create_a->Location = System::Drawing::Point(218, 337);
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
			this->ClientSize = System::Drawing::Size(613, 433);
			this->Controls->Add(this->button_create_a);
			this->Controls->Add(this->numericUpDownA_Colomns);
			this->Controls->Add(this->numericUpDownA_Strings);
			this->Controls->Add(this->numericUpDownA_n);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_Out_A);
			this->Controls->Add(this->button_print);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"ñîçäàíèå n-ìåðíîé ìàòðèöû";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA_n))->EndInit();
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