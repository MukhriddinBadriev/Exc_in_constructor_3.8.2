#pragma once
#include <string>
#include <iostream>
class Own_exception_class :
    public std::domain_error
{
public:
    Own_exception_class(std::string corner);
};
//Не забудьте при создании исключения указать причину ошибки.
// Для этого вам надо создать в вашем классе исключения конструктор,
//принимающий строку и передающий её конструктору родителя.