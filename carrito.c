/*Velazquez Dominguez Ricardo
    Practica I EDA I*/

#include <stdio.h>

int main() {
    
int n1, n2, n3, n4, n5, p1 = 180, p2 = 81, p3 = 125, p4 = 214, p5 = 269, costo = 0, numero;
      
printf("**Papelería**\n");
printf("1.- Ver los productos\n");
printf("2.- Seleccionar un producto\n");
printf("3.- Retirar productos del carrito de compras\n");
printf("4.- Ver el carrito de compras\n");
printf("5.- Finalizar compra\n");
printf("6.- Salir\n");
printf("Escoja una opción: \n");
scanf("%d", &numero);
  
while (numero < 1 || numero > 6) {
    printf("Opción no válida. Escoja una opción (1-6): ");
    scanf("%d", &numero);
        
while (numero == 1) {
        printf("Productos:\n");
            printf("1 • Cuaderno 200 hojas rayado - Precio: $180 - Disponibles: 30\n");
            printf("2 • Pluma Azor Pin Point Punto Fino 0.7 Mm paquete con 12 Piezas Tinta Azul - Precio: $81 - Disponibles: 25\n");
            printf("3 • Hoja Tamaño Carta Paq 500 Scribe Impresión Color Blanco - Precio: $125 - Disponibles: 20\n");
            printf("4 • Notas Post-it Cuadradas 12 Colores, Pack 1200 Notas 7.6x7.6 cm - Precio: $214 - Disponibles: 27\n");
            printf("5 • Lápices De Colores Prismacolor Con 24 Doble Punta 48 Colores - Precio: $269 - Disponibles: 15\n");
    }   
  }
  switch (numero) {
        case 1:
            printf("Productos:\n");
            printf("1 • Cuaderno 200 hojas rayado - Precio: $180 - Disponibles: 30\n");
            printf("2 • Pluma Azor Pin Point Punto Fino 0.7 Mm paquete con 12 Piezas Tinta Azul - Precio: $81 - Disponibles: 25\n");
            printf("3 • Hoja Tamaño Carta Paq 500 Scribe Impresión Color Blanco - Precio: $125 - Disponibles: 20\n");
            printf("4 • Notas Post-it Cuadradas 12 Colores, Pack 1200 Notas 7.6x7.6 cm - Precio: $214 - Disponibles: 27\n");
            printf("5 • Lápices De Colores Prismacolor Con 24 Doble Punta 48 Colores - Precio: $269 - Disponibles: 15\n");
            
  
  }  
                
    return 0;
}    
