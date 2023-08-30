#pragma once
#include "FiguraGeometrica.h";
#include "Circulo.h";
#include "Rectangulo.h";

namespace Lab1MoisesAlonso25642 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAgregar;
	protected:

	private: System::Windows::Forms::RadioButton^ rbCirculo;
	private: System::Windows::Forms::TextBox^ txtRadio;
	private: System::Windows::Forms::TextBox^ txtLadoA;
	private: System::Windows::Forms::TextBox^ txtLadoB;
	protected:





	private: System::Windows::Forms::RadioButton^ rbRectangulo;
	private: System::Windows::Forms::Label^ lblResultado;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



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
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->rbCirculo = (gcnew System::Windows::Forms::RadioButton());
			this->rbRectangulo = (gcnew System::Windows::Forms::RadioButton());
			this->txtRadio = (gcnew System::Windows::Forms::TextBox());
			this->txtLadoA = (gcnew System::Windows::Forms::TextBox());
			this->txtLadoB = (gcnew System::Windows::Forms::TextBox());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(491, 64);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 23);
			this->btnAgregar->TabIndex = 0;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MainForm::btnAgregar_Click);
			// 
			// rbCirculo
			// 
			this->rbCirculo->AutoSize = true;
			this->rbCirculo->Checked = true;
			this->rbCirculo->Location = System::Drawing::Point(96, 57);
			this->rbCirculo->Name = L"rbCirculo";
			this->rbCirculo->Size = System::Drawing::Size(69, 20);
			this->rbCirculo->TabIndex = 1;
			this->rbCirculo->TabStop = true;
			this->rbCirculo->Text = L"Circulo";
			this->rbCirculo->UseVisualStyleBackColor = true;
			// 
			// rbRectangulo
			// 
			this->rbRectangulo->AutoSize = true;
			this->rbRectangulo->Location = System::Drawing::Point(96, 95);
			this->rbRectangulo->Name = L"rbRectangulo";
			this->rbRectangulo->Size = System::Drawing::Size(97, 20);
			this->rbRectangulo->TabIndex = 2;
			this->rbRectangulo->Text = L"Rectangulo";
			this->rbRectangulo->UseVisualStyleBackColor = true;
			// 
			// txtRadio
			// 
			this->txtRadio->Location = System::Drawing::Point(320, 64);
			this->txtRadio->Name = L"txtRadio";
			this->txtRadio->Size = System::Drawing::Size(100, 22);
			this->txtRadio->TabIndex = 3;
			// 
			// txtLadoA
			// 
			this->txtLadoA->Location = System::Drawing::Point(320, 108);
			this->txtLadoA->Name = L"txtLadoA";
			this->txtLadoA->Size = System::Drawing::Size(100, 22);
			this->txtLadoA->TabIndex = 4;
			// 
			// txtLadoB
			// 
			this->txtLadoB->Location = System::Drawing::Point(320, 162);
			this->txtLadoB->Name = L"txtLadoB";
			this->txtLadoB->Size = System::Drawing::Size(100, 22);
			this->txtLadoB->TabIndex = 5;
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Location = System::Drawing::Point(104, 244);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(23, 16);
			this->lblResultado->TabIndex = 6;
			this->lblResultado->Text = L"----";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(257, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Radio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Lado A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(257, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Lado B";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 367);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblResultado);
			this->Controls->Add(this->txtLadoB);
			this->Controls->Add(this->txtLadoA);
			this->Controls->Add(this->txtRadio);
			this->Controls->Add(this->rbRectangulo);
			this->Controls->Add(this->rbCirculo);
			this->Controls->Add(this->btnAgregar);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			List<FiguraGeometrica^>^ misFiguras = gcnew List<FiguraGeometrica^>();


	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {

		FiguraGeometrica^ miFigura;

		if (rbCirculo->Checked) {
			miFigura = gcnew Circulo(Convert::ToDouble(txtRadio->Text));
		}
		else {
			miFigura = gcnew Rectangulo(Convert::ToDouble(txtLadoA->Text), Convert::ToDouble(txtLadoB->Text));
		}

		misFiguras->Add(miFigura);

		EscribirFigurasEnListView();
	}

		   void EscribirFigurasEnListView() {
			   
			   String^ elemento = "";
			   for (int i = 0; i < misFiguras->Count; i++) {
				   if (misFiguras[i]->GetTipo() == FiguraGeometrica::TIPO_CIRCULO) {
					   elemento += "La figura es un Circulo con area: " + misFiguras[i]->CalcularArea() + "\r\n";
				   }
				   else {
					   elemento += "La figura es un Rectangulo con area: " + misFiguras[i]->CalcularArea() + "\r\n";
				   }

			   }

			   lblResultado->Text = elemento;
		   }
};
}