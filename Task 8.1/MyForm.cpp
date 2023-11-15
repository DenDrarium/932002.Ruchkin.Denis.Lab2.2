#include "MyForm.h"
#include <ctime>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Task81::MyForm form; 
    Application::Run(% form);
}

System::Void Task81::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    srand(time(NULL));
    
    double X = (0 + rand() % 1000) * 0.001;
    //textBox1->Text = X.ToString();
    if (X <= 0.5)
        textBox2->Text = "YES";
    else
        textBox2->Text = "NO";

    return System::Void();
}
