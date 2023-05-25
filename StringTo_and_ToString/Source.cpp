#include <iostream>
#include <sstream>
#include <conio.h>

using namespace std;

template<class T, size_t N> size_t GetSizeArray(T(&arr)[N])
{
	return N;
}

template<class T> T StringTo(const string& str)
{
	istringstream stream(str);
	T value{};
	stream >> value;
	return value;
}

template<class T> string ToString(const T& value)
{
	ostringstream stream;
	stream << value;
	return stream.str();
}


int main()
{
	float value = 12.5;
	string str = ToString(value);
	cout << str << endl;

	float valueNew = StringTo<float>(str);
	cout << valueNew << endl;

	int arr[25];
	cout << GetSizeArray(arr) << endl;

	(void)_getch();
}