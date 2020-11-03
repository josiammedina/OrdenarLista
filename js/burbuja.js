// Ordenamiento de Bulbuja
let cantidadNumero, numeroOrdenar;
const numero = [];
// Llamada de la funcion
agregar();

// Funcion
function agregar() {

    // Variable que solicita la cantidad que deseas ordenar
    cantidadNumero = parseInt(prompt( "Ingrese la cantidad a ordenar" ) );

    // Recorrido de la cantidad ingresada para ordenar
    for ( let i = 0; i < cantidadNumero; i++) {

        // Variable que solicita los numeros a ordenar
        numeroOrdenar = parseInt( prompt( 'Ingrese el numero a ordenar' ) );

        // Ingresar el numero al array
        numero.push( numeroOrdenar );
    }
    console.log( numero );
    
}
// Llamada de la funcion
ordenar();

// Funcion
function ordenar() {
    // Variable temporal
    let numeroTemp

    // Recorrido del arrya
    for ( let i = 0; i < numero.length; i++ ) {

        // Comparacion del array
        for ( let j = numero.length - 1; j >= i; j-- ) {
            if ( numero[ j - 1 ]  > numero[ j ] ) {
            numeroTemp = numero [ j - 1 ];
            numero[ j - 1 ] = numero[j];
            numero[ j ] = numeroTemp;
            }
            
        }
    }
    // Recorrido del array para imprimir
    for (let i = 0; i < numero.length; i++ ) {
        console.log( numero[i] );
    }
}


