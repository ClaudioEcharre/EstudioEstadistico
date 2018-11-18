#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include <cassert>

using namespace std;

class ProductoTienda
{
private:
    string Description;
    string codeProduct;
    string NameProduct;
    double price;
    int stock;
public:
    ProductoTienda(){
        ofstream archivo;
        archivo.open("/PRODUCTO/Product.txt", ios::in);
        vector<string>ProductosInventario;
        string LEER;
        while(! archivo.eof()){
            getline(archivo,LEER);
            ProductosInventario.push_back(LEER);
        }


        return B;
    }
    ProductoTienda(string NombreProducto)
    {
        ofstream archivo;
        archivo.open("/PRODUCTO/Product.txt", ios::in);

        string LEER;
        while(getline(cin,LEER)){
            ProductosInventario.push_back(LEER);
        }
        for (int i = 0; i <productosCant; ++i) {
            ProductoTienda Pro1(string name);

        }

        return B;
    }
    ProductoTienda(string _nombreProducto, string _codigo,string _descripcion, double _precio, int _stock):NameProduct(_nombreProducto),
                                                                                                     Description(_descripcion), codeProduct(_codigo),
                                                                                                     price(_precio),stock(_stock){
        ofstream producto,_product;
        string direction="/PRODUCTO/";
        string Nombre = NameProduct;
        string Text = ".txt";
        string NombreText= "("+direction+","+Nombre+","+Text+")";
        string Pro="Product.txt";
        string NombreText2= "("+direction+","+Pro+")";
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

class Cliente
{
private:
    string NombreCliente;
    string Direccion;
    string codigo;
    string distrito;
    string sexo;
    int edad;
public:
    Cliente(string NameCliente)
    {
        ofstream cliente;
        string Txt=".txt";
        string NomTxt="("+NameCliente+","+Txt+")";
        cliente.open(NomTxt, ios::in);


    }
    Cliente(string _nombreCliente, string _codigoCliente,string _direccion, int _edad, string _sexo, string _distrito):NombreCliente(_nombreCliente),
                                                                                                           Direccion(_direccion), codigo(_codigoCliente),
                                                                                                           distrito(_distrito),edad(_edad){
        ofstream NewCliente,_Clientes;
        string direction="/CLIENTE/";
        string Nombre = NombreCliente;
        string Text = ".txt";
        string NombreText= "("+direction+","+Nombre+","+Text+")";
        string ClienT="NameCliente.txt";
        string NombreText2= "("+direction+","+ClienT+")";
        NewCliente.open(NombreText,ios::out);
        _Clientes.open(NombreText2,ios::app);
        if(NewCliente.fail()){cout<<"No se pudo abrir el archivo";}
        if(_Clientes.fail()){cout<<"No se pudo abrir el archivo";}

        _Clientes<<NombreCliente<<endl;
        NewCliente<<codigo<<endl;
        NewCliente<<Direccion<<endl;
        NewCliente<<sexo<<endl;
        NewCliente<<edad<<endl;
        NewCliente<<distrito<<endl;
        NewCliente.close();
        _Clientes.close();
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
    BOLETA(int _dia, int _mes, long _year, string _cliente, int NumProductos)
            :dia(_dia),mes(_mes),year(_year),Cliente(_cliente), productosCant(NumProductos){




    }
};


int main()
{

}