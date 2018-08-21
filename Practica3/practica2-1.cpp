#include <iostream>
#include <time.h>
 using namespace std;

class Fecha {
private:
     int dia;
     int mes;
     int anio;
public:
    Fecha(int = 3, int = 4, int = 2014);
    void inicializaFecha(int, int, int);
    void muestraFecha();
    int masVieja(Fecha fecha1, Fecha fecha2);
    int masVieja(Fecha* fecha1, Fecha* fecha2);
    int getDia();
    int getMes();
    int getAnio();
 };

Fecha::Fecha(int dd, int mm, int aaaa) {
    mes = mm;
    dia = dd;
    anio = aaaa;
}

void Fecha::inicializaFecha(int dd, int mm, int aaaa) {
    anio = aaaa;
    mes = mm;
    dia = dd;   
    return;
}

int Fecha::getDia(){
    return this->dia;
}


int Fecha::getMes(){
    return this->mes;
}

int Fecha::getAnio(){
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

int Fecha::masVieja(Fecha* fecha1, Fecha* fecha2){
    if(fecha1->getDia()==fecha2->getDia() && fecha1->getMes()==fecha2->getMes() && fecha1->getAnio()==fecha2->getAnio())
        return 0;
    else{
        //comparo por anios
        if(fecha1->getAnio()>fecha2->getAnio())
            return 1;
        else if(fecha1->getAnio()<fecha2->getAnio())
            return 2;

        //comparo por mes

        else if(fecha1->getMes()>fecha2->getMes())
            return 1;
        else if(fecha1->getMes()<fecha2->getMes())
            return 2;

        //comparo por dia

        else if(fecha1->getDia()>fecha2->getDia())
            return 1;
        else
            return 2;


    }
}


int main() {
    
    cout<<"Ingrese el numero de veces a mandar a llamar a la funcion"<<endl;
    int n;
    cin>>n;
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

        timespec tstart={0,0}, tend={0,0};
        clock_gettime(CLOCK_MONOTONIC, &tstart);

        cout<<"La fecha: "<<a.masVieja(a,b)<<endl;
        
        clock_gettime(CLOCK_MONOTONIC, &tend);
         seconds=((float)tend.tv_sec+1.0e-9*tend.tv_nsec)-((float)tstart.tv_sec+1.0e-9*tstart.tv_nsec);
        cout<<"Seconds to run the code without pointer: "<<seconds<<endl;

          tstart={0,0}, tend={0,0};
        clock_gettime(CLOCK_MONOTONIC, &tstart);

        a.masVieja(&a,&b);
        
        clock_gettime(CLOCK_MONOTONIC, &tend);
        seconds=((float)tend.tv_sec+1.0e-9*tend.tv_nsec)-((float)tstart.tv_sec+1.0e-9*tstart.tv_nsec);
        cout<<"Seconds to run the code with pointer: "<<seconds<<endl;
    }
    
    
   /*
    b.inicializaFecha(22, 9 , 1973);
    a.muestraFecha();
    b.muestraFecha();
    //c.muestraFecha();



    struct timespec tstart={0,0}, tend={0,0};
    clock_gettime(CLOCK_MONOTONIC, &tstart);

    cout<<"La fecha: "<<a.masVieja(c,b)<<endl;
    
    clock_gettime(CLOCK_MONOTONIC, &tend);
    float seconds=((float)tend.tv_sec+1.0e-9*tend.tv_nsec)-((float)tstart.tv_sec+1.0e-9*tstart.tv_nsec);
    cout<<"Seconds to run the code without pointer: "<<seconds<<endl;

     tstart={0,0}, tend={0,0};
    clock_gettime(CLOCK_MONOTONIC, &tstart);

    cout<<"La fecha: "<<a.masVieja(&c,&b)<<endl;
    
    clock_gettime(CLOCK_MONOTONIC, &tend);
    seconds=((float)tend.tv_sec+1.0e-9*tend.tv_nsec)-((float)tstart.tv_sec+1.0e-9*tstart.tv_nsec);
    cout<<"Seconds to run the code with pointer: "<<seconds<<endl;
    */
}
