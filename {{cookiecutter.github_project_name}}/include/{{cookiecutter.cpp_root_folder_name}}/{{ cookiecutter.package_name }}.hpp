#pragma once
#ifndef {{ cookiecutter.cpp_macro_prefix }}_{{cookiecutter.package_name}}_HPP
#define {{ cookiecutter.cpp_macro_prefix }}_{{cookiecutter.package_name}}_HPP

#include "xtensor/xtensor.hpp"
#include "xtensor/xarray.hpp"
#include "xtensor/xexpression.hpp"



namespace {{ cookiecutter.cpp_namespace }} {


    bool helloWorld(){
        return true;
    }

} // end namespace {{cookiecutter.cpp_namespace}}


#endif // {{ cookiecutter.cpp_macro_prefix }}_{{cookiecutter.package_name}}_HPP