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
	using namespace System::IO;
	

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
	private: System::Windows::Forms::TextBox^ txtArchivo;
	private: System::Windows::Forms::Button^ btnCargarArchivo;
	private: System::Windows::Forms::OpenFileDialog^ ofdArchivoTexto;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtNumero;
	private: System::Windows::Forms::Button^ btnSuma;



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
			this->txtArchivo = (gcnew System::Windows::Forms::TextBox());
			this->btnCargarArchivo = (gcnew System::Windows::Forms::Button());
			this->ofdArchivoTexto = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
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
			// txtArchivo
			// 
			this->txtArchivo->Location = System::Drawing::Point(713, 34);
			this->txtArchivo->Multiline = true;
			this->txtArchivo->Name = L"txtArchivo";
			this->txtArchivo->Size = System::Drawing::Size(378, 232);
			this->txtArchivo->TabIndex = 10;
			// 
			// btnCargarArchivo
			// 
			this->btnCargarArchivo->Location = System::Drawing::Point(878, 285);
			this->btnCargarArchivo->Name = L"btnCargarArchivo";
			this->btnCargarArchivo->Size = System::Drawing::Size(75, 23);
			this->btnCargarArchivo->TabIndex = 11;
			this->btnCargarArchivo->Text = L"Cargar Archivo";
			this->btnCargarArchivo->UseVisualStyleBackColor = true;
			this->btnCargarArchivo->Click += gcnew System::EventHandler(this, &MainForm::btnCargarArchivo_Click);
			// 
			// ofdArchivoTexto
			// 
			this->ofdArchivoTexto->FileName = L"openFileDialog1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1180, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Numero a Sumar";
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(1183, 95);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(100, 22);
			this->txtNumero->TabIndex = 13;
			// 
			// btnSuma
			// 
			this->btnSuma->Location = System::Drawing::Point(1183, 138);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(75, 23);
			this->btnSuma->TabIndex = 14;
			this->btnSuma->Text = L"Suma hasta N";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &MainForm::btnSuma_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1350, 367);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnCargarArchivo);
			this->Controls->Add(this->txtArchivo);
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
		bool ocurrioError = false;

		if (rbCirculo->Checked) {
			ocurrioError = !esRepresentacionDouble(txtRadio->Text);
			if (!ocurrioError) {
				miFigura = gcnew Circulo(Convert::ToDouble(txtRadio->Text));
			}
			else {
				MessageBox::Show("Cadena ingresada no tiene el formato correcto", "Formato incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			
		}
		else {

			ocurrioError = !esRepresentacionDouble(txtLadoA->Text) || !esRepresentacionDouble(txtLadoB->Text);

			if (!ocurrioError) {
				miFigura = gcnew Rectangulo(Convert::ToDouble(txtLadoA->Text), Convert::ToDouble(txtLadoB->Text));
			}
			else {
				MessageBox::Show("Cadena ingresada no tiene el formato correcto", "Formato incorrecto", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			
		}

		if (!ocurrioError) {
			misFiguras->Add(miFigura);

			EscribirFigurasEnListView();
			MostrarPerimetroEnMessageBox(miFigura);
		}
		
	}

		   /// <summary>
		   /// Esta funcion verifica que la cadena de entrada sea la representacion de un numero
		   /// 
		   /// FUNCION GENERADA POR IA
		   /// PROMPT: En C++ / CLI necesito una función que reciba un System::String^ y devuelva true si es la representación de un double o false de lo contrario
		   /// </summary>
		   /// <param name="str">Es la cadena de entrada</param>
		   /// <returns>true si es un numero ej. 20, 30.45 o false de lo contrario</returns>
		   bool esRepresentacionDouble(String^ str) {
			   double resultado;
			   return Double::TryParse(str, resultado);
		   }

		   void MostrarPerimetroEnMessageBox(FiguraGeometrica^ figura) {
			   MessageBox::Show("El perimetro es " + figura->CalcularPerimetro(), "Perimetro", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   }

		   /// <summary>
			/// Esta función escribe información sobre las figuras geométricas en un control Label.
			/// </summary>
		   void EscribirFigurasEnListView() {
			   String^ elemento = "";
			   for (int i = 0; i < misFiguras->Count; i++) {
				   if (misFiguras[i]->GetTipo() == FiguraGeometrica::TIPO_CIRCULO) {
					   elemento += "La figura es un Círculo con área: " + misFiguras[i]->CalcularArea() + "\r\n";
				   }
				   else {
					   elemento += "La figura es un Rectángulo con área: " + misFiguras[i]->CalcularArea() + "\r\n";
				   }
			   }

			   // Actualiza un control Label (lblResultado) con la información de las figuras.
			   lblResultado->Text = elemento;
		   }

	private: int sumaHastaNumeroN(int numeroN) {
		if (numeroN == 1) {
			return 1;
		}
		else {
			return numeroN + sumaHastaNumeroN(numeroN - 1);
		}
	}

			private: System::Void btnCargarArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
				
				if (System::Windows::Forms::DialogResult::OK == ofdArchivoTexto->ShowDialog()) {
					String^ path = ofdArchivoTexto->FileName;
					MessageBox::Show("Path: " + path, "Archivo correcto");
					array<String^ >^ contenidoArchivo = File::ReadAllLines(path);
					for (int i = 0; i < contenidoArchivo->Length; i++) {
						txtArchivo->Text += contenidoArchivo[i] + "\r\n";
					}
				}
				else {
					MessageBox::Show("archivo incorrecto", "No abrio archivo");
				}
				

			}//Fin del boton Carga Archivos

private: System::Void btnSuma_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("resultado: " + sumaHastaNumeroN(Convert::ToInt32(txtNumero->Text)),"Suma hasta N");
}
};
}
