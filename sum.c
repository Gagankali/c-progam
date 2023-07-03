binary sirch

#include<stdio.h>

void main()

{

int SR[50], low, high, mid, found, n, Record, i;

printf("Enter total number of Sales Records\n");

scanf("%d",&n);

printf("Enter the sales records\n");

for(i=0;i<=n-1;i++)

{

scanf("%d",&SR[i]);

}

printf("Enter the record to be searched");

scanf("%d",&Record);

found=0;

low=0;

high=n-1;

while(low<=high)

{

mid=(low+high)/2;

if(Record==SR[mid])

{

found=1;

break;

}

if(Record<SR[mid])

{

high=mid-1;

}

if(Record>SR[mid])

{

low=mid+1;

}

}

if (found==1)

{

printf("Sales Record %d is found at position %d", Record,mid+1);

}

else

{

printf("Record Not Found\n");
  }
}