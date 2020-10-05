#include "MyForm.h"
#include <vector>
#include <ctime>
#include <iostream>
#include <fstream>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;

using vector2d = std::vector<std::vector<int>>;

[STAThreadAttribute]

int main() 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm form;
    Application::Run(% form);
    return 0;
}

int strings, colomns;

System::Void Project1::MyForm::button1_print(System::Object^ sender, System::EventArgs^ e) //print numbers
{
    strings= Convert::ToInt32(numericUpDownA_Strings->Value);
    colomns= Convert::ToInt32(numericUpDownA_Colomns->Value);
}


System::Void Project1::MyForm::button_create_a_Click(System::Object^ sender, System::EventArgs^ e)
{
    srand(time(NULL));
    std::ofstream array;

vector2d v(strings, std::vector<int> (colomns));

    for (int i = 0; i < strings; ++i)
    {
        for (int j = 0; j < strings; ++j)
        {
            v[i][j] = rand()% 100+1;
        }
    }

    array.open("array.txt");

    for (int i = 0; i < v.size(); ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {

            array << v[i][j] << " ";
        }
        array << std::endl;
    }

    array.close();
    v.clear();
}

System::Void Project1::MyForm::button_Out_A_Click(System::Object^ sender, System::EventArgs^ e)
{
    Process::Start("array.txt");
}






