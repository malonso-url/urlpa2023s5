#pragma once

namespace Lab1MoisesAlonso1187411 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ lblResultadoFactorialSimple;
	private: System::Windows::Forms::Button^ btnFactorialSimple;
	private: System::Windows::Forms::TextBox^ txtNumeroFactorialSimple;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lblResultadoFactorialCola;
	private: System::Windows::Forms::Button^ btnFactorialCola;
	private: System::Windows::Forms::TextBox^ txtFactorialCola;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ lblResultadoFibonacci;
	private: System::Windows::Forms::Button^ btnFibonacci;
	private: System::Windows::Forms::TextBox^ txtFibonacci;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ lblResultadoParidad;
	private: System::Windows::Forms::Button^ btnParidad;
	private: System::Windows::Forms::TextBox^ txtParidad;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ lblresultadoBinario;
	private: System::Windows::Forms::Button^ btnBinario;
	private: System::Windows::Forms::TextBox^ txtBinario;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblResultadoFactorialSimple = (gcnew System::Windows::Forms::Label());
			this->btnFactorialSimple = (gcnew System::Windows::Forms::Button());
			this->txtNumeroFactorialSimple = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblResultadoFactorialCola = (gcnew System::Windows::Forms::Label());
			this->btnFactorialCola = (gcnew System::Windows::Forms::Button());
			this->txtFactorialCola = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblResultadoFibonacci = (gcnew System::Windows::Forms::Label());
			this->btnFibonacci = (gcnew System::Windows::Forms::Button());
			this->txtFibonacci = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblResultadoParidad = (gcnew System::Windows::Forms::Label());
			this->btnParidad = (gcnew System::Windows::Forms::Button());
			this->txtParidad = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lblresultadoBinario = (gcnew System::Windows::Forms::Label());
			this->btnBinario = (gcnew System::Windows::Forms::Button());
			this->txtBinario = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblResultadoFactorialSimple);
			this->groupBox1->Controls->Add(this->btnFactorialSimple);
			this->groupBox1->Controls->Add(this->txtNumeroFactorialSimple);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(196, 126);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Factorial - Recursividad Simple";
			// 
			// lblResultadoFactorialSimple
			// 
			this->lblResultadoFactorialSimple->AutoSize = true;
			this->lblResultadoFactorialSimple->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoFactorialSimple->ForeColor = System::Drawing::Color::Red;
			this->lblResultadoFactorialSimple->Location = System::Drawing::Point(15, 100);
			this->lblResultadoFactorialSimple->Name = L"lblResultadoFactorialSimple";
			this->lblResultadoFactorialSimple->Size = System::Drawing::Size(68, 13);
			this->lblResultadoFactorialSimple->TabIndex = 3;
			this->lblResultadoFactorialSimple->Text = L"Resultado:";
			// 
			// btnFactorialSimple
			// 
			this->btnFactorialSimple->Location = System::Drawing::Point(18, 63);
			this->btnFactorialSimple->Name = L"btnFactorialSimple";
			this->btnFactorialSimple->Size = System::Drawing::Size(172, 23);
			this->btnFactorialSimple->TabIndex = 2;
			this->btnFactorialSimple->Text = L"Calcular";
			this->btnFactorialSimple->UseVisualStyleBackColor = true;
			this->btnFactorialSimple->Click += gcnew System::EventHandler(this, &MyForm::btnFactorialSimple_Click);
			// 
			// txtNumeroFactorialSimple
			// 
			this->txtNumeroFactorialSimple->Location = System::Drawing::Point(114, 33);
			this->txtNumeroFactorialSimple->Name = L"txtNumeroFactorialSimple";
			this->txtNumeroFactorialSimple->Size = System::Drawing::Size(76, 20);
			this->txtNumeroFactorialSimple->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese un entero:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblResultadoFactorialCola);
			this->groupBox2->Controls->Add(this->btnFactorialCola);
			this->groupBox2->Controls->Add(this->txtFactorialCola);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(12, 165);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(196, 126);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Factorial - Recursividad de Cola";
			// 
			// lblResultadoFactorialCola
			// 
			this->lblResultadoFactorialCola->AutoSize = true;
			this->lblResultadoFactorialCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoFactorialCola->ForeColor = System::Drawing::Color::Red;
			this->lblResultadoFactorialCola->Location = System::Drawing::Point(15, 100);
			this->lblResultadoFactorialCola->Name = L"lblResultadoFactorialCola";
			this->lblResultadoFactorialCola->Size = System::Drawing::Size(68, 13);
			this->lblResultadoFactorialCola->TabIndex = 3;
			this->lblResultadoFactorialCola->Text = L"Resultado:";
			// 
			// btnFactorialCola
			// 
			this->btnFactorialCola->Location = System::Drawing::Point(18, 63);
			this->btnFactorialCola->Name = L"btnFactorialCola";
			this->btnFactorialCola->Size = System::Drawing::Size(172, 23);
			this->btnFactorialCola->TabIndex = 2;
			this->btnFactorialCola->Text = L"Calcular";
			this->btnFactorialCola->UseVisualStyleBackColor = true;
			this->btnFactorialCola->Click += gcnew System::EventHandler(this, &MyForm::btnFactorialCola_Click);
			// 
			// txtFactorialCola
			// 
			this->txtFactorialCola->Location = System::Drawing::Point(114, 33);
			this->txtFactorialCola->Name = L"txtFactorialCola";
			this->txtFactorialCola->Size = System::Drawing::Size(76, 20);
			this->txtFactorialCola->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ingrese un entero:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblResultadoFibonacci);
			this->groupBox3->Controls->Add(this->btnFibonacci);
			this->groupBox3->Controls->Add(this->txtFibonacci);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(232, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(224, 126);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Fibonacci - Recursividad Simple";
			// 
			// lblResultadoFibonacci
			// 
			this->lblResultadoFibonacci->AutoSize = true;
			this->lblResultadoFibonacci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoFibonacci->ForeColor = System::Drawing::Color::Red;
			this->lblResultadoFibonacci->Location = System::Drawing::Point(19, 100);
			this->lblResultadoFibonacci->Name = L"lblResultadoFibonacci";
			this->lblResultadoFibonacci->Size = System::Drawing::Size(68, 13);
			this->lblResultadoFibonacci->TabIndex = 3;
			this->lblResultadoFibonacci->Text = L"Resultado:";
			// 
			// btnFibonacci
			// 
			this->btnFibonacci->Location = System::Drawing::Point(22, 63);
			this->btnFibonacci->Name = L"btnFibonacci";
			this->btnFibonacci->Size = System::Drawing::Size(188, 23);
			this->btnFibonacci->TabIndex = 2;
			this->btnFibonacci->Text = L"Calcular";
			this->btnFibonacci->UseVisualStyleBackColor = true;
			this->btnFibonacci->Click += gcnew System::EventHandler(this, &MyForm::btnFibonacci_Click);
			// 
			// txtFibonacci
			// 
			this->txtFibonacci->Location = System::Drawing::Point(134, 33);
			this->txtFibonacci->Name = L"txtFibonacci";
			this->txtFibonacci->Size = System::Drawing::Size(76, 20);
			this->txtFibonacci->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Ingrese un entero:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lblResultadoParidad);
			this->groupBox4->Controls->Add(this->btnParidad);
			this->groupBox4->Controls->Add(this->txtParidad);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(232, 165);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(224, 126);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Número Par - Recursividad Cruzada";
			// 
			// lblResultadoParidad
			// 
			this->lblResultadoParidad->AutoSize = true;
			this->lblResultadoParidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblResultadoParidad->ForeColor = System::Drawing::Color::Red;
			this->lblResultadoParidad->Location = System::Drawing::Point(15, 100);
			this->lblResultadoParidad->Name = L"lblResultadoParidad";
			this->lblResultadoParidad->Size = System::Drawing::Size(68, 13);
			this->lblResultadoParidad->TabIndex = 3;
			this->lblResultadoParidad->Text = L"Resultado:";
			// 
			// btnParidad
			// 
			this->btnParidad->Location = System::Drawing::Point(18, 63);
			this->btnParidad->Name = L"btnParidad";
			this->btnParidad->Size = System::Drawing::Size(172, 23);
			this->btnParidad->TabIndex = 2;
			this->btnParidad->Text = L"Calcular";
			this->btnParidad->UseVisualStyleBackColor = true;
			this->btnParidad->Click += gcnew System::EventHandler(this, &MyForm::btnParidad_Click);
			// 
			// txtParidad
			// 
			this->txtParidad->Location = System::Drawing::Point(114, 33);
			this->txtParidad->Name = L"txtParidad";
			this->txtParidad->Size = System::Drawing::Size(76, 20);
			this->txtParidad->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Ingrese un entero:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->lblresultadoBinario);
			this->groupBox5->Controls->Add(this->btnBinario);
			this->groupBox5->Controls->Add(this->txtBinario);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Location = System::Drawing::Point(12, 326);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(245, 126);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Cambio a base Binaria - Recursividad Simple";
			// 
			// lblresultadoBinario
			// 
			this->lblresultadoBinario->AutoSize = true;
			this->lblresultadoBinario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblresultadoBinario->ForeColor = System::Drawing::Color::Red;
			this->lblresultadoBinario->Location = System::Drawing::Point(15, 100);
			this->lblresultadoBinario->Name = L"lblresultadoBinario";
			this->lblresultadoBinario->Size = System::Drawing::Size(68, 13);
			this->lblresultadoBinario->TabIndex = 3;
			this->lblresultadoBinario->Text = L"Resultado:";
			// 
			// btnBinario
			// 
			this->btnBinario->Location = System::Drawing::Point(18, 63);
			this->btnBinario->Name = L"btnBinario";
			this->btnBinario->Size = System::Drawing::Size(204, 23);
			this->btnBinario->TabIndex = 2;
			this->btnBinario->Text = L"Calcular";
			this->btnBinario->UseVisualStyleBackColor = true;
			this->btnBinario->Click += gcnew System::EventHandler(this, &MyForm::btnBinario_Click);
			// 
			// txtBinario
			// 
			this->txtBinario->Location = System::Drawing::Point(114, 33);
			this->txtBinario->Name = L"txtBinario";
			this->txtBinario->Size = System::Drawing::Size(108, 20);
			this->txtBinario->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ingrese un entero:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 526);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Ejemplos Laboratorio 1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int factorial(int n) {
			if (n > 1) {
				return n * factorial(n - 1);
			}
			else {
				return 1;
			}
		}

		void factorial(int n, int* result) {
			if (n > 1) {
				*result = *result * n;
				factorial(n - 1, result);
			}
		}

		String^ Fibonacci(int n, int a, int b) {

			//Solamente se permite n mayor a 1
			if (n <= 0)
				throw gcnew Exception("Valor incorrecto, solo se aceptan números mayores a 0");

			//Caso base
			if (n == 1) {
				if (a == 0) 
					return "1";
				else
					return " ";
			} else if (n > 1) { 
				if (a == 0)
					return "1, " + (a + b) + ", " + Fibonacci((n - 1), b, (a + b));
				else
					return "" + (a + b) + ", " + Fibonacci((n - 1), b, (a + b));
			}
		}

		int Par(int n) {
			if (n == 0)
				return 1;
			else
				return Impar(n - 1);
		}

		int Impar(int n) {
			if (n == 0)
				return 0;
			return Par(n - 1);
		}

		int Binario(int n, int factor) {
			if (n == 1) {
				return n * factor;
			}
			else {
				return Binario(n / 2, factor * 10) + (n % 2) * factor;
			}
		}

	private: System::Void btnFactorialSimple_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			lblResultadoFactorialSimple->Text = "Factorial(" + txtNumeroFactorialSimple->Text + ") = " + factorial(Convert::ToInt32(txtNumeroFactorialSimple->Text));
			MessageBox::Show("Se ha encontrado el factorial", "Operación exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void btnFactorialCola_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int numero = Convert::ToInt32(txtFactorialCola->Text);
		int resultado = 1;

		factorial(numero, &resultado);
		lblResultadoFactorialCola->Text = "Factorial(" + numero + ") = " + resultado;
			

		MessageBox::Show("Se ha encontrado el factorial", "Operación exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnFibonacci_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		lblResultadoFibonacci->Text = Fibonacci(Convert::ToInt32(txtFibonacci->Text), 0, 1);
		MessageBox::Show("Se ha encontrado los números de Fibonacci", "Operación exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnParidad_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (Par(Convert::ToInt32(txtParidad->Text))) 
			lblResultadoParidad->Text = "El número " + txtParidad->Text + " es Par";
		else 
			lblResultadoParidad->Text = "El número " + txtParidad->Text + " es Impar";
		
		MessageBox::Show("Se ha encontrado la paridad del número", "Operación exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}	
private: System::Void btnBinario_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		lblresultadoBinario->Text = "" + Binario(Convert::ToInt32(txtBinario->Text), 1);
		MessageBox::Show("Se ha encontrado convertido exitosamente a binario", "Operación exitosa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
