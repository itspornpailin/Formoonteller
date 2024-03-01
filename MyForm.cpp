#include "MyForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace Project3;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project3::MyForm form;
    Application::Run(% form);
