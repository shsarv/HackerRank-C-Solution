#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    int i, j;
    double p, heron, temp;
    double arr[n];
    triangle tempTri;
    for(i = 0; i < n; i++) {
        p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        heron = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
        arr[i] = heron;
        //printf("area: %lf\n", arr[i]);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                tempTri = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = tempTri;

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	/**
	* Sort an array a of the length n
	*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}