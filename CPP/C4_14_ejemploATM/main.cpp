#include "bankaccount.h"
#include "atm.h"



int main() {
    // Crear una cuenta bancaria con nombre y saldo inicial
    BankAccount miCuenta("Juan Perez", 100000.0);

    // Crear un objeto ATM
    ATM cajero;

    // Mostrar el saldo antes de realizar una operación
    miCuenta.mostrarSaldo();

    // Intentar retirar dinero usando el cajero automático
    cajero.retirarDinero(miCuenta, 50000.0);

    // Mostrar el saldo después del retiro
    miCuenta.mostrarSaldo();

    // Intentar retirar más dinero del disponible
    cajero.retirarDinero(miCuenta, 60000.0);

    // Mostrar el saldo final
    miCuenta.mostrarSaldo();



    return 0;
}
