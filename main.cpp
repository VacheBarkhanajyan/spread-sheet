#include <iostream>
#include "Cell.h"
#include "SpreadSheet.h"
#include "Date.h"
#include "Test.h"

int main()
{
    // Test t;
    // t.test_set_get_value();
    // t.test_set_get_color();
    // t.test_to_int();
    // t.test_to_double();
    // t.test_to_date();
    // t.test_reset();
    
    SpreadSheet obj(3, 3);
   // obj.init_value();
    obj.print();
    // obj.add_row(0);
    // obj.add_column(2);
    obj.print();
    return 0;
}