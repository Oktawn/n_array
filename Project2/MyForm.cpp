#include "MyForm.h"
#include <vector>
#include <ctime>
#include <iostream>
#include <fstream>


//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Diagnostics;



using vector3d = std::vector<std::vector<std::vector<int>>>;

[STAThreadAttribute]

int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project2::MyForm form;
    Application::Run(% form);
    return 0;
}

int n, strings, colomns;

System::Void Project2::MyForm::button1_print(System::Object^ sender, System::EventArgs^ e) //print numbers
{
    n = Convert::ToInt32(numericUpDownA_n->Value);
    strings = Convert::ToInt32(numericUpDownA_Strings->Value);
    colomns = Convert::ToInt32(numericUpDownA_Colomns->Value);
}


System::Void Project2::MyForm::button_create_a_Click(System::Object^ sender, System::EventArgs^ e)
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
    
    array << "вся матрица\n";
    for (int i = 0; i < v.size(); ++i)
    {

        for (int j = 0; j < v[i].size(); ++j)
        {

            for (int k = 0; k < v[i][j].size(); ++k)
            {
                array << v[i][j][k] << " ";
            }
            array << std::endl;
        }
        array << std::endl;
    }

    array << "\nвывод верхней грани\n";
    for (int i = 0; i < v.size(); ++i)
    {
        
        for (int j = 0;j==0;j++)
        {

            for (int k = 0; k < v[i][j].size(); ++k)
            {
                array << v[i][j][k] << " ";
            }
        }
        array << std::endl;
    }

    array << "\nвывод передней грани\n";
    for (int i = 0;i==0;i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            for (int k = 0; k < v[i][j].size(); k++)
            {
                array << v[i][j][k] << " ";
            }
            array << std::endl;
        }
    }

    array << "\nвывод левой грани\n";
    for (int i=0;i<v.size();i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            for (int k = 0; k == 0; k++)
            {
                array << v[i][j][k] <<" ";
            }
        }
        array << std::endl;
    }

    array << "\nвывод нижней грани\n";
    for (int i = 0; i < v.size(); ++i)
    {

        for (int j = v[i].size()-1; j == v[i].size()-1;j++)
        {

            for (int k = 0; k < v[i][j].size(); ++k)
            {
                array << v[i][j][k] << " ";
            }
        }
        array << std::endl;
    }

    array << "\nвывод задней грани\n";
    for (int i = v.size()-1; i == v.size() - 1; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            for (int k = 0; k < v[i][j].size(); k++)
            {
                array << v[i][j][k] << " ";
            }
            array << std::endl;
        }
    }

    array << "\nвывод правой грани\n";
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            for (int k = v[i][j].size()-1; k == v[i][j].size() - 1; k++)
            {
                array << v[i][j][k] << " ";
            }
        }
        array << std::endl;
    }

    array.close();
    v.clear();
}

System::Void Project2::MyForm::button_Out_A_Click(System::Object^ sender, System::EventArgs^ e)
{
    Process::Start("array.txt");
}

