#include <stdio.h>

struct car{
    char Name;
    char Manufacturer;
    char Type;
    int Year;
    int Data_reg;
};

typedef struct car Car;

void main() {
    Car BMW,Mercedes,Audi;
    
    BMW = (Car) {'B', 'G', 'h', 2004, 21};
    Mercedes = (Car) {'M', 'G', 'h', 2008, 22};
    Audi = (Car) {'A', 'G', 'h', 2007, 7};
    
    Car c[3];
    c[0]=BMW;
    c[1]=Mercedes;
    c[2]=Audi;
    
    for (int i = 0; i<3;i++){
        if (c[i].Year < 2005 || c[i].Data_reg==22){
            printf("%c\n",c[i]);
        }
    }
    
}
