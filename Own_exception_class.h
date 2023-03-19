#pragma once
#include <string>
#include <iostream>
class Own_exception_class :
    public std::domain_error
{
public:
    Own_exception_class(std::string corner);
};