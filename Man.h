#pragma once

class Man
{

	

public:

	Man(void)
	{
	}

	~Man(void)
	{
	}

	wchar_t _Name;

	void ChangeName(wchar_t NewName)
	{
	_Name = NewName;
	}
 
	wchar_t GetName()
	{
	return _Name;
	}


};
