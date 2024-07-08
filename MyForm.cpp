#include "MyForm.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include <fstream>
#include<windows.h>
#include <process.h>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Reflection;
using namespace Microsoft::Win32;

[STAThreadAttribute]
int main()
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	projconf::MyForm form;
	Application::Run(% form);
}

System::Void projconf::MyForm::button23_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	if (is)
	{
		File::WriteAllText(fileName, bufferr);
	}
}

System::Void projconf::MyForm::textBox_plus_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (!btn_u_plus_v)
	{
		if (e->KeyChar != '\b')
		{
			MessageBox::Show("Выберите соответствующий пункт");
			e->Handled = true;
		}
		else
		{

			e->Handled = false;
		}
	}
	if (e->KeyChar == '0')
	{
		e->Handled = true;
		MessageBox::Show("У вас выбрано u + v (минимальное значение = 1)");
		textBox_plus->Text = "1";
	}

	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57))
	{
		e->Handled = true;
	}
	
}

System::Void projconf::MyForm::textBox_minus_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (!u_minus_v)
	{
		if (e->KeyChar != '\b')
		{
			MessageBox::Show("Выберите соответствующий пункт");
			e->Handled = true;
		}
		else
		{

			e->Handled = false;
		}
	}
	if (e->KeyChar == '0')
	{
		e->Handled = true;
		MessageBox::Show("У вас выбрано u - v (минимальное значение = 1)");
		textBox_minus->Text = "1";
	}
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57))
	{
		e->Handled = true;
	}
}

System::Void projconf::MyForm::textBox_multiply_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (!btn_c_u && !u_mult_v)
	{
		if (e->KeyChar != '\b')
		{
			MessageBox::Show("Выберите соответствующий пункт");
			e->Handled = true;
			return;
		}
	}
	if (u_mult_v && btn_c_u)
	{
		if (e->KeyChar == '0' || e->KeyChar == '1')
		{
			e->Handled = true;
			MessageBox::Show("У вас выбрано u * v и c * u (минимальное значение = 2)");
			textBox_multiply->Text = "2";
		}
	}
	else if (u_mult_v && !btn_c_u)
	{
		if (e->KeyChar == '0' )
		{
			e->Handled = true;
			MessageBox::Show("У вас выбрано u * v (минимальное значение = 1)");
			textBox_multiply->Text = "1";
		}
	}
	else if (!u_mult_v && btn_c_u)
	{
		if (e->KeyChar == '0')
		{
			e->Handled = true;
			MessageBox::Show("У вас выбрано c * u (минимальное значение = 1)");
			textBox_multiply->Text = "1";
		}
	}
	if (e->KeyChar == '0')
	{
		e->Handled = true;
	}
}

System::Void projconf::MyForm::textBox_divide_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (!u_div_a)
	{
		if (e->KeyChar != '\b')
		{
			MessageBox::Show("Выберите соответствующий пункт");
			e->Handled = true;
		}
		else
		{

			e->Handled = false;
		}
	}
	if ((e->KeyChar != (char)8) && (e->KeyChar < (char)48 || e->KeyChar >(char)57))
	{
		e->Handled = true;
	}
	if (e->KeyChar == '0')
	{
		e->Handled = true;
		MessageBox::Show("У вас выбрано u / v (минимальное значение = 1)");
		textBox_divide->Text = "1";
	}
}

System::Void projconf::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_ctg == false)
	{
		btn_ctg = true;
		image1 = System::Drawing::Image::FromFile("image 47(1).png");
		button1->Image = image1;
	}
	else
	{
		btn_ctg = false;
		image1 = System::Drawing::Image::FromFile("image 47.png");
		button1->Image = image1;
	}
}

System::Void projconf::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_arctg == false)
	{
		btn_arctg = true;
		image1 = System::Drawing::Image::FromFile("image 50(1).png");
		button2->Image = image1;
	}
	else
	{
		btn_arctg = false;
		image1 = System::Drawing::Image::FromFile("image 50.png");
		button2->Image = image1;
	}
}


System::Void projconf::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_a_u == false)
	{
		btn_a_u = true;
		image1 = System::Drawing::Image::FromFile("image 42(1).png");
		button4->Image = image1;
	}
	else
	{
		btn_a_u = false;
		image1 = System::Drawing::Image::FromFile("Group 64.png");
		button4->Image = image1;
	}
}

System::Void projconf::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_e_u == false)
	{
		btn_e_u = true;
		image1 = System::Drawing::Image::FromFile("image 42 (1).png");
		button5->Image = image1;
	}
	else
	{
		btn_e_u = false;
		image1 = System::Drawing::Image::FromFile("image 42.png");
		button5->Image = image1;
	}
}

System::Void projconf::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_tg == false)
	{
		btn_tg = true;
		image1 = System::Drawing::Image::FromFile("image 46(1).png");
		button6->Image = image1;
	}
	else
	{
		btn_tg = false;
		image1 = System::Drawing::Image::FromFile("image 46.png");
		button6->Image = image1;

	}
}

System::Void projconf::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_arcsin == false)
	{
		btn_arcsin = true;
		image1 = System::Drawing::Image::FromFile("image 48(1).png");
		button7->Image = image1;
	}
	else
	{
		btn_arcsin = false;
		image1 = System::Drawing::Image::FromFile("image 48.png");
		button7->Image = image1;
	}
}

System::Void projconf::MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_sqrt_u == false)
	{
		btn_sqrt_u = true;
		image1 = System::Drawing::Image::FromFile("image 40 (1).jpg");
		button15->Image = image1;
	}
	else
	{
		btn_sqrt_u = false;
		image1 = System::Drawing::Image::FromFile("image 40.png");
		button15->Image = image1;
	}
}

System::Void projconf::MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;

	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_u_a == false)
	{
		btn_u_a = true;
		image1 = System::Drawing::Image::FromFile("Group 81.png");
		button10->Image = image1;
	}
	else
	{
		btn_u_a = false;
		image1 = System::Drawing::Image::FromFile("Group 91 (2).png");
		button10->Image = image1;
	}
}

System::Void projconf::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_ln_u == false)
	{
		btn_ln_u = true;
		image1 = System::Drawing::Image::FromFile("image 43(1).png");
		button8->Image = image1;
	}
	else
	{
		btn_ln_u = false;
		image1 = System::Drawing::Image::FromFile("image 43.png");
		button8->Image = image1;
	}
}

System::Void projconf::MyForm::button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_sin == false)
	{
		btn_sin = true;
		image1 = System::Drawing::Image::FromFile("image 44(1).png");
		button11->Image = image1;
	}
	else
	{
		btn_sin = false;
		image1 = System::Drawing::Image::FromFile("image 44.png");
		button11->Image = image1;
	}
}

System::Void projconf::MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_arccos == false)
	{
		btn_arccos = true;
		image1 = System::Drawing::Image::FromFile("image 49(1).png");
		button12->Image = image1;
	}
	else
	{
		btn_arccos = false;
		image1 = System::Drawing::Image::FromFile("image 49.png");
		button12->Image = image1;
	}
}

System::Void projconf::MyForm::button14_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_log_a_u == false)
	{
		btn_log_a_u = true;
		image1 = System::Drawing::Image::FromFile("Group 91.png");
		button14->Image = image1;
	}
	else
	{
		btn_log_a_u = false;
		image1 = System::Drawing::Image::FromFile("Group 93.png");
		button14->Image = image1;
	}
}

System::Void projconf::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_cos == false)
	{
		btn_cos = true;
		image1 = System::Drawing::Image::FromFile("image 45(1).png");
		button9->Image = image1;

	}
	else
	{
		btn_cos = false;
		image1 = System::Drawing::Image::FromFile("image 45(2).png");
		button9->Image = image1;
	}
}

System::Void projconf::MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (btn_arcctg == false)
	{
		btn_arcctg = true;
		image1 = System::Drawing::Image::FromFile("image 51(1).png");
		button13->Image = image1;
	}
	else
	{
		btn_arcctg = false;
		image1 = System::Drawing::Image::FromFile("image 51.png");
		button13->Image = image1;
	}
}

System::Void projconf::MyForm::button_generate_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (Convert::ToString(textBox_divide->Text) == "0" && Convert::ToString(textBox_multiply->Text) == "0" && Convert::ToString(textBox_minus->Text) == "0" && Convert::ToString(textBox_plus->Text) == "0")
	{
		MessageBox::Show("Поля для ввода действий пустые");
		return;
	}
	if (!btn_arctg && !btn_arcsin && !btn_arccos && !btn_arcctg && !btn_ctg && !btn_sin && !btn_cos && !btn_tg && !btn_ln_u && !btn_u_a && !btn_sqrt_u && !btn_a_u && !btn_e_u && !btn_log_a_u)
	{
		MessageBox::Show("Ни один параметр не выбран");
		return;
	}
	if (radioButton_1->Checked == false && radioButton_2->Checked == false && radioButton_3->Checked == false)
	{
		MessageBox::Show("Сложность по умолчанию (Школьник)");
		radioButton_1->Checked = true;
	}
	if (btn_arctg)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("1= 0", "1= arctan(u)");
		File::WriteAllText(fileName, buffer);
	}
	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("1= arctan(u)", "1= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_arcsin)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("2= 0", "2= arcsin(u)");
		File::WriteAllText(fileName, buffer);
	}
	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("2= arcsin(u)", "2= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_arccos)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("3= 0", "3= arccos(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("3= arccos(u)", "3= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_arcctg)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("4= 0", "4= arcctg(u)");
		File::WriteAllText(fileName, buffer);
	}
	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("4= arcctg(u)", "4= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_ctg)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("ctg= 0", "ctg= ctg(u)");

		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("ctg= ctg(u)", "ctg= 0"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	if (btn_sin )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("sin= 0", "sin= sin(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("sin= sin(u)", "sin= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_one_div_u)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("1/u= 0", "1/u= 1/u");

		File::WriteAllText(fileName, buffer);
	}
	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("1/u= 1/u", "1/u= 0");

		File::WriteAllText(fileName, buffer);
	}
	if (btn_cos)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("cos= 0", "cos= cos(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("cos= cos(u)", "cos= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_tg)
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("tan= 0", "tan= tan(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("tan= tan(u)", "tan= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_ln_u )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("ln= 0", "ln= ln(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("ln= ln(u)", "ln= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_u_a )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("u^a= 0", "u^a= u^a");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("u^a= u^a", "u^a= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_sqrt_u )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("sqrt= 0", "sqrt= sqrt(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("sqrt= sqrt(u)", "sqrt= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_a_u )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("a^u= 0", "a^u= a^u");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("a^u= a^u", "a^u= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_e_u )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("exp= 0", "exp= exp(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("exp= exp(u)", "exp= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_log_a_u )
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("log= 0", "log= log(u)");
		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("log= log(u)", "log= 0");
		File::WriteAllText(fileName, buffer);
	}

	if (btn_c_u)
	{

		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(C * u)'= 0", "(C * u)'= 1"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	else
	{
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(C * u)'= 1", "(C * u)'= 0"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	if (btn_u_plus_v)
	{
		
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ buffer = "";
		String^ line; // 
		while ((line = reader->ReadLine()) != nullptr)
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("(u + v)'= 0", "(u + v)'= 1");

		File::WriteAllText(fileName, buffer);
	}

	else
	{
	
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u + v)'= 1", "(u + v)'= 0"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	if (u_minus_v)
	{
		
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u - v)'= 0", "(u - v)'= 1"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	else
	{
		
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u - v)'= 1", "(u - v)'= 0"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	if (u_mult_v)
	{

		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u * v)'= 0", "(u * v)'= 1"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	else
	{
		
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u * v)'= 1", "(u * v)'= 0"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	if (u_div_a)
	{
	
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u/a)'= 0", "(u/a)'= 1"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	else
	{
	
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("(u/a)'= 1", "(u/a)'= 0"); // �������� ctg= 0 �� ctg= 1

		File::WriteAllText(fileName, buffer);
	}

	if (radioButton_1->Checked == true)
	{
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("T_level= 3", "T_level= 1");
		buffer = buffer->Replace("T_level= 2", "T_level= 1");

		File::WriteAllText(fileName, buffer);
	}

	if (radioButton_2->Checked == true)
	{
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n";
		}

		reader->Close();

		buffer = buffer->Replace("T_level= 3", "T_level= 2");
		buffer = buffer->Replace("T_level= 1", "T_level= 2");

		File::WriteAllText(fileName, buffer);
	}

	if (radioButton_3->Checked == true)
	{
		StreamReader^ reader = gcnew StreamReader(fileName); // ������� ������ ��� ������ �����
		String^ buffer = ""; // ������� ������ ������ ��� ������
		String^ line; // ������� ���������� ��� �������� ������� ������
		while ((line = reader->ReadLine()) != nullptr) // ���� �� ��������� ����� �����
		{
			buffer += line + "\n"; // ��������� ������� ������ � ������ �������� � ������
		}

		reader->Close();

		buffer = buffer->Replace("T_level= 2", "T_level= 3");
		buffer = buffer->Replace("T_level= 1", "T_level= 3");

		File::WriteAllText(fileName, buffer);
	}

	StreamReader^ reader = gcnew StreamReader(fileName);
	String^ buffer = "";
	String^ line;

	while ((line = reader->ReadLine()) != nullptr)
	{
		buffer += line + "\n";
	}

	reader->Close();
	

	buffer = buffer->Replace("/= 0", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 1", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 2", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 3", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 4", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 5", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 6", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 7", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 8", "/= " + Convert::ToString(textBox_divide->Text));
	buffer = buffer->Replace("/= 9", "/= " + Convert::ToString(textBox_divide->Text));

	buffer = buffer->Replace("*= 0", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 1", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 2", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 3", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 4", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 5", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 6", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 7", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 8", "*= " + Convert::ToString(textBox_multiply->Text));
	buffer = buffer->Replace("*= 9", "*= " + Convert::ToString(textBox_multiply->Text));

	buffer = buffer->Replace("+= 0", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 1", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 2", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 3", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 4", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 5", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 6", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 7", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 8", "+= " + Convert::ToString(textBox_plus->Text));
	buffer = buffer->Replace("+= 9", "+= " + Convert::ToString(textBox_plus->Text));

	buffer = buffer->Replace("-= 0", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 1", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 2", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 3", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 4", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 5", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 6", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 7", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 8", "-= " + Convert::ToString(textBox_minus->Text));
	buffer = buffer->Replace("-= 9", "-= " + Convert::ToString(textBox_minus->Text));
	File::WriteAllText(fileName, buffer);

	_spawnl(_P_WAIT, "main.exe", "main.exe", NULL);
	
	
	StreamReader^ sr = gcnew StreamReader("answer_out.txt");
	this->label2->Text = sr->ReadToEnd();
	sr->Close();

}

System::Void projconf::MyForm::button_reset_Click(System::Object^ sender, System::EventArgs^ e)
{
	btn_ctg = false;
	btn_sin = false;
	btn_cos = false;
	btn_tg = false;
	btn_arctg = false;
	btn_arcsin = false;
	btn_arccos = false;
	btn_arcctg = false;
	btn_ln_u = false;
	btn_u_a = false;
	btn_sqrt_u = false;
	btn_a_u = false;
	btn_e_u = false;
	btn_log_a_u = false;

	btn_c_u = false;
	btn_u_plus_v = false;
	u_minus_v = false;
	u_mult_v = false;
	u_div_a = false;
	textBox_plus->Text = "0";
	textBox_minus->Text = "0";
	textBox_multiply->Text = "0";
	textBox_divide->Text = "0";

	System::Drawing::Image^ image1;

	btn_arcsin = false;
	image1 = System::Drawing::Image::FromFile("image 48.png");
	button7->Image = image1;

	image1 = System::Drawing::Image::FromFile("image 47.png");
	button1->Image = image1;

	image1 = System::Drawing::Image::FromFile("image 50.png");
	button2->Image = image1;

	image1 = System::Drawing::Image::FromFile("image 50.png");
	button2->Image = image1;

	image1 = System::Drawing::Image::FromFile("image 51.png");
	button13->Image = image1; image1 = System::Drawing::Image::FromFile("image 45(2).png");
	button9->Image = image1;	image1 = System::Drawing::Image::FromFile("Group 93(1).png");
	button14->Image = image1; image1 = System::Drawing::Image::FromFile("image 49.png");
	button12->Image = image1; image1 = System::Drawing::Image::FromFile("image 44.png");
	button11->Image = image1; image1 = System::Drawing::Image::FromFile("image 43.png");
	button8->Image = image1; image1 = System::Drawing::Image::FromFile("Frame 90(1).png");
	button10->Image = image1; image1 = System::Drawing::Image::FromFile("image 40.png");
	button15->Image = image1; image1 = System::Drawing::Image::FromFile("image 48.png");
	button7->Image = image1; image1 = System::Drawing::Image::FromFile("image 42(3).png");
	button5->Image = image1; image1 = System::Drawing::Image::FromFile("image 46.png");
	button6->Image = image1;
	image1 = System::Drawing::Image::FromFile("image 42.png");
	button4->Image = image1;
	image1 = System::Drawing::Image::FromFile("image 38(1).png");
	button_u_div_v->Image = image1;

	image1 = System::Drawing::Image::FromFile("image 37(1).png");
	button_u_mult_v->Image = image1;


	image1 = System::Drawing::Image::FromFile("image 36(1).png");
	button_u_plus_v->Image = image1;

	image1 = System::Drawing::Image::FromFile("Group 80(1).png");
	button_u_minus_v->Image = image1;

	image1 = System::Drawing::Image::FromFile("image 62(1).png");
	button_c_u->Image = image1;
	if (is)
	{
		File::WriteAllText(fileName, bufferr);
	}

	label2->Text = "Для вывода";
		
		
		
	


}

System::Void projconf::MyForm::textBox_divide_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_divide->Text->Length > 1)
	{
		this->textBox_divide->Text = temp;
		return;
	}
	temp = this->textBox_divide->Text;
}

System::Void projconf::MyForm::textBox_divide_Enter(System::Object^ sender, System::EventArgs^ e)
{
	if (is == false)
	{
		is = true;
	}
	if (this->textBox_divide->Text == "0")
	{
		this->textBox_divide->Text = "";
	}
}

System::Void projconf::MyForm::textBox_divide_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_divide->Text == "")
	{
		this->textBox_divide->Text = "0";
	}
}

System::Void projconf::MyForm::textBox_multiply_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_multiply->Text == "")
	{
		this->textBox_multiply->Text = "0";
	}
}

System::Void projconf::MyForm::textBox_minus_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_minus->Text == "")
	{
		this->textBox_minus->Text = "0";
	}
}

System::Void projconf::MyForm::textBox_plus_Leave(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_plus->Text == "")
	{
		this->textBox_plus->Text = "0";
	}
}
System::Void projconf::MyForm::textBox_plus_Enter(System::Object^ sender, System::EventArgs^ e)
{
	if (is == false)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (this->textBox_plus->Text == "0")
	{
		this->textBox_plus->Text = "";
	}
}

System::Void projconf::MyForm::textBox_minus_Enter(System::Object^ sender, System::EventArgs^ e)
{
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (this->textBox_minus->Text == "0")
	{
		this->textBox_minus->Text = "";
	}
}

System::Void projconf::MyForm::textBox_multiply_Enter(System::Object^ sender, System::EventArgs^ e)
{
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (this->textBox_multiply->Text == "0")
	{
		this->textBox_multiply->Text = "";
	}
}

System::Void projconf::MyForm::textBox_multiply_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_multiply->Text->Length > 1)
	{
		this->textBox_multiply->Text = temp;
		return;
	}
	temp = this->textBox_multiply->Text;
}

System::Void projconf::MyForm::textBox_minus_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->textBox_minus->Text->Length > 1)
	{
		this->textBox_minus->Text = temp;
		return;
	}
	temp = this->textBox_minus->Text;
}

System::Void projconf::MyForm::textBox_plus_TextChanged(System::Object^ sender, System::EventArgs^ e)
{

	if (this->textBox_plus->Text->Length > 1)
	{
		this->textBox_plus->Text = temp;
		return;
	}
	temp = this->textBox_plus->Text;
}

System::Void projconf::MyForm::radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (difficult1 == false)
	{
		difficult1 = true;
	}
	else
	{
		difficult1 = false;
	}
}

System::Void projconf::MyForm::radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (difficult2 == false)
	{
		difficult2 = true;
	}
	else
	{
		difficult2 = false;
	}
}

System::Void projconf::MyForm::radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (difficult3 == false)
	{
		difficult3 = true;
	}
	else
	{
		difficult3 = false;
	}
}

System::Void projconf::MyForm::button_c_u_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	System::Drawing::Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}

	if (!btn_c_u && u_mult_v)
	{
		image1 = System::Drawing::Image::FromFile("image 62(2).png");
		button_c_u->Image = image1;
		btn_c_u = true;
		textBox_multiply->Text = "2";
	}
	else if (!btn_c_u)
	{
		image1 = System::Drawing::Image::FromFile("image 62(2).png");
		button_c_u->Image = image1;
		btn_c_u = true;
		textBox_multiply->Text = "1";
	}
	else if (btn_c_u && u_mult_v)
	{
		image1 = System::Drawing::Image::FromFile("image 62(1).png");
		button_c_u->Image = image1;
		btn_c_u = false;
		textBox_multiply->Text = "1";
	}

	else
	{
		image1 = System::Drawing::Image::FromFile("image 62(1).png");
		button_c_u->Image = image1;
		btn_c_u = false;

		if (!u_mult_v)
		{
			textBox_multiply->Text = "0";
		}
	}
}

System::Void projconf::MyForm::button_u_plus_v_Click(System::Object^ sender, System::EventArgs^ e)
{
	Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (!btn_u_plus_v)
	{
		btn_u_plus_v = true;
		image1 = System::Drawing::Image::FromFile("image 36(2).png");
		button_u_plus_v->Image = image1;
		textBox_plus->Text = "1";
	}
	else
	{
		image1 = System::Drawing::Image::FromFile("image 36(1).png");
		button_u_plus_v->Image = image1;
		btn_u_plus_v = false;
		textBox_plus->Text = "0";
	}
}

System::Void projconf::MyForm::button_u_minus_v_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (!u_minus_v)
	{
		image1 = System::Drawing::Image::FromFile("Group 80(2).png");
		button_u_minus_v->Image = image1;
		u_minus_v = true; 
		textBox_minus->Text = "1";
	}
	else
	{
		image1 = System::Drawing::Image::FromFile("Group 80(1).png");
		button_u_minus_v->Image = image1;
		u_minus_v = false;
		textBox_minus->Text = "0";
	}
	

}

System::Void projconf::MyForm::button_u_mult_v_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;

	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (!u_mult_v && btn_c_u)
	{
		image1 = System::Drawing::Image::FromFile("image 37(2).png");
		button_u_mult_v->Image = image1;
		u_mult_v = true;
		textBox_multiply->Text = "2";
	}
	else if (!u_mult_v && !btn_c_u)
	{
		image1 = System::Drawing::Image::FromFile("image 37(2).png");
		button_u_mult_v->Image = image1;
		u_mult_v = true;
		textBox_multiply->Text = "1";
	}
	else if (btn_c_u && u_mult_v)
	{
		image1 = System::Drawing::Image::FromFile("image 37(1).png");
		button_u_mult_v->Image = image1;
		u_mult_v = false;
		textBox_multiply->Text = "1";
	}
	else
	{
		image1 = System::Drawing::Image::FromFile("image 37(1).png");
		button_u_mult_v->Image = image1;
		u_mult_v = false;
		if (!btn_c_u)
		{
			textBox_multiply->Text = "0";
		}
	}
	
}

System::Void projconf::MyForm::button_u_div_v_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (!u_div_a)
	{
		image1 = System::Drawing::Image::FromFile("image 38(2).png");
		button_u_div_v->Image = image1;
		u_div_a = true;
		textBox_divide->Text = "1";
	}
	else
	{
		image1 = System::Drawing::Image::FromFile("image 38(1).png");
		button_u_div_v->Image = image1;
		u_div_a = false;
		textBox_divide->Text = "0";
	}
	
}

System::Void projconf::MyForm::button21_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		StreamReader^ sr = gcnew StreamReader("answer.txt");
		String^ s = sr->ReadToEnd();
		sr->Close();
		Clipboard::SetText(s);
		MessageBox::Show("Копирование успешно");
	}
	catch (const std::exception&)
	{

	}
	
}

System::Void projconf::MyForm::button_1_div_u_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Drawing::Image^ image1;
	if (!is)
	{
		is = true;
		StreamReader^ reader = gcnew StreamReader(fileName);
		String^ line;
		while ((line = reader->ReadLine()) != nullptr)
		{
			bufferr += line + "\n";
		}
		reader->Close();

		File::WriteAllText(fileName, bufferr);
	}
	if (!btn_one_div_u)
	{
		image1 = System::Drawing::Image::FromFile("Frame 99 1 (1).jpg");
		button_1_div_u->Image = image1;

		btn_one_div_u = true;		
		return;
	}
	image1 = System::Drawing::Image::FromFile("Frame 99 1.png");
	button_1_div_u->Image = image1;
	btn_one_div_u = false;


}








