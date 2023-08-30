#pragma once
#include <cliext\algorithm>;
#include "Point3D.h";
#include "CalculadoraCpp.h";
#include "Calculadora.h";

namespace Lab0EjemploMoisesAlonso {

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
			//
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
	private: System::Windows::Forms::TextBox^ txtNumero;
	protected:
	private: System::Windows::Forms::Button^ btnIncrement;
	private: System::Windows::Forms::Label^ lblNumero;
	private: System::Windows::Forms::Button^ btnPoint;
	private: System::Windows::Forms::Label^ lblPoint;
	private: System::Windows::Forms::TextBox^ txtValor1;
	private: System::Windows::Forms::TextBox^ txtValor2;
	private: System::Windows::Forms::ComboBox^ cmbOperaciones;
	private: System::Windows::Forms::Button^ btnEjecutar;


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
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->btnIncrement = (gcnew System::Windows::Forms::Button());
			this->lblNumero = (gcnew System::Windows::Forms::Label());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->lblPoint = (gcnew System::Windows::Forms::Label());
			this->txtValor1 = (gcnew System::Windows::Forms::TextBox());
			this->txtValor2 = (gcnew System::Windows::Forms::TextBox());
			this->cmbOperaciones = (gcnew System::Windows::Forms::ComboBox());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(44, 42);
			this->txtNumero->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(132, 22);
			this->txtNumero->TabIndex = 0;
			// 
			// btnIncrement
			// 
			this->btnIncrement->Location = System::Drawing::Point(207, 42);
			this->btnIncrement->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnIncrement->Name = L"btnIncrement";
			this->btnIncrement->Size = System::Drawing::Size(147, 28);
			this->btnIncrement->TabIndex = 1;
			this->btnIncrement->Text = L"Incrementar >>";
			this->btnIncrement->UseVisualStyleBackColor = true;
			this->btnIncrement->Click += gcnew System::EventHandler(this, &MyForm::btnIncrement_Click);
			// 
			// lblNumero
			// 
			this->lblNumero->AutoSize = true;
			this->lblNumero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumero->Location = System::Drawing::Point(383, 48);
			this->lblNumero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNumero->Name = L"lblNumero";
			this->lblNumero->Size = System::Drawing::Size(17, 17);
			this->lblNumero->TabIndex = 2;
			this->lblNumero->Text = L"0";
			// 
			// btnPoint
			// 
			this->btnPoint->Location = System::Drawing::Point(44, 113);
			this->btnPoint->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(133, 28);
			this->btnPoint->TabIndex = 3;
			this->btnPoint->Text = L"Generar Punto";
			this->btnPoint->UseVisualStyleBackColor = true;
			this->btnPoint->Click += gcnew System::EventHandler(this, &MyForm::btnPoint_Click);
			// 
			// lblPoint
			// 
			this->lblPoint->AutoSize = true;
			this->lblPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPoint->Location = System::Drawing::Point(203, 113);
			this->lblPoint->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPoint->Name = L"lblPoint";
			this->lblPoint->Size = System::Drawing::Size(67, 17);
			this->lblPoint->TabIndex = 4;
			this->lblPoint->Text = L"(0, 0, 0)";
			// 
			// txtValor1
			// 
			this->txtValor1->Location = System::Drawing::Point(647, 48);
			this->txtValor1->Name = L"txtValor1";
			this->txtValor1->Size = System::Drawing::Size(100, 22);
			this->txtValor1->TabIndex = 5;
			// 
			// txtValor2
			// 
			this->txtValor2->Location = System::Drawing::Point(647, 86);
			this->txtValor2->Name = L"txtValor2";
			this->txtValor2->Size = System::Drawing::Size(100, 22);
			this->txtValor2->TabIndex = 6;
			// 
			// cmbOperaciones
			// 
			this->cmbOperaciones->FormattingEnabled = true;
			this->cmbOperaciones->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Suma", L"Resta", L"Multiplicacion", L"Cociente",
					L"Residuo", L"Potencia"
			});
			this->cmbOperaciones->Location = System::Drawing::Point(647, 132);
			this->cmbOperaciones->Name = L"cmbOperaciones";
			this->cmbOperaciones->Size = System::Drawing::Size(121, 24);
			this->cmbOperaciones->TabIndex = 7;
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->Location = System::Drawing::Point(647, 179);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(75, 23);
			this->btnEjecutar->TabIndex = 8;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = true;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &MyForm::btnEjecutar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 290);
			this->Controls->Add(this->btnEjecutar);
			this->Controls->Add(this->cmbOperaciones);
			this->Controls->Add(this->txtValor2);
			this->Controls->Add(this->txtValor1);
			this->Controls->Add(this->lblPoint);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->lblNumero);
			this->Controls->Add(this->btnIncrement);
			this->Controls->Add(this->txtNumero);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void btnIncrement_Click(System::Object^ sender, System::EventArgs^ e) {
			if (IsNumber(txtNumero->Text)) {
				int valor = Convert::ToInt32(txtNumero->Text);

				IncrementByValue(valor);
				//IncrementByReference(valor);

				txtNumero->Text = "" + valor;
				lblNumero->Text = "" + valor;

			} else {
				MessageBox::Show("El dato ingresado no es un número", "Error de entrada", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}


		/// <summary>
		/// Esta función incrementa el valor internamente, pero al salir sigue siendo el mismo
		/// </summary>
		/// <param name="num"></param>
		void IncrementByValue(int num) {
			num++;
		}

		/// <summary>
		/// Acá le estoy pasando la dirección de memoria de la variable, entonces al modificarla
		/// dentro del método, también se modificará al salir
		/// </summary>
		/// <param name="num"></param>
		void IncrementByReference(int% num) {
			num++;
		}

		bool IsNumber(String^ input) {
			String^ numeros = "0123456789";
			for (int i = 0; i < input->Length; i++) {
				if (!numeros->Contains(input[i].ToString())) {
					return false;
				}
			}
			return true;
		}
		   
	private: System::Void btnPoint_Click(System::Object^ sender, System::EventArgs^ e) {

		Point3D point; //Aca está la definición del struct
		/*DateTime^ actualDate = DateTime::Now;
		int seed = actualDate->Millisecond;

		Random^ rnd = gcnew Random( seed );

		point.x = rnd->Next();
		point.y = rnd->Next();
		point.z = rnd->Next();*/

		CalculadoraCpp* miCalculadora = new CalculadoraCpp();
		miCalculadora->cambiarPuntos(point.x, point.y, point.z);
		

		String^ strPunto = "(" + point.x + ", " + point.y + ", " + point.z + ")";
		lblPoint->Text = strPunto;
	}
private: System::Void btnEjecutar_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (cmbOperaciones->SelectedIndex) {
	case 0: {
		int numero1 = Convert::ToInt32(txtValor1->Text);
		int numero2 = Convert::ToInt32(txtValor2->Text);
		Calculadora^ miCalc = gcnew Calculadora();

		MessageBox::Show("El resultado es: " + miCalc->suma(numero1, numero2));
	} break;
	}
}



};

	
}
