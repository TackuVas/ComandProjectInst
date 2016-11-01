#pragma once
#include <stdlib.h>
#include <time.h>
#include <math.h>

namespace ComandProjectInst {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		Bitmap^bmp = gcnew Bitmap(1000, 1000);
		Graphics^gp = Graphics::FromImage(bmp);
		Pen^pen = gcnew Pen(Brushes::White);
		ref class piy
		{
		public:
			int x1;
			int y1;
			int x2;
			int y2;
			int u;
			int Kol_shtrihov;
			int shtrih;
			int kol_p;
			void a(int i, Graphics^gp, Pen^pen)
			{
				if (i > 0)
				{
					d(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2 = x2 + u, y2);
					x1 = x2;
					y1 = y2;
					a(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2, y2 = y2 + u);
					x1 = x2;
					y1 = y2;
					a(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2 = x2 - u, y2);
					x1 = x2;
					y1 = y2;
					c(i - 1, gp, pen);
				}
			}
			void b(int i, Graphics^gp, Pen^pen)
			{
				if (i > 0)
				{
					c(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2 = x2 - u, y2);
					x1 = x2;
					y1 = y2;
					b(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2, y2 = y2 - u);
					x1 = x2;
					y1 = y2;
					b(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2 = x2 + u, y2);
					x1 = x2;
					y1 = y2;
					d(i - 1, gp, pen);
				}
			}
			void c(int i, Graphics^gp, Pen^pen)
			{
				if (i > 0)
				{
					b(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2, y2 = y2 - u);
					x1 = x2;
					y1 = y2;
					c(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2 = x2 - u, y2);
					x1 = x2;
					y1 = y2;
					c(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2, y2 = y2 + u);
					x1 = x2;
					y1 = y2;
					a(i - 1, gp, pen);
				}
			}
			void d(int i, Graphics ^gp, Pen^pen)
			{
				if (i > 0)
				{
					a(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2, y2 = y2 + u);
					x1 = x2;
					y1 = y2;
					d(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2 = x2 + u, y2);
					x1 = x2;
					y1 = y2;
					d(i - 1, gp, pen);
					gp->DrawLine(pen, x1, y1, x2, y2 = y2 - u);
					x1 = x2;
					y1 = y2;
					b(i - 1, gp, pen);
				}
			}
		private:

		};
		piy^Piy = gcnew piy;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:


	protected:

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->pictureBox1->BackColor = System::Drawing::Color::LightBlue;
			this->pictureBox1->Location = System::Drawing::Point(177, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 400);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 401);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//���������� 4 ���� ������� ����������� ����� "�"


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Height = MyForm::Height - 40;
		pictureBox1->Width = MyForm::Height - 40;
		pictureBox1->Top = ClientSize.Height / 2 - pictureBox1->Height / 2;
		pictureBox1->Left = ClientSize.Width / 2 - pictureBox1->Width / 2;
		Piy->x1 = 4;
		Piy->y1 = 4;
		Piy->x2 = 4;
		Piy->y2 = 4;
		Piy->u = 4;
		Piy->a(7, gp, pen);
		this->pictureBox1->Image = bmp;
	}

	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Height = MyForm::Height - 40;
		pictureBox1->Width = MyForm::Height - 40;
		pictureBox1->Top = ClientSize.Height / 2 - pictureBox1->Height / 2;
		pictureBox1->Left = ClientSize.Width / 2 - pictureBox1->Width / 2;
		Piy->shtrih = 2; //����������� ����� ������
		gp->Clear(Color::LightBlue);
		int pr = pictureBox1->Height; // ������� ���������� �������� �����������
		int p = pictureBox1->Height;
		while(pr > 0)
		{
			if ((pr & (pr - 1)) == 0) break;
			pr = pr - 1;
		}
		int kol_p = (log10(double(pr))/log10(double(2)));//pr- ���������� �������, kol_p-�������
		int k = pow(2, double(kol_p)) - 1 / pow(2, double(kol_p));
		Piy->x1 = 1;
		Piy->y1 = 1;
		Piy->x2 = 1;
		Piy->y2 = 1;

	//	Piy->u = (p - (pow(2, double(kol_p))) )/ kol_p;
		Piy->u = 2;
//		Piy->a(kol_p, gp, pen);
		this->pictureBox1->Image = bmp;
	}
	
	
	};
}
