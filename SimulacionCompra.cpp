#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

class Producto
{
private:
    string Description;
    string codeProduct;
    string NameProduct;
    double price;
    int stock;
public:
    Producto(){}
    Producto(string _nombreProducto, string _codigo,string _descripcion, double _precio, int _stock):NameProduct(_nombreProducto),
                                                                                      Description(_descripcion), codeProduct(_codigo),
                                                                                      price(_precio),stock(_stock){
        ofstream producto,_product;
        string NombreText = "/PRODUCTO/NameProduct"+".txt";
        string NombreText = "/PRODUCTO/Product"+".txt";
        producto.open(NombreText,ios::out);
        _product.open(NombreText2,ios::app);
        if(producto.fail()){cout<<"No se pudo abrir el archivo";}
        if(_product.fail()){cout<<"No se pudo abrir el archivo";}

        _product<<NameProduct<<endl;
        producto<<NameProduct<<endl;
        producto<<codeProduct<<endl;
        producto<<Description<<endl;
        producto<<price<<endl;
        producto<<stock<<endl;
        producto.close();
        _product.close();
    }
};


string MONTH[] = {"Enero", "Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Setiembre","Octubre","Noviembre","Diciembre"};


class BOLETA
{
public:
    int dia, mes, cantidad;
    long year;
    int productosCant;
    string Producto, Cliente;
    long double precioTotal;

    BOLETA() {}
    BOLETA(int _dia, int _mes, long _year, string _cliente, int productos)
            :dia(_dia),mes(_mes),year(_year),Cliente(_cliente), productosCant(productos){

    }
};


class Repository
{
    vector<Quiz> quizes;

public:
    Repository() {}

    void addRepository(Quiz qz)
    {
        quizes.push_back(qz);
    }

    void ProcesarTodos(void (*ptr_function)(Quiz))
    {
        for (int i = 0; i < quizes.size(); i++)
            ptr_function(quizes[i]);
        {
        }

    }

    int ContarSi(bool (*ptr_function)(Quiz))
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