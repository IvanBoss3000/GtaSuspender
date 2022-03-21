#pragma once
#include "Common.h"

#include "Info.h"

void suspend();
void resume();

void suspendInternet();
void resumeInternet();


namespace GtaSuspender {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 162);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Auto Suspend";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Seconds";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(126, 36);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(41, 20);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 122);
			this->progressBar1->Maximum = 15;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(164, 23);
			this->progressBar1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Suspend";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &main::timer1_Tick);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(12, 180);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Manual Suspend";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(61, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Resume";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(61, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Suspend";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->progressBar2);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(218, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(198, 162);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Internet Suspender";
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(19, 122);
			this->progressBar2->Maximum = 15;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(164, 23);
			this->progressBar2->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(62, 84);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Suspend";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main::button4_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(125, 36);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(41, 20);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Seconds";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Location = System::Drawing::Point(218, 181);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(198, 99);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Manual Sus";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(62, 57);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Resume";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &main::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(62, 28);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Suspend";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main::button5_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &main::timer2_Tick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(119, 286);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Info";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &main::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(237, 286);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Exit";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &main::button8_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 321);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"main";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Gta Suspender";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		//
		//	Suspender
		//


	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//(int)this->numericUpDown1->Value * 1000
		this->progressBar1->Maximum = (int)this->numericUpDown1->Value;
		this->progressBar1->Value = 0;
		this->timer1->Start();
		suspend();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	

	if (this->progressBar1->Value < (int)this->numericUpDown1->Value) {
		this->progressBar1->Value++;
	}
	else {
		resume();
		this->timer1->Stop();
		this->progressBar1->Value = 0;
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	suspend();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	resume();
}




//
//	INTERNET SUSPENSION
//


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->progressBar2->Maximum = (int)this->numericUpDown2->Value;
	this->progressBar2->Value = 0;
	this->timer2->Start();
	suspendInternet();


}


private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (this->progressBar2->Value < (int)this->numericUpDown2->Value) {
		this->progressBar2->Value++;
	}
	else {
		resumeInternet();
		this->timer2->Stop();
		this->progressBar2->Value = 0;
	}
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	suspendInternet();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	resumeInternet();






	//
	//	Exit Box
	//

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}



	   //
	   //	Info Box
	   //

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	Info^ f2 = gcnew Info;
	f2->ShowDialog();

}
};
}
