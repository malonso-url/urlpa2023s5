#pragma once
#include <cliext\algorithm>;

namespace Lab0EjemploMoisesAlonso {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

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
			this->lblNumero->Size = System::Drawing::Size(14, 13);
			this->lblNumero->TabIndex = 2;
			this->lblNumero->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 236);
			this->Controls->Add(this->lblNumero);
			this->Controls->Add(this->btnIncrement);
			this->Controls->Add(this->txtNumero);
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

				//IncrementByValue(valor);
				IncrementByReference(valor);

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
		   
	};

	
}
