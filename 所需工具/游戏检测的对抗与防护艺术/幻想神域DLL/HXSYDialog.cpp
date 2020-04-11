// HXSYDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "幻想神域DLL.h"
#include "HXSYDialog.h"
#include "afxdialogex.h"
#include <windows.h>


// HXSYDialog 对话框

IMPLEMENT_DYNAMIC(HXSYDialog, CDialogEx)

HXSYDialog::HXSYDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(HXSYDialog::IDD, pParent)
{

}

HXSYDialog::~HXSYDialog()
{
}

void HXSYDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(HXSYDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &HXSYDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &HXSYDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &HXSYDialog::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &HXSYDialog::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &HXSYDialog::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &HXSYDialog::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &HXSYDialog::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &HXSYDialog::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &HXSYDialog::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &HXSYDialog::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &HXSYDialog::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &HXSYDialog::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &HXSYDialog::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &HXSYDialog::OnBnClickedButton14)
END_MESSAGE_MAP()


// HXSYDialog 消息处理程序


void HXSYDialog::OnBnClickedButton1()
{
	DWORD B = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	DWORD a = *(DWORD*)(B + 0x00911A6C);// [00D11A6C]     0xD11A6C =  0x00400000 +00911A6C =    ELEMENTCLIENT.EXE +00911A6C
	a = *(DWORD*)(a + 0x28);// [[00D11A6C]+28]
    a = *(DWORD*)(a + 0x288);//[[[00D11A6C]+28]+288]

	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton2()
{
	DWORD a = *(DWORD*)0xD11A6C;// [00D11A6C]
	a = *(DWORD*)(a + 0x28);// [[00D11A6C]+28]
    *(DWORD*)(a + 0x288) = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton3()
{
	__asm{

		    mov edx,edx
		    mov edx,edx
			mov edx,edx

			push   1
            mov eax,0x00D0DF1C
			mov eax,[eax]
            mov ecx,[eax+0x1c]
            mov ecx,[ecx+0x28]
			mov eax,0x0047E7E0
            call eax 
	
	}


	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton4()
{

	__asm
	{	
		push 0
        push 0
		mov eax,0x004FACD0
        call eax
        mov ecx,eax
		mov eax,0x00491C50
        call eax

	}

	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton5()
{
	
	
	DWORD a = (DWORD)malloc(10);
	*(DWORD*)a = 0x02010011;

	__asm
	{

			mov edx,0x00D0DF1C
			mov edx,[edx]
            push 4
            push a
            mov ecx,[edx+0x20]
			mov eax,0x0067D4E0
            call eax
	}

	free((DWORD*)a);

	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton6()
{

	__asm
	{
		push 0x1E0001
        push 0x41
        push 0x100
        mov ecx,0x2CB91190
		mov eax,0x006296f0
        call eax
	}

	Sleep(1000);

		__asm
	{
		push 0x1E0001
        push 0x61
        push 0x102
        mov ecx,0x2CB91190
		mov eax,0x006296f0
        call eax
	}
	// TODO: 在此添加控件通知处理程序代码
}



int g_chiyao;

void chiyao()
{
	while(g_chiyao == 1)
	{
		DWORD a = *(DWORD*)0x00D0DF1C;
		a = *(DWORD*)(a + 0x1C);
	    a = *(DWORD*)(a + 0x28);
        a = *(DWORD*)(a + 0x288);
		if(a <= 950)
		{

	     __asm
	    {	
		push 0
        push 0
		mov eax,0x004FACD0
        call eax
        mov ecx,eax
		mov eax,0x00491C50
        call eax
	    }
		
		Sleep(3000);

		}


       Sleep(50);

	}

}



void HXSYDialog::OnBnClickedButton7()
{

	g_chiyao = 1;
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)chiyao,0,0,0);
	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton8()
{
	g_chiyao = 0;
	// TODO: 在此添加控件通知处理程序代码
}






int g_检测变量;

__declspec(naked) void 外层检测call()
{

	__asm
	{
		pushad
	}
	g_检测变量 = 1;
	__asm
	{
		popad
		mov edi,[esp+ 0x14]
		cmp edi,0x19
		retn
	}
}

__declspec(naked) void 内层检测call()
{

	__asm
	{
		pushad
	}
	g_检测变量 = g_检测变量 - 1;
	if(g_检测变量!= 0)
	{
		MessageBoxA(0,"检测到外挂",0,0);
	}
	__asm
	{
		popad
		mov eax,[esp+0x20]
		mov ecx,ebx
		retn
	}
}





void HXSYDialog::OnBnClickedButton9()
{

	DWORD Hook地址 = 0x00566580;
	DWORD Hook子程序指针 = (DWORD)外层检测call;
	DWORD 跳转值=Hook子程序指针-Hook地址-5;


	DWORD old=0;//存放原来的属性
	VirtualProtect((PVOID)0x00566580,114,PAGE_EXECUTE_READWRITE,&old);
	//修改内存
	*(BYTE*)0x00566580 = 0xE8;
	*(DWORD*)(0x00566580 + 1) = 跳转值;
	*(BYTE*)(0x00566580 + 5) = 0x90;
	*(BYTE*)(0x00566580 + 6) = 0x90;

	VirtualProtect((PVOID)0x00566580,114,old,&old);//恢复页面属性



	Hook地址 = 0x00491C68;
	Hook子程序指针 = (DWORD)内层检测call;
	跳转值=Hook子程序指针-Hook地址-5;


	old=0;//存放原来的属性
	VirtualProtect((PVOID)0x00491C68,114,PAGE_EXECUTE_READWRITE,&old);
	//修改内存
	*(BYTE*)0x00491C68 = 0xE8;
	*(DWORD*)(0x00491C68 + 1) = 跳转值;
	*(BYTE*)(0x00491C68 + 5)= 0x90;

	VirtualProtect((PVOID)0x00491C68,114,old,&old);//恢复页面属性
	// TODO: 在此添加控件通知处理程序代码
}


int g_堆栈检测变量;

__declspec(naked) void 堆栈检测call()
{

	__asm
	{
		pushad
        mov eax,[esp+0x4C]//  28+ 4（call ）+20(pushad) 
		mov g_堆栈检测变量,eax
	}
	if(g_堆栈检测变量!= 0x566737)
	{
		MessageBoxA(0,"堆栈检测到外挂",0,0);
	}
	__asm
	{
		popad
		add ecx,0x0E0
		retn
	}
}


void HXSYDialog::OnBnClickedButton10()
{


	DWORD Hook地址 = 0x00491FFA;
	DWORD Hook子程序指针 = (DWORD)堆栈检测call;
	DWORD 跳转值=Hook子程序指针-Hook地址-5;


	DWORD old=0;//存放原来的属性
	VirtualProtect((PVOID)0x00491FFA,114,PAGE_EXECUTE_READWRITE,&old);
	//修改内存
	*(BYTE*)0x00491FFA = 0xE8;
	*(DWORD*)(0x00491FFA + 1) = 跳转值;
	*(BYTE*)(0x00491FFA + 5)= 0x90;

	VirtualProtect((PVOID)0x00491FFA,114,old,&old);//恢复页面属性

	// TODO: 在此添加控件通知处理程序代码
}


int g_返回地址;
int g_gg = 0x00492115;
__declspec(naked) void 改堆栈call()
{

	__asm
	{
		pushad
		mov eax,[esp+0x3c]
		mov g_返回地址,eax
        mov dword ptr[esp+0x3c],0x00566737
	}

	__asm
	{
		popad
		je 0x00492115
		retn
	}
}


__declspec(naked) void 改回堆栈call()
{

	__asm
	{
		pushad
		mov eax,g_返回地址
        mov [esp+0x2C],eax
	}

	__asm
	{
		popad
		mov al,1
		pop ebx
		add esp,8
		mov edx,0x0049200E
		jmp  edx
	}
}


void HXSYDialog::OnBnClickedButton11()
{

	DWORD Hook地址 = 0x00491C62;
	DWORD Hook子程序指针 = (DWORD)改堆栈call;
	DWORD 跳转值=Hook子程序指针-Hook地址-5;


	DWORD old=0;//存放原来的属性
	VirtualProtect((PVOID)0x00491C62,114,PAGE_EXECUTE_READWRITE,&old);
	//修改内存
	*(BYTE*)0x00491C62 = 0xE8;
	*(DWORD*)(0x00491C62 + 1) = 跳转值;
	*(BYTE*)(0x00491C62 + 5)= 0x90;

	VirtualProtect((PVOID)0x00491C62,114,old,&old);//恢复页面属性




	Hook地址 = 0x00492008;
	Hook子程序指针 = (DWORD)改回堆栈call;
	跳转值=Hook子程序指针-Hook地址-5;


	old=0;//存放原来的属性
	VirtualProtect((PVOID)0x00492008,114,PAGE_EXECUTE_READWRITE,&old);
	//修改内存
	*(BYTE*)0x00492008 = 0xE9;
	*(DWORD*)(0x00492008 + 1) = 跳转值;
	*(BYTE*)(0x00492008 + 5)= 0x90;

	VirtualProtect((PVOID)0x00492008,114,old,&old);//恢复页面属性




	//	__asm
	//{	
	//	push 5
 //       push 0
	//	mov eax,0x004FACD0
 //       call eax
 //       mov ecx,eax
	//	mov eax,0x00491C50
 //       call eax

	//}

	// TODO: 在此添加控件通知处理程序代码
}


void HXSYDialog::OnBnClickedButton12()
{
			__asm
	{	

		sub esp,0x28
        mov dword ptr[esp+0x28],0x008E1B8E


		push 5
        push 0
		mov eax,0x004FACD0
        call eax
        mov ecx,eax
		mov eax,0x00491C50
        call eax


		add  esp,0x28

	}
	// TODO: 在此添加控件通知处理程序代码
}




int xiaoyan(int a,int b)
{
	int n = 0;
	for(int i =0;i < b - a + 1;i++)
	{
		n = n + *(BYTE*)(a + i);

	}
	if(n == 0x25977CC9)
	{
	return 0;
	}

	return 1;
}



int g_CRC = 0;

void CRC()
{
	while(g_CRC == 1)
	{
		int a = 0x00401000;
		int b = 0x00A00000;
		int c = xiaoyan(a,b);
		if(c == 1)
		{
			MessageBoxA(0,"网络连接中断",0,0);
		}

		Sleep(10000);

	}

}



void HXSYDialog::OnBnClickedButton13()
{

	g_CRC = 1;
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)CRC,0,0,0);
	// TODO: 在此添加控件通知处理程序代码
}




int g_数据检测控制变量;
int g_数据检测变量;
int g_最大血量原始值;



void CJJC()
{

	g_数据检测变量 = g_最大血量原始值;

	while( g_数据检测控制变量==1)
	{
		if(g_数据检测变量!=g_最大血量原始值)// 检测变量里的值是否有改变
		{
			MessageBoxA(0,"数据异常",0,0);
		}


		Sleep(10000);
	}
}




void AAAA()// 看检测变量和 数据的访问是否被切断     这个函数需要隐藏好  可以访问的很慢甚至10分钟
{
	Sleep(120000);

	while(g_数据检测控制变量==1)
	{

		DWORD a = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	    a = *(DWORD*)(a + 0x00911A6C);
	    a = *(DWORD*)(a + 0x28);
        a = *(DWORD*)(a + 0x2DC);
		if(g_数据检测变量!=a)
		{
			MessageBoxA(0,"数据异常",0,0);
		}

		Sleep(120000);
	}
}




void JJJC()//更新最大血量到g_数据检测变量
{
	Sleep(1000);

	DWORD a = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	a = *(DWORD*)(a + 0x00911A6C);
	DWORD Temp;

	while(g_数据检测控制变量==1)
	{


	Temp = *(DWORD*)(a + 0x28);
    Temp = *(DWORD*)(Temp + 0x2DC);
	g_数据检测变量 = Temp;


	Sleep(1000);
	}
}





void HXSYDialog::OnBnClickedButton14()
{

	DWORD a = (DWORD)GetModuleHandleA("ELEMENTCLIENT.EXE");
	a = *(DWORD*)(a + 0x00911A6C);
	a = *(DWORD*)(a + 0x28);
    a = *(DWORD*)(a + 0x2DC);
	g_最大血量原始值 = a;


	g_数据检测控制变量 = 1;
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)JJJC,0,0,0);
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)CJJC,0,0,0);
	CreateThread(0,0,(LPTHREAD_START_ROUTINE)AAAA,0,0,0);
	// TODO: 在此添加控件通知处理程序代码
}
