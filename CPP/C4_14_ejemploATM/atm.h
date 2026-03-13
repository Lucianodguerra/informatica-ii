#ifndef ATM_H
#define ATM_H

class BankAccount;

class ATM
{
public:
    void retirarDinero(BankAccount& cuenta, double monto);
};

#endif // ATM_H
