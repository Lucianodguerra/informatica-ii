#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
#include "atm.h"

class BankAccount
{
private:
    std::string m_nombre;
    double m_saldo;

    // Metodo privado que deduce dinero de la cuenta
    bool deducirSaldo(double monto);

public:
    BankAccount(std::string nombre, double saldoInicial);
    void mostrarSaldo() const;

    // Declaramos el método 'retirarDinero' del ATM como amigo
    friend void ATM::retirarDinero(BankAccount& cuenta, double monto);


};

#endif // BANKACCOUNT_H
