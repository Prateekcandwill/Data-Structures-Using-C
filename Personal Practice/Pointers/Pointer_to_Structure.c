/******************************************************************************
Array Operator: Variable_name.member is same as Pointer->Member
*******************************************************************************/

// Program-11: Use of pointer to a structure

#include <stdio.h>

struct point
    {int x, y;};
void main()
    { struct point fpoint, spoint, mpoint, *pf, *ps, *pm;
      pf = &fpoint; ps = &spoint; pm = &mpoint;
      printf("\nEnter x coordinate of first point:");
      scanf("%d", &pf->x);
      printf("\nEnter y coordinate of first point:");
      scanf("%d", &pf->y);
      printf("\nEnter x coordinate of second point:");
      scanf("%d", &ps->x);
      printf("\nEnter y coordinate of second point:");
      scanf("%d", &ps->y);
      pm->x = (pf->x + ps->x)/2;
      pm->y = (pf->y + ps->y)/2;
      printf("\nMiddle Point x=%d, y=%d", pm->x, pm->y);
    }

/* Output:
Enter x coordinate of first point:6
Enter y coordinate of first point:8
Enter x coordinate of second point:4
Enter y coordinate of second point:2
Middle Point x=5, y=5
*/
