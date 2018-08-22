#include <iostream>
#include <time.h>
 using namespace std;

class Fecha {
private:
     long double dia;
     long double mes;
     long double anio;
     char miau[1000000];
public:
    Fecha(long double = 3, long double = 4, long double = 2014);
    void inicializaFecha(long double, long double, long double);
    void muestraFecha();
    int masVieja(Fecha fecha1, Fecha fecha2);
    int masViejaV(Fecha &fecha1, Fecha &fecha2);

    long double getDia();
    long double getMes();
    long double getAnio();
 };

Fecha::Fecha(long double dd, long double mm, long double aaaa) {
    mes = mm;
    dia = dd;
    anio = aaaa;
}

void Fecha::inicializaFecha(long double dd, long double mm, long double aaaa) {
    anio = aaaa;
    mes = mm;
    dia = dd;   
    return;
}

long double Fecha::getDia(){
    return this->dia;
}


long double Fecha::getMes(){
    return this->mes;
}

long double Fecha::getAnio(){
    return this->anio;
}
 
void Fecha::muestraFecha() {
    cout << "La fecha es(dia-mes-año): " << dia << "-" << mes << "-" << anio << endl;
    return;   
}

int Fecha::masVieja(Fecha fecha1, Fecha fecha2){
    if(fecha1.getDia()==fecha2.getDia() && fecha1.getMes()==fecha2.getMes() && fecha1.getAnio()==fecha2.getAnio())
        return 0;
    else{
        //comparo por anios
        if(fecha1.getAnio()>fecha2.getAnio())
            return 1;
        else if(fecha1.getAnio()<fecha2.getAnio())
            return 2;

        //comparo por mes

        else if(fecha1.getMes()>fecha2.getMes())
            return 1;
        else if(fecha1.getMes()<fecha2.getMes())
            return 2;

        //comparo por dia

        else if(fecha1.getDia()>fecha2.getDia())
            return 1;
        else
            return 2;


    }
}

int Fecha::masViejaV(Fecha &fecha1, Fecha &fecha2){
    if(fecha1.getDia()==fecha2.getDia() && fecha1.getMes()==fecha2.getMes() && fecha1.getAnio()==fecha2.getAnio())
        return 0;
    else{
        //comparo por anios
        if(fecha1.getAnio()>fecha2.getAnio())
            return 1;
        else if(fecha1.getAnio()<fecha2.getAnio())
            return 2;

        //comparo por mes

        else if(fecha1.getMes()>fecha2.getMes())
            return 1;
        else if(fecha1.getMes()<fecha2.getMes())
            return 2;

        //comparo por dia

        else if(fecha1.getDia()>fecha2.getDia())
            return 1;
        else
            return 2;


    }
}


int main() {
    
    int n=90000;
 
    register int i;
    Fecha a, b;
    srand (time(NULL));

    float seconds;
    struct timespec tstart={0,0}, tend={0,0};
    for (i = n; i != 0; i--)
    {   
          

        //cout <<<<endl;
        a.inicializaFecha(22,12,(1600 + (rand() % (int)(2018 - 1600 + 1))));
        b.inicializaFecha(22,12,(1600 + (rand() % (int)(2018 - 1600 + 1))));
        //cout<<sizeof(a)<<endl;

        //timespec tstart={0,0}, tend={0,0};
        //clock_gettime(CLOCK_MONOTONIC, &tstart);
        if(a.masVieja(a,b)==1){
            //cout<<"La fecha mas vieja es "<<endl;
            //a.muestraFecha();
        }
        else{
            //cout<<"La fecha mas vieja es "<<endl;
            //b.muestraFecha();
        }
        
        //clock_gettime(CLOCK_MONOTONIC, &tend);
         //seconds=((float)tend.tv_sec+1.0e-9*tend.tv_nsec)-((float)tstart.tv_sec+1.0e-9*tstart.tv_nsec);
       // cout<<"Seconds to run the code without pointer: "<<seconds<<endl;

         // tstart={0,0}, tend={0,0};
        //clock_gettime(CLOCK_MONOTONIC, &tstart);

        /*if(a.masVieja(&a,&b)==1){
            cout<<"La fecha mas vieja es "<<endl;
            a.muestraFecha();
        }
        else{
            cout<<"La fecha mas vieja es "<<endl;
            b.muestraFecha();
        }*/
        
        //clock_gettime(CLOCK_MONOTONIC, &tend);
        //seconds=((float)tend.tv_sec+1.0e-9*tend.tv_nsec)-((float)tstart.tv_sec+1.0e-9*tstart.tv_nsec);
        //cout<<"Seconds to run the code with pointer: "<<seconds<<endl;
    }
    
}
