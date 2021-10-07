

#include<stdio.h>

int main(void)
{
   
    int Ancho;
    int Alto;

    int CoorspdX, CoorspiX;
    int CoorspdY, CoorspiY;

    int CoorifdX, CoorifiX;
    int CoorifdY, CoorifiY;

    float porX;
    float porY;

    float porAnch;
    float porAlto;


   
    scanf_s("%i", &Ancho);
    scanf_s("%i", &Alto);

    scanf_s("%f", &porX);
    scanf_s("%f", &porY);

    scanf_s("%f", &porAnch);
    scanf_s("%f", &porAlto);


    CoorspiX = Ancho * porX;
    CoorspdY = Alto * porY;

    CoorifiX = Ancho* porAnch + CoorspiX;
    CoorifdY = Alto * porAlto + CoorspdY;


        printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", Ancho, Alto, porX, porY, porAnch, porAlto, CoorspiX, CoorspdY, CoorifiX, CoorifdY);

    return 0;
}