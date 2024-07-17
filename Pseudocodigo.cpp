/* 
1- Dado un rango de valores:Muestre los productos cuyo importe($) vendido mensual esté contenido en ese rango;
indicando el año y mes en qué ocurrió.

PROCEDIMIENTO busquedaPorRango( ventas[100,12,3]:ENTERO, cantProd:ENTERO, precios[100]: REAL )

VAR inicioRango, finRango, i,j,k : ENTERO
VAR importe : REAL

//ingreso del rango de valores y validaci[on]
    REPETIR
        ESCRIBIR(“Ingrese el inicio del Rango de importe de ventas”)
        LEER(inicioRango)
        ESCRIBIR(“Ingrese el fin del intervalo de importe de ventas”)
        LEER(finRango)
    HASTA ( inicioRango >=0 [Y] finRango >=0 [Y] inicioRango < finRango )
    
    VARIAR i DESDE 1 hasta cantProd // producto
        VARIAR j DESDE 1 hasta 12 // meses
            VARIAR k DESDE 1 hasta 3 // anios
                importe = precio[i] * ventas[i,j,k]
                SI importe >= inicioRango [Y] importe <= finRango ENTONCES
                    ESCRIBIR(“Producto ”, i,, “ Mes ”, j, “ Anio ”,k)
                FINSI
            FINVARIAR
        FINVARIAR
    FINVARIAR
FINPROCEDIMIENTO









*/