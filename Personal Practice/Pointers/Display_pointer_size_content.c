/******************************************************************************
The expression &x returns the address wherethe valueofvthevariable x isstored.
Declaration: data type of the pointer followed by a '*' followed by the pointer name.
*******************************************************************************/

// Program 2: Displaying the pointer size andcontent

#include <stdio.h>

int main()
{ 
    int x=14, *px=&x; float y=8.9, *py=&y; char z='A', *pz=&z;
    
    printf("\nAddress of integer x = %u", px);
    printf("\nAddress of float y = %u", py);
    printf("\nAddress of character z = %u", pz);
    printf("\nSize of pointer to Integer data is = %u bytes", sizeof(px));
    printf("\nSize of pointer to Float data is = %u bytes", sizeof(py));
    printf("\nSize of pointer to character data is = %u bytes", sizeof(pz));
    
    return 0;
}

/* Output:
Address of float y = 1957646796
Address of character z = 1957646791
Size of pointer to Integer data is = 8 bytes
Size of pointer to Float data is = 8 bytes
Size of pointer to character data is = 8 bytes */
