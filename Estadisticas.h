#ifndef PROYECTOFINAL_ESTADISTICAS_H
#define PROYECTOFINAL_ESTADISTICAS_H

#include <iostream>
#include <math.h>
#include <ctime>
#include <random>
#include <numeric>
#include <stdlib.h>
#include <vector>

using namespace std;

template <class TIPOD>

class Stadistic
{
public:
    Stadistic()
    {
        cout<<"Media: obj.Media()\n";
        cout<<"Mediana: obj.Mediana(vector)";
    }

    double Media(TIPOD Array[],int tamano)
    {
        TIPOD SUMA= accumulate(Array,Array+tamano,0);

        return SUMA /(TIPOD)tamano;
    }
    double Mediana(TIPOD Array[])
    {
        TIPOD *Arreglo;
        double mediana;
        Arreglo=new TIPOD[tamano];
        for(int i=0; i< tamano;i++)
        {
            Arreglo[i]=Array[i];
        }
        for(int i=0; i<tamano ;i++)
        {
            int j=i+1;
            int k=i;
            while(Arreglo[k]>Arreglo[j])
            {
                if(k<0|j>=tamano){ break;}
                else
                {
                    int aux = Arreglo[k];
                    Arreglo[k] = Arreglo[j];
                    Arreglo[j] = aux;
                    k--;
                    j--;
                }
            }
        }
        if(tamano%2==1)
        {
            TIPOD y=tamano/2;
            mediana=Arreglo[(int)y];
        }
        else
        {
            TIPOD y=tamano/2;
            mediana=(float)(Arreglo[(int)y-1]+ Arreglo[(int)y])/2;
        }
        delete Arreglo;
        return mediana;
    }
    double DesviacionEstandar(TIPOD Array[], int L)
    {
        return sqrt(Varianza(Array,L));
    }
    double Varianza(TIPOD Array[], int L)
    {
        double media = Media(Array, L);
        long double* ListaVarianza;
        ListaVarianza=new long double[L];
        for (int i = 0; i <L; i++) {
            ListaVarianza[i]=pow((Array[i]-media),2.0);
        }
        double cont;
        for (int i = 0; i <L; i++) {
            cont+=ListaVarianza[i];
        }
        double result=cont/(L-1);
        delete(ListaVarianza);
        return result;
    }
    double CoeficienteVariancion(TIPOD Array[], int L)
    {
        double cv= (DesviacionEstandar(Array,L)/Media(Array,L))*100;
        switch (cv){
            case (cv<5): cout<<"Distribucion muy homogenea"; break;
            case (cv<10&&cv>=5): cout<<"Distribucion homogenea";break;
            case (cv<15&&cv>=10): cout<<"Distribucion regularmente homogeneos";break;
            case (cv<20&&cv>=15): cout<<"Distribucion regularmente heterogenea";break;
            case (cv>=20&&cv<25): cout<<"Distribucion heterogenea";break;
            case (cv>25): cout<<"Distribucion muy heterogenea";break;
        }
        return cv;
    }
    double DBinomial(int n_pruebas, float exito);
    double DBinomialNeg(int n_pruebas, float exito);
    double DGeometrica(int n_pruebas, float exito);
    double T_test(TIPOD Array[], int L, double mu, float conf_level);
    double lm(TIPOD Array[]),;


    int Condicional(bool (*ptr_function)(BOLETA))
        {

        int temp = 0;

        for (int i = 0; i<quizes.size(); i++)
        {
            if (ptr_function(quizes[i]))
            {
                temp++;
            }
        }

        return temp;
    }

};



#endif //PROYECTOFINAL_ESTADISTICAS_H
