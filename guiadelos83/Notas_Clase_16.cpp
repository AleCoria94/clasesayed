/* Notas_clase_16*/

/*Ejercicios

Dado un archivo de alumnos.dat con los siguientes datos por registro
- legajo
- nombre y apellido(max 100 caracteres)
- codigo de la materia a la cual se anoto (max 5 caracteres)

Sabiendo que:
- hay como maximo 10000 alumnos y 200 materias diferentes
- Cada alumno de puede anotar a una sola materia

A) MOstrar a los alumnos  ordenados ASC por legajo

B) Mostrar todas las materias en las cuales se inscribierion los alumnos. Ordenadas por cod de materia ASC

C) Mostart el siguiente reporte ordenado por codigo materia Ascendente

Materias

 Cod Materia ||| Cant inscriptos
 	ALG 			25
 	FIS				10
 	...				...

D) Igual que el ejercicio C pero el reporte debe estar ordenado por cant de inscriptos DESC

E) Mostrar el siguietne reporte ordenado por cant de inscriptos DESC:

			Materias
			
		Cod Materia | | Nombre Materia 	| |  Cant de inscriptos
			ALG     ||	 	Algortimos  ||	  25
			Fis     ||		Fisica 		||	  10

Quiero que aparezcan todas las materuas existentes por mas que no tengan inscriptos.
Cuenta con un archivo Materias.dat donde cada registro tiene.dat donde cada registro contiene
-Cod Materia ( 5 caracteres)
- Nombre Materia (50 caracteres)
F) Igual que E pero teniendo en cuenta que el código de materia es un número que va desde 1001 a 1200 ( y no un codigo de chars).
El orden del listado tiene que ser por codgio de materia ASC
*/

#include <iostream>
using namespace std;




struct AlumnoIncripcion{
	int legajo;
	char nombreyapellido [100+1];
	char codMat [5+1];
};
struct Materia{
	 char codMat [5+1];
	 char nombreMat[50 + 1];
	 int cantInscripciones;
};
struct MaestroMaterias{
	char codMat [5+1];
	char nombreMat[50 + 1];
};

void inicializarVector(int& len){
	len=0;
}

void agregar (Materi arr[], int& len, Materia v){
	
}

int main() {
	FILE* archivoMaterias = fopen("materias.dat","rb+");
	
	MaestroMaterias regMateria; // para poder leer MaestroMaterias
	
	
	
	return 0;
}
