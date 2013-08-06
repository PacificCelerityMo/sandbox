// HelloConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HelloString.h"

int _tmain(int argc, _TCHAR* argv[])
{
	char c;

	printf("Hello, VS2012 console!\n");
	
	HelloString* hs = new HelloString();
	hs->setMessage("This is a hello string.");
	printf("%s\n", hs->getMessage());
	
	printf("Type 'c' to exit...\n");
	scanf_s("%1c", &c, 1);
	
	while (c != 'c')
	{
		printf("The input character: [%c]\n", c);

		if(c == 'c')
			break;

		scanf_s("%1c", &c, 1);

	}
	printf("Done.\n");

	return 0;
}
