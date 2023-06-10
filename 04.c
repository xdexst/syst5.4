#define SAZE_ARRAY 5
#include <stdio.h>
int main() {
int A[SAZE_ARRAY] ={2,3,5,7,11};
int B[SAZE_ARRAY];
int i;
int N;
{
N=4;
printf("A[1] %d:", A[i]);
while ( N>=0 )
 { B[N]=A[i];
 N=N-1;
 i=i+1;
 }
for (int i=0; i<SAZE_ARRAY; i ++ )
printf("cheslo %d:", B[i]);
	return 0;
}
}
