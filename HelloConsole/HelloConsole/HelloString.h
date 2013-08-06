#pragma once
class HelloString
{
private:
	char* m_message;

public:
	HelloString(void);
	~HelloString(void);

	char* getMessage();

	void setMessage(const char* message);
};

