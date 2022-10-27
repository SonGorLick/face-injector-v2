#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// driver init
	start_driver();
	cout << endl;

	// common window class names:
	// valorant - UnrealWindow
	// apex - Respawn001
	// unity - UnityWndClass
	face_injecor_v2(xor_a("UnityWndClass"), xor_w(L"test.dll"));

	cout << endl;
	system("pause");
}
