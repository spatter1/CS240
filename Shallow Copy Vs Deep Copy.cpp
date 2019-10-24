#include <iostream>
using namespace std;

int main(void)
{
	int a[] = {2, 4, 6, 8},
		* b,
		c[4],
		i = 0;

	cout << "Shallow copy: makes a copy by using a variable.  A pointer to a pointer. \n\nExample:" << endl;

	b = a;

	cout << "The original array is: " << endl;
	for(i=0; i<4; i++)
    {
        cout << "a" << i << " is " << a[i] << " and is located at " << &a[i] << " | " << "b" << i << " is " << b[i] << " and is located at " << &b[i] << endl;
    }


    	cout << "\nDeep copy: makes a copy of the value stored in memory at a different memory location.\n\nExample:" << endl;
    for(i=0; i<4; i++)
    {
        c[i] = a[i];
        cout << "a" << i << " is " << a[i] << " and is located at " << &a[i] << " | " << "c" << i << " is " << c[i] << " and is located at " << &c[i] << endl;

    }

    cout << "\nChanging original values, multiplying b * 2, a will also change:" << endl;
    for (i=0; i<4; i++)
    {
        b[i] = b[i]*2;
        cout << "a" << i << " is " << a[i] << " and is located at " << &a[i] << " | " << "b" << i << " is " << b[i] << " and is located at " << &b[i] << endl;
    }
	return 0;
}

