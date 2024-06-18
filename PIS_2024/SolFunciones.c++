/**
 * @file SolFunciones.c++
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-15
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
#include <math.h>
#include <ctime>
#include <stdlib.h>


using namespace std;

#define LONGEST -75
#define PI 3.1416
#define vtre -23.44
#define GpH 15

struct Coordenadas{
    double longitud, latitud;

};

struct Angulo{
    double azimuth, aOrientacion;
};


void ingresarCoordenadas(Coordenadas Coordenadas);
double Ds(tm FechaAc); 
double DeclinacionSolar(tm FechaAc);
double EcuacionDelTiempo(double B);
double HoraLocal(tm FechaAc);
double TiempoSolarVerdadero(Coordenadas coordenadas, double HoraLocal, double Eot);
double AlturaSolar(double TSV);
double OrientacionSolar(Angulo Angulo, Coordenadas Coordenadas, double ds,  double H);
double Azimuth(Angulo Angulo, Coordenadas Coordenadas, double ds);
void PresentarAngulos(Angulo Angulo);


int main(int argc, char const *argv[]){
    system("cls");
    struct Coordenadas Coordenadas;
    struct Angulo angulo;
    struct tm FechaActual;
    
    time_t seconds;
    seconds = time(NULL);
    struct tm *now = localtime(&seconds);
    FechaActual.tm_min = now->tm_min/60;
    FechaActual.tm_hour = now->tm_hour; 
    FechaActual.tm_year= now->tm_year + 1900;
    FechaActual.tm_yday = now->tm_yday+1;
    FechaActual.tm_sec = now->tm_sec/60;

    ingresarCoordenadas(Coordenadas);

    double ds = Ds(FechaActual);
    double B = DeclinacionSolar(FechaActual);
    double EoT= EcuacionDelTiempo(B);
    double horaLocal = HoraLocal(FechaActual);
    double TSV = TiempoSolarVerdadero(Coordenadas,horaLocal, EoT);
    double H = AlturaSolar(TSV); 
    angulo.aOrientacion=OrientacionSolar(angulo, Coordenadas,ds,H);
    angulo.azimuth = Azimuth(angulo, Coordenadas, ds);
    PresentarAngulos(angulo);

    return 0;
}

void ingresarCoordenadas(Coordenadas Coordenadas){
    cout<<"Ingrese la longitud: "; cin>>Coordenadas.longitud;
    cout<<"Ingrese la latitud: "; cin>>Coordenadas.latitud;
}

double Ds(tm FechaAc){
    int n= FechaAc.tm_yday+1;
    double ds= cos((360/365) * (n +10));
    ds = ds* vtre;
    return ds;
}

double DeclinacionSolar(tm FechaAc){
    int n = FechaAc.tm_yday+1;
    double B =((360/365) * (n - 81));
    return B;
}

double EcuacionDelTiempo(double B){
    double Eot = (9.87 * sinf(2*B)) - (7.53 * cosf(B)) - (1.5 * sinf(B));
    return Eot;
}

double HoraLocal(tm FechaAc){
    int hora=FechaAc.tm_hour;
    int min= FechaAc.tm_min;
    double Horalocal = hora + (min/60);
    return Horalocal;
}

double TiempoSolarVerdadero(Coordenadas coordenadas, double HoraLocal, double Eot){
    double TSV = HoraLocal + ((4*(coordenadas.longitud - LONGEST)+Eot)/60);
    return TSV;
}

double AlturaSolar(double TSV){
    double H = GpH * (TSV -12);
    return H;
}

double OrientacionSolar(Angulo Angulo, Coordenadas Coordenadas, double ds,  double H){
    Angulo.aOrientacion = asin((sin(ds) * sin(Coordenadas.latitud)) + (cos(ds) * cos(Coordenadas.latitud) * cos(H) ));
    return Angulo.aOrientacion;
}

double Azimuth(Angulo Angulo, Coordenadas Coordenadas, double ds){
    Angulo.azimuth = acos(((sin(ds) - sin(Angulo.aOrientacion))* sin(Coordenadas.latitud)) / (cos(Angulo.aOrientacion) * cos(Coordenadas.latitud)));
    return Angulo.azimuth;
}

void PresentarAngulos(Angulo Angulo){
    cout<<"El azimuth es: "<<Angulo.azimuth;
    cout<<"\nEl angulo de Oreintacion es: "<<Angulo.aOrientacion;
}
