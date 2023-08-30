#include "pch.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab1MoisesAlonso25642::MainForm form;
	//<NombreDelProyecto>::MyForm form;
	Application::Run(% form);
	return 0;
}
