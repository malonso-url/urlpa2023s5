#pragma once
#include "Ordenamiento.h"
#include "Busqueda.h"

namespace EjemploLaboratorio1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ dgvArregloDesordenado;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dgvArregloOrdenado;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtValorBuscado;
	private: System::Windows::Forms::Label^ lblBusquedaSecuencial;
	private: System::Windows::Forms::Label^ lblBusquedaBinaria;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Button^ btnBinaria;

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
			this->dgvArregloDesordenado = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dgvArregloOrdenado = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtValorBuscado = (gcnew System::Windows::Forms::TextBox());
			this->lblBusquedaSecuencial = (gcnew System::Windows::Forms::Label());
			this->lblBusquedaBinaria = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnBinaria = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvArregloDesordenado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvArregloOrdenado))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvArregloDesordenado
			// 
			this->dgvArregloDesordenado->AllowUserToAddRows = false;
			this->dgvArregloDesordenado->AllowUserToDeleteRows = false;
			this->dgvArregloDesordenado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvArregloDesordenado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dgvArregloDesordenado->Location = System::Drawing::Point(784, 59);
			this->dgvArregloDesordenado->Name = L"dgvArregloDesordenado";
			this->dgvArregloDesordenado->ReadOnly = true;
			this->dgvArregloDesordenado->Size = System::Drawing::Size(153, 359);
			this->dgvArregloDesordenado->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(762, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Arreglo Desordenado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1036, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Arreglo Ordenado";
			// 
			// dgvArregloOrdenado
			// 
			this->dgvArregloOrdenado->AllowUserToAddRows = false;
			this->dgvArregloOrdenado->AllowUserToDeleteRows = false;
			this->dgvArregloOrdenado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvArregloOrdenado->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dgvArregloOrdenado->Location = System::Drawing::Point(1051, 59);
			this->dgvArregloOrdenado->Name = L"dgvArregloOrdenado";
			this->dgvArregloOrdenado->ReadOnly = true;
			this->dgvArregloOrdenado->Size = System::Drawing::Size(153, 359);
			this->dgvArregloOrdenado->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(135, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Número a buscar:";
			// 
			// txtValorBuscado
			// 
			this->txtValorBuscado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtValorBuscado->Location = System::Drawing::Point(308, 127);
			this->txtValorBuscado->Name = L"txtValorBuscado";
			this->txtValorBuscado->Size = System::Drawing::Size(88, 30);
			this->txtValorBuscado->TabIndex = 5;
			// 
			// lblBusquedaSecuencial
			// 
			this->lblBusquedaSecuencial->AutoSize = true;
			this->lblBusquedaSecuencial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBusquedaSecuencial->Location = System::Drawing::Point(29, 280);
			this->lblBusquedaSecuencial->Name = L"lblBusquedaSecuencial";
			this->lblBusquedaSecuencial->Size = System::Drawing::Size(40, 29);
			this->lblBusquedaSecuencial->TabIndex = 6;
			this->lblBusquedaSecuencial->Text = L"---";
			// 
			// lblBusquedaBinaria
			// 
			this->lblBusquedaBinaria->AutoSize = true;
			this->lblBusquedaBinaria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBusquedaBinaria->Location = System::Drawing::Point(29, 340);
			this->lblBusquedaBinaria->Name = L"lblBusquedaBinaria";
			this->lblBusquedaBinaria->Size = System::Drawing::Size(40, 29);
			this->lblBusquedaBinaria->TabIndex = 7;
			this->lblBusquedaBinaria->Text = L"---";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscar->Location = System::Drawing::Point(422, 127);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(231, 37);
			this->btnBuscar->TabIndex = 8;
			this->btnBuscar->Text = L"Buscar Secuencial";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &MainForm::btnBuscar_Click);
			// 
			// btnBinaria
			// 
			this->btnBinaria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBinaria->Location = System::Drawing::Point(422, 197);
			this->btnBinaria->Name = L"btnBinaria";
			this->btnBinaria->Size = System::Drawing::Size(231, 37);
			this->btnBinaria->TabIndex = 9;
			this->btnBinaria->Text = L"Buscar Binaria";
			this->btnBinaria->UseVisualStyleBackColor = true;
			this->btnBinaria->Click += gcnew System::EventHandler(this, &MainForm::btnBinaria_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1257, 463);
			this->Controls->Add(this->btnBinaria);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->lblBusquedaBinaria);
			this->Controls->Add(this->lblBusquedaSecuencial);
			this->Controls->Add(this->txtValorBuscado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvArregloOrdenado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvArregloDesordenado);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvArregloDesordenado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvArregloOrdenado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int SIZE = 50;
		array<int>^ arreglo = gcnew array<int>(SIZE);
		array<int>^ arreglo_ordenado = gcnew array<int>(SIZE);
		Busqueda^ miBusqueda = gcnew Busqueda();



	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random();

		for (int i = 0; i < SIZE; i++) {
			arreglo[i] = rnd->Next() % 1000;
			arreglo_ordenado[i] = arreglo[i];
		}

		MostrarArreglo(arreglo, dgvArregloDesordenado);
		arreglo_ordenado = Ordenamiento::bubbleSort(arreglo_ordenado, SIZE);
		MostrarArreglo(arreglo_ordenado, dgvArregloOrdenado);

	}

		   void MostrarArreglo(array<int>^ _arreglo, DataGridView^ dgv) {
			   dgv->Rows->Clear();
			   dgv->RowCount = SIZE;
			   for (int i = 0; i < SIZE; i++) {
				   dgv->Rows[i]->Cells[0]->Value = _arreglo[i];
			   }
		   }

	
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int valorABuscar = Convert::ToInt32(txtValorBuscado->Text);
	miBusqueda->comparacionesSecuencial = 0;
	int indice = miBusqueda->BusquedaSecuencial(arreglo, SIZE, valorABuscar);
	
	if (indice == -1) {
		lblBusquedaSecuencial->Text = "El valor " + valorABuscar + " buscado no se encontró, comparaciones: " + miBusqueda->comparacionesSecuencial;
		MessageBox::Show("El valor " + valorABuscar + " buscado no se encontró, comparaciones: " + miBusqueda->comparacionesSecuencial, "Valor no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else 
	{
		lblBusquedaSecuencial->Text = "El valor se encuentra en la posición: " + indice + " comparaciones: " + miBusqueda->comparacionesSecuencial;
		MessageBox::Show("El valor se encuentra en la posición: " + indice +" comparaciones: " + miBusqueda->comparacionesSecuencial, "Valor encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void btnBinaria_Click(System::Object^ sender, System::EventArgs^ e) {
	int valorABuscar = Convert::ToInt32(txtValorBuscado->Text);
	miBusqueda->comparacionesBinarias = 0;
	int indice = miBusqueda->BusquedaBinaria(arreglo_ordenado, 0, SIZE - 1, valorABuscar);
	
	if (indice == -1) {
		lblBusquedaBinaria->Text = "El valor " + valorABuscar + " buscado no se encontró, comparaciones: " + miBusqueda->comparacionesBinarias;
		MessageBox::Show("El valor " + valorABuscar + " buscado no se encontró cantidad comparaciones: " + miBusqueda->comparacionesBinarias, "Valor no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	{
		lblBusquedaBinaria->Text = "El valor se encuentra en la posición: " + indice + " comparaciones: " + miBusqueda->comparacionesBinarias;;
		MessageBox::Show("El valor se encuentra en la posición: " + indice + " comparaciones: " + miBusqueda->comparacionesBinarias, "Valor encontrado", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
