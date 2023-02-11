#include "Test.h"
#include "Cell.h"
#include "SpreadSheet.h"
#include "Date.h"
#include <iostream>


    void Test::test_set_get_value()
    {
        Cell c;
        c.set_value("10");
        if(c.get_value() == "10")
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }
    
    void Test::test_set_get_color()
    {
        Cell c;
        c.set_color(Color::black);
        if(c.get_color() == Color::black)
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_to_int()
    {
        Cell c;
        c.set_value("10");
        if(c.to_int() == 10)
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_to_double()
    {
        Cell c;
        c.set_value("0.74");
        if(c.to_double() == 0.74)
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_to_date()
    {
        Cell c;
        Date d;
        d.set_year(2004);
        d.set_month(12);
        d.set_day(10);
        c.set_value("10.12.2004");
        if(c.to_date() == d)
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
       // d = c.to_date(); 
       // std::cout << d.get_day() << '.' << d.get_month() << '.' << d.get_year() << std::endl;    
    }

    void Test::test_reset()
    {
        Cell c;
        c.set_value("46");
        c.reset();
        if(c.get_value() == "" && c.get_color() == Color::white)
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

 /*   void Test::test_set_cell_at()
    {
        SpreadSheet ss(3, 3);

        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_set_cell_at_str()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_add_row()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_remove_row()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_add_column()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_remove_column()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_swap_rows()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }

    void Test::test_swap_columns()
    {
        if()
            std::cout << "test passed" << std::endl;
        else
            std::cout << "test failed" << std::endl;
    }*/