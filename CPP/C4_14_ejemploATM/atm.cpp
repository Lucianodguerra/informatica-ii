#include "atm.h"
#include "bankaccount.h"
#include <iostream>

void ATM::retirarDinero(BankAccount& cuenta, double monto)
{
    std::cout << "Intentando retirar $" << monto << " de la cuenta...\n";
    if (cuenta.deducirSaldo(monto))
    {  // Llamada al método privado
        std::cout << "Retiro exitoso. Nuevo saldo: $" << cuenta.m_saldo << "\n";
    }
    else
    {
        std::cout << "No se pudo realizar el retiro.\n";
    }
}
