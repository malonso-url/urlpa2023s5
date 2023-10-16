#pragma once
#include <cliext\algorithm>;
#include "Point3D.h";
#include "CalculadoraCpp.h";
#include "Calculadora.h";
#include "StackPropio.h"

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
	private: System::Windows::Forms::DataGridView^ dgvPilas;

	private: System::Windows::Forms::Button^ btnCargarDGV;
	private: System::Windows::Forms::TextBox^ txtFilas;

	private: System::Windows::Forms::TextBox^ txtColumnas;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtOrigen;
	private: System::Windows::Forms::TextBox^ txtDestino;
	private: System::Windows::Forms::Button^ btnMover;





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
			this->dgvPilas = (gcnew System::Windows::Forms::DataGridView());
			this->btnCargarDGV = (gcnew System::Windows::Forms::Button());
			this->txtFilas = (gcnew System::Windows::Forms::TextBox());
			this->txtColumnas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtOrigen = (gcnew System::Windows::Forms::TextBox());
			this->txtDestino = (gcnew System::Windows::Forms::TextBox());
			this->btnMover = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPilas))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(33, 34);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(100, 20);
			this->txtNumero->TabIndex = 0;
			// 
			// btnIncrement
			// 
			this->btnIncrement->Location = System::Drawing::Point(155, 34);
			this->btnIncrement->Name = L"btnIncrement";
			this->btnIncrement->Size = System::Drawing::Size(110, 23);
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
			this->lblNumero->Location = System::Drawing::Point(287, 39);
			this->lblNumero->Name = L"lblNumero";
			this->lblNumero->Size = System::Drawing::Size(17, 17);
			this->lblNumero->TabIndex = 2;
			this->lblNumero->Text = L"0";
			// 
			// btnPoint
			// 
			this->btnPoint->Location = System::Drawing::Point(33, 92);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(100, 23);
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
			this->lblPoint->Location = System::Drawing::Point(152, 92);
			this->lblPoint->Name = L"lblPoint";
			this->lblPoint->Size = System::Drawing::Size(67, 17);
			this->lblPoint->TabIndex = 4;
			this->lblPoint->Text = L"(0, 0, 0)";
			// 
			// txtValor1
			// 
			this->txtValor1->Location = System::Drawing::Point(485, 39);
			this->txtValor1->Margin = System::Windows::Forms::Padding(2);
			this->txtValor1->Name = L"txtValor1";
			this->txtValor1->Size = System::Drawing::Size(76, 20);
			this->txtValor1->TabIndex = 5;
			// 
			// txtValor2
			// 
			this->txtValor2->Location = System::Drawing::Point(485, 70);
			this->txtValor2->Margin = System::Windows::Forms::Padding(2);
			this->txtValor2->Name = L"txtValor2";
			this->txtValor2->Size = System::Drawing::Size(76, 20);
			this->txtValor2->TabIndex = 6;
			// 
			// cmbOperaciones
			// 
			this->cmbOperaciones->FormattingEnabled = true;
			this->cmbOperaciones->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Suma", L"Resta", L"Multiplicacion", L"Cociente",
					L"Residuo", L"Potencia"
			});
			this->cmbOperaciones->Location = System::Drawing::Point(485, 107);
			this->cmbOperaciones->Margin = System::Windows::Forms::Padding(2);
			this->cmbOperaciones->Name = L"cmbOperaciones";
			this->cmbOperaciones->Size = System::Drawing::Size(92, 21);
			this->cmbOperaciones->TabIndex = 7;
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->Location = System::Drawing::Point(485, 145);
			this->btnEjecutar->Margin = System::Windows::Forms::Padding(2);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(56, 32);
			this->btnEjecutar->TabIndex = 8;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = true;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &MyForm::btnEjecutar_Click);
			// 
			// dgvPilas
			// 
			this->dgvPilas->AllowUserToAddRows = false;
			this->dgvPilas->AllowUserToDeleteRows = false;
			this->dgvPilas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPilas->Location = System::Drawing::Point(33, 278);
			this->dgvPilas->Name = L"dgvPilas";
			this->dgvPilas->ReadOnly = true;
			this->dgvPilas->RowHeadersWidth = 51;
			this->dgvPilas->Size = System::Drawing::Size(485, 176);
			this->dgvPilas->TabIndex = 9;
			// 
			// btnCargarDGV
			// 
			this->btnCargarDGV->Location = System::Drawing::Point(564, 375);
			this->btnCargarDGV->Name = L"btnCargarDGV";
			this->btnCargarDGV->Size = System::Drawing::Size(110, 32);
			this->btnCargarDGV->TabIndex = 10;
			this->btnCargarDGV->Text = L"Inicializar";
			this->btnCargarDGV->UseVisualStyleBackColor = true;
			this->btnCargarDGV->Click += gcnew System::EventHandler(this, &MyForm::btnCargarDGV_Click);
			// 
			// txtFilas
			// 
			this->txtFilas->Location = System::Drawing::Point(611, 278);
			this->txtFilas->Name = L"txtFilas";
			this->txtFilas->Size = System::Drawing::Size(100, 20);
			this->txtFilas->TabIndex = 11;
			// 
			// txtColumnas
			// 
			this->txtColumnas->Location = System::Drawing::Point(611, 321);
			this->txtColumnas->Name = L"txtColumnas";
			this->txtColumnas->Size = System::Drawing::Size(100, 20);
			this->txtColumnas->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(536, 281);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 15);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Filas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(536, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Columnas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 498);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Origen";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 533);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Destino:";
			// 
			// txtOrigen
			// 
			this->txtOrigen->Location = System::Drawing::Point(119, 493);
			this->txtOrigen->Name = L"txtOrigen";
			this->txtOrigen->Size = System::Drawing::Size(100, 20);
			this->txtOrigen->TabIndex = 17;
			// 
			// txtDestino
			// 
			this->txtDestino->Location = System::Drawing::Point(119, 530);
			this->txtDestino->Name = L"txtDestino";
			this->txtDestino->Size = System::Drawing::Size(100, 20);
			this->txtDestino->TabIndex = 18;
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(301, 505);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(75, 23);
			this->btnMover->TabIndex = 19;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = true;
			this->btnMover->Click += gcnew System::EventHandler(this, &MyForm::btnMover_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 574);
			this->Controls->Add(this->btnMover);
			this->Controls->Add(this->txtDestino);
			this->Controls->Add(this->txtOrigen);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtColumnas);
			this->Controls->Add(this->txtFilas);
			this->Controls->Add(this->btnCargarDGV);
			this->Controls->Add(this->dgvPilas);
			this->Controls->Add(this->btnEjecutar);
			this->Controls->Add(this->cmbOperaciones);
			this->Controls->Add(this->txtValor2);
			this->Controls->Add(this->txtValor1);
			this->Controls->Add(this->lblPoint);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->lblNumero);
			this->Controls->Add(this->btnIncrement);
			this->Controls->Add(this->txtNumero);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPilas))->EndInit();
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


	   
	   ArrayList^ pilas;

	   void dibujarPila(int cantidadFilas, int columna, StackPropio^ pila) {
		   StackPropio^ temp = gcnew StackPropio();

		   while (pila->count > 0) {
			   temp->Push(pila->Pop());
		   }

		   for (int i = 0; i < cantidadFilas; i++) {
			   dgvPilas->Rows[i]->Cells[columna]->Value = "";
		   }

		   int index = cantidadFilas - 1;
		   while (temp->count > 0) {
			   pila->Push(temp->Pop());
			   dgvPilas->Rows[index]->Cells[columna]->Value = pila->Peek();
			   index--;
		   }


	   }

private: System::Void btnCargarDGV_Click(System::Object^ sender, System::EventArgs^ e) {
	int cantidadFilas = Convert::ToInt32(txtFilas->Text);
	int cantidadColumnas = Convert::ToInt32(txtColumnas->Text);
	
	dgvPilas->ColumnCount = cantidadColumnas;
	dgvPilas->RowCount = cantidadFilas;

	pilas = gcnew ArrayList();

	for (int i = 0; i < cantidadColumnas; i++) {
		pilas->Add(gcnew StackPropio());

		for (int j = 0; j < cantidadFilas - 2; j++) {
			((StackPropio^)pilas[i])->Push(j);
		}

		dibujarPila(cantidadFilas, i, (StackPropio^)pilas[i]);
	}
	
}
private: System::Void btnMover_Click(System::Object^ sender, System::EventArgs^ e) {
	StackPropio^ pilaOrigen = (StackPropio^)pilas[ Convert::ToInt32(txtOrigen->Text )];
	StackPropio^ pilaDestino = (StackPropio^)pilas[Convert::ToInt32(txtDestino->Text)];
	pilaDestino->Push(pilaOrigen->Pop());

	dibujarPila(dgvPilas->RowCount, Convert::ToInt32(txtOrigen->Text), pilaOrigen);
	dibujarPila(dgvPilas->RowCount, Convert::ToInt32(txtDestino->Text), pilaDestino);
}

};

	
}
