#include "MyForm.h"
#include "sign.h"
#include "shop.h"
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h> // include this for String^ to std::string conversion
#include <string>
using namespace System;
using namespace System::Windows::Forms;

int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm form;
    Application::Run(% form);
    return 0;
}
