#include <iostream>
#include <cstdlib>
using namespace std;

//DESARROLLO DEL EJERCICIO HW10


//Calcula el producto de las matrices A por B y genera una nueva matriz C
 
double matrix_product(double matA, double matB, int filaA, int colA, int filaB, int colB){

if(colA=filaB){

int i=0;
int j=0;

for(i;i<filaA,i++){
	for(j;j<colB;j++){
		matC[0][j]=(matA[i][j]*matB[j][0])

}

}

//En este metodo se hace lo siguiente: pido al usuario que ingrese un dato para los que voy a recorrer de una matriz MxN (a la cual digo las dimensiones que se piden), luego solicita los numeros a añadir para cada una de las posiciones de la matriz y al final confirma el dato que agrega y lo agrega


double get_Matrix(int M, int N){

double variable;
std::cout<<"La dimension de la matriz es "<< M <<"x"<< N << std::endl;

for(i;i<filaA;i++){
	for(j;j<colB;j++){
		std::cout<<"Ingrese el dato "<< i <<","<< j << "Para la matriz"<< std::endl;
		std::cin>>variable;
//Aca va el valor de cada uno de los elementos dados por el usuario al ingresar el numero para la matriz	
		std::cout<<"Se ingresara el dato "<< variable << "Para la posicion establecida"<< std::endl;
		matriz[i][j]=variable; 
	}
	std::cout<<matriz[i][j]<<" "<<std::endl;
}



//Metodo main del programa

int main(){

//Pido las dimensiones que quiero para cada matriz y las asigno a varialbes para cada correspondencia

int filaA;
int colA;
int filaB;
int colB;

std::cout<<"Numero de columnas para A "<< i <<","<< j << "Para la matriz A"<< std::endl;
std::cin>>colA;
std::cout<<"Numero de filas para A "<< i <<","<< j << "Para la matriz A"<< std::endl;
std::cin>>filaA;
std::cout<<"Numero de columnas para B "<< i <<","<< j << "Para la matriz A"<< std::endl;
std::cin>>colB;
std::cout<<"Numero de filas para B "<< i <<","<< j << "Para la matriz A"<< std::endl;
std::cin>>filaB;


//Declaro las matrices, donde multiplico AxB y C es la nueva matriz

double *matA= new double*[filaA][colA];
double *matB= new double*[filaB][colB];
double *matC= new double*[filaC][colC];


double varA;
double varB;
int i=0;
int j=0;

//Inicializo las matrices

for(i;i<filaA;i++){
	for(j;j<colB;j++){
		std::cout<<"Ingrese el dato "<< i <<","<< j << "Para la matriz A"<< std::endl;
		std::cin>>varA;
//Aca va el valor de cada uno de los elementos dados por el usuario al ingresar el numero para A	
		matA[i][j]=varA; 
	}
	std::cout<<matA[i][j]<<" "<<std::endl;
}


for(i;i<filaA;i++){
	for(j;j<colB;j++){
		std::cout<<"Ingrese el dato "<< i <<","<< j << "Para la matriz B"<< std::endl;
		std::cin>>varB;
//Aca va el valor de cada uno de los elementos dados por el usuario al ingresar el numero para B
		matB[i][j]=varB;
		
	}
	std::cout<<matB[i][j]<<" "<<std::endl;
}


//Solucion punto cuatro

//Obtengo la matriz pedida
get_Matrix(2,4);

//Producto de las matrices
matrix_product(matA,matB,filaA,colA,filaB,colB);

//Resultado del producto
std::cout<<"El resultado del producto matricial es "<< matC<<std::endl;


return 0;

}
































/*Comentarios en clase, explicacion
//Vector de vectores con tamaño 10
double *a = new double[10];

//Matriz de 4x4
double *matriz= new double*[4];

//Inicializar la matriz

int i=0;
for(i;i<4;i++){
	mat[i]= new double[5];
}


//Inicializar la matriz con los valores asignados a cada uno
int j=0;
for(i;i<4;i++){
	for(j;j<4;j++){
		mat[i][j]=i*j; //Aca va el valor de cada uno
		std::cout<<mat[i][j]<<" ";
	}
	std::cout<<std::endl;
}

//Obtener la información en una variable

std::cout<<"Imprima un numero"<<std::endl;
double var;
std::cin >> var;

std::cout<<"El doble de su numero es: "<<2*var<<std::endl;


*/










