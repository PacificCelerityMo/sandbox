#include "stdafx.h"
#include "HelloString.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

HelloString::HelloString(void)
{
}


HelloString::~HelloString(void)
{
	if(m_message != NULL)
		free(m_message);	// HelloString should always be created via its constructors.
}

char* HelloString::getMessage()
{
	return m_message;
}

void HelloString::setMessage(const char* message)
{
	int s = 0;
	if(message != NULL && (s = strlen(message)) != 0)
	{
		m_message = (char*) malloc(s);
		for(int i = 0; i < s+1; i++)
			m_message[i] = message[i];

		// strcpy_s(m_message, s, message);
	}
	else
	{
		m_message = NULL;
	}
}
