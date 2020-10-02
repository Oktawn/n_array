#include "MyForm.h"
#include <vector>
#include <ctime>
#include <iostream>
#include <fstream>


//using namespace std;
using namespace System;
using namespace System::Windows::Forms;

using vector3d = std::vector<std::vector<std::vector<int>>>;

[STAThreadAttribute]

int main() 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm form;
    Application::Run(% form);


    return 0;
}

int n, strings, colomns;

System::Void Project1::MyForm::button1_print(System::Object^ sender, System::EventArgs^ e) //print numbers
{
    n = Convert::ToInt32(numericUpDownA_n->Value);
    strings= Convert::ToInt32(numericUpDownA_Strings->Value);
    colomns= Convert::ToInt32(numericUpDownA_Colomns->Value);
}


System::Void Project1::MyForm::button_create_a_Click(System::Object^ sender, System::EventArgs^ e)
{

    srand(time(NULL));

    std::ofstream array;

vector3d v(n, std::vector<std::vector<int>>(strings, std::vector<int>(colomns, 0)));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < strings; ++j)
        {
            for (int k = 0; k < colomns; ++k)
            {
                v[i][j][k] = rand() % 100 + 1;
            }
        }
    }


    array.open("array.txt");
    for (int i = 0; i < v.size(); ++i)
    {

        for (int j = 0; j < v[i].size(); ++j)
        {

            for (int k = 0; k < v[i][j].size(); ++k)
            {
                array << v[i][j][k] <<" ";
            }
            array << std::endl;
        }
        array << std::endl << std::endl;
    }

    array.close();
    v.clear();
}

System::Void Project1::MyForm::button_Out_A_Click(System::Object^ sender, System::EventArgs^ e)
{
    //system("array.txt");
    
}






