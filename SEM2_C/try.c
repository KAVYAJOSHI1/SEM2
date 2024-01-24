#include<stdio.h>

void main() {
    int n;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d", &n);
    int a[n];
    printf("ENTER THE ARRAY ELEMENTS\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int num;
    printf("ENTER THE ELEMENT TO BE SEARCHED\n");
    scanf("%d", &num);

    int temp = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("SORTED ARRAY IS \n");
    for(int i=0; i<n; i++) {
        printf("%d\n", a[i]);
    }

    int fb = 0;
    int lb = n-1;
    int mid = 0;
    int temp1 = 0;
    while(fb <= lb) {
        mid = (fb + lb) / 2;
        if(num > a[mid])
            fb = mid + 1;
        else if(num < a[mid])
            lb = mid - 1;
        else  {
            temp1 = 1;
        
            break;
        }
    }

    if(temp1 == 1) {
        printf("SUCCESSFUL\n");
    } else {
        printf("UNSUCCESSFUL\n");
    }
}
