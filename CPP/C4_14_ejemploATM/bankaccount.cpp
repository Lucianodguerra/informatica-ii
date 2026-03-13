#include "bankaccount.h"
#include <iostream>


BankAccount::BankAccount(std::string nombre, double saldoInicial)
    : m_nombre{ nombre }, m_saldo{ saldoInicial }
{
}


bool BankAccount::deducirSaldo(double monto) {
    if (monto > m_saldo) {
        std::cout << "Saldo insuficiente.\n";
        return false;
    }
    m_saldo -= monto;
    return true;
}

void BankAccount::mostrarSaldo() const {
    std::cout << m_nombre << ", tu saldo actual es: $" << m_saldo << std::endl;
}
