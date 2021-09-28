#pragma once

namespace Modernsigninformbydilshad {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			panelterms->Hide();
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ Username;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panelterms;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panelterms = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panelterms->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rosemary", 28.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(50, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in";
			// 
			// Username
			// 
			this->Username->AutoSize = true;
			this->Username->BackColor = System::Drawing::Color::Transparent;
			this->Username->Font = (gcnew System::Drawing::Font(L"Rosemary", 12.25F));
			this->Username->ForeColor = System::Drawing::Color::White;
			this->Username->Location = System::Drawing::Point(54, 129);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(80, 20);
			this->Username->TabIndex = 1;
			this->Username->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Rosemary", 12.25F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(54, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(58, 157);
			this->textBox1->MaxLength = 32800;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 23);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(58, 188);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(213, 2);
			this->panel1->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(58, 269);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(213, 2);
			this->panel2->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(58, 238);
			this->textBox2->MaxLength = 32800;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 23);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Rosemary", 9.25F));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Location = System::Drawing::Point(58, 291);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 19);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"I agree to";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Rosemary", 9.25F));
			this->label3->ForeColor = System::Drawing::Color::Azure;
			this->label3->Location = System::Drawing::Point(134, 292);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 15);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Terms and conditions";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rosemary", 10.25F));
			this->button1->Location = System::Drawing::Point(58, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 32);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rosemary", 10.25F));
			this->button2->Location = System::Drawing::Point(137, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panelterms
			// 
			this->panelterms->BackColor = System::Drawing::Color::Transparent;
			this->panelterms->Controls->Add(this->button3);
			this->panelterms->Controls->Add(this->textBox3);
			this->panelterms->Controls->Add(this->label4);
			this->panelterms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelterms->Location = System::Drawing::Point(0, 0);
			this->panelterms->Name = L"panelterms";
			this->panelterms->Size = System::Drawing::Size(727, 477);
			this->panelterms->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rosemary", 10.25F));
			this->button3->Location = System::Drawing::Point(251, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 32);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Ok";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::panel_terms_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(56, 117);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(270, 238);
			this->textBox3->TabIndex = 1;
			this->textBox3->Text = L"These terms and conditions outline the rules and regulations for the use of signu"
				L"p page\'s Website, located at www.its_me_dilshad.com.";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Rosemary", 18.25F));
			this->label4->Location = System::Drawing::Point(52, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 29);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Terms and Conditions";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(727, 477);
			this->Controls->Add(this->panelterms);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Username);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Rosemary", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panelterms->ResumeLayout(false);
			this->panelterms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
		button1->Enabled = true;
	else
		button1->Enabled = false;

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "admin")
	{
		if (textBox2->Text == "dilshad")
		{
			Application::Exit();//for now exit the application
		}
		else
		{
			MessageBox::Show("Incorrect password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else 
	{
		MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	   }
private: System::Void panel_terms_Click(System::Object^ sender, System::EventArgs^ e) {
	
	panelterms->Hide();
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	panelterms->Show();
}
};
}
