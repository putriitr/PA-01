/*
    Nama    : Putri Tamara Gultom
    NIM     : 11322007
    Prodi   : D3 Teknologi Informasi
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct _point{
    float X; /* absis   */
    float Y; /* ordinat */
};

// Fungsi Untuk Set Nilai X dan Nilai Y ke dalam struct _point
struct _point MakePOINT (float X, float Y){
    struct _point P;
    P.X=X;
    P.Y=Y;
    return P;
}

//Fungsi Untuk Meminta Inputan Nilai X dan Y dari user 
void BacaPOINT (struct _point *P){
    float X,Y;
    scanf("%f %f", &X, &Y);
    *P = MakePOINT(X,Y);
}

//Fungsi Untuk Menuliskan Nilai X dan Nilai Y dari struct _point
void TulisPOINT (struct _point P){
    printf("(%.2f,%.2f)", P.X, P.Y);
}

int main(){
    int N;
    float x, y, sudut;
    struct _point P;

    BacaPOINT (&P);
    printf("POINT berada pada Titik: ");
    TulisPOINT (P);
    printf("\n");

    return 0;
}