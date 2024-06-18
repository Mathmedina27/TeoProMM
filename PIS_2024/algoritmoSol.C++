

#include <iostream>
#include <time.h>
#include <math.h>


using namespace std;





int main(int argc, char const *argv[]){

    system("@cls||clear");

    const float PI = 3.1416;
    const int longEstandar = -75;

    struct tm FechaActual;
    
    time_t seconds;
    seconds = time(NULL);
    struct tm *now = localtime(&seconds);
    FechaActual.tm_min = now->tm_min/60;
    FechaActual.tm_hour = now->tm_hour; 
    FechaActual.tm_year= now->tm_year + 1900;
    FechaActual.tm_mon= now->tm_mon +1;
    FechaActual.tm_mday = now->tm_mday;
    FechaActual.tm_yday = now->tm_yday+1;
    
    int opcion=0;

    do
    {
        double longitud, latitud;
        double ds=0, dsr=0, 
        B=0, Br=0, 
        EoT=0, 
        TSV=0, TSVr=0 , 
        alpha=0, alphar=0, 
        H=0 , Hr=0,
        azimtu=0, azimtur=0,
        HoraLocal=0;
        
        
       // cout<< FechaActual.tm_hour<<":"<<FechaActual.tm_min<<endl<<FechaActual.tm_yday<<"-"<<FechaActual.tm_year<<"-"<<FechaActual.tm_mon<<"-"<<FechaActual.tm_mday<<endl;
        
        cout<<"Ingrese la longitud: \n"; cin>>longitud;
        fflush(stdin);
        cout<<"Ingrese la latitud: \n"; cin>>latitud;
        
        
        
        ds= -23.44* cosf(360/365 * FechaActual.tm_yday + 10) ;
        dsr = ds*PI/180;
        
        B =  0.99 * (FechaActual.tm_yday-81) ;
        Br= B*PI/180;

        EoT = 9.87 * sinf(2*Br) - 7.53 * cosf(Br) - 1.5 * sinf(Br);

        HoraLocal = FechaActual.tm_hour + FechaActual.tm_min;
        
        TSV = HoraLocal + ((4 * (longitud - longEstandar) + EoT))/60;

        H = 15 * (TSV-12);
        Hr = H*PI/180;

        
        alpha= asinf(sinf(dsr) * sinf(latitud) + cosf(dsr) * cosf(latitud) * cosf(Hr));
        
        azimtu = acosf((sinf(dsr)-sinf(alpha)*sinf(latitud)) / (cosf(alpha)*cosf(latitud)));
        
        

        cout<<endl<<"DS="<<d<<endl;
        cout<<"B= "<<B<<endl;
        cout<<"EoT= "<<EoT<<endl;
        cout<<"Hora Local= "<<HoraLocal<<endl;
        cout<<"TSV= "<<TSV<<endl;
        cout<<"H= "<<Hr<<endl;
        cout<<"Alpha= "<<alpha<<endl;
        cout<<"Azimut= "<<azimtu<<endl;

        fflush(stdin);
        cout<<endl<<"Ingrese cualquier numero para continuar la ejecucion, '0' para salir: \n";cin>>opcion;
    } while (opcion != 0);
    

    

    return 0;
}

