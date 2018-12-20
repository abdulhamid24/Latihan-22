    #include<stdio.h>
    #include<conio.h>

    int penjumlahan (int a, int b);
    int pengurangan (int a, int b);
    int pembagian (int a, int b);
    int perkalian (int a, int b);

    int main (void)
    {
                     int a, b, c, op;
    printf("Masukan Bilangan Pertama : ");
    scanf("%d",&a);
    printf("Masukan Bilangan Kedua   : ");
    scanf("%d",&b);
    printf("\n-----Pilih Operasi-----\n(1)Penjumlahan\n(2)Pengurangan\n(3)Pembagian\n(4)Perkalian\nOperasi Terpilih : ");
    scanf("%d",&op);
    switch (op)
    {
                    case 1:
                    c=penjumlahan (a,b);
                    printf("\n%d+%d=%d",a,b,c); break;
                    case 2:
                    c=pengurangan (a,b);
                    printf("\n%d-%d=%d",a,b,c); break;
                    case 3:
                    c=pembagian (a,b);
                    printf("\n%d/%d=%d",a,b,c); break;
                    case 4:
                    c=perkalian (a,b);
                    printf("\n%d*%d=%d",a,b,c); break;
                    default :
                    printf("\nOperasi Tidak Ditemukan"); break;
    }
    getch ();
    }

    int penjumlahan (int a, int b)
    {
                    int c;
                    c=a+b;
                    return (c);
    }

    int pengurangan (int a, int b)
    {
                    int c;
                    c=a-b;
                    return (c);
    }

    int pembagian (int a, int b)
    {
                    int c;
                    c=a/b;
                    return (c);
    }

    int perkalian (int a, int b)
    {
                    int c;
                    c=a*b;
                    return (c);
    }
