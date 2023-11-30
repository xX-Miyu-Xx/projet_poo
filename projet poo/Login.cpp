#include "Login.h"
#include "User.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Login::Login monFormulaire;
    Application::Run(% monFormulaire);
}

