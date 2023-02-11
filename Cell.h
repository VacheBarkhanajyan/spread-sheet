#ifndef cell_H
#define cell_H

#include <string>
#include "Date.h"
enum class Color {green, red, black, white};

class Cell {
public:
    Cell();
    Cell(const std::string&, Color);
    void set_value(const std::string&);
    std::string get_value() const;
    void set_color(Color);
    Color get_color() const;
    int to_int();
    double to_double();
    Date to_date();
    void reset();
private:
    std::string m_value;
    Color m_color;

};

#endif