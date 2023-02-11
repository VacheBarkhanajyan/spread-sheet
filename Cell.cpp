#include "Cell.h"
#include <cmath>

Cell::Cell()
    :m_value("")
    ,m_color(Color::white)
{}

Cell::Cell(const std::string& str, Color cl)
   :m_value(str)
    ,m_color(cl)
{}

void Cell::set_value(const std::string& val)
{
    m_value = val;
}

std::string Cell::get_value() const
{
    return m_value;
}

void Cell::set_color(Color color)
{
    m_color = color;
}

Color Cell::get_color() const
{
    return m_color;
}

int Cell::to_int()
{
    int result = 0;
    int sign = 1;
    int i = 0;
    if (m_value[0] == '-') 
    {
        sign = -1;
        i++;
    }else if (m_value[0] == '+')
    {
        sign = 1;
        i++;
    }
    while(m_value[i] >= '0' && m_value[i] <= '9')
    {
        result = result * 10.0 + (m_value[i] - '0');
        i++;
    }
    return result;
}

double Cell::to_double()
{
    double result = 0.0;
    int sign = 1;
    int i = 0;
    if (m_value[0] == '-') 
    {
        sign = -1;
        i++;
    }else if (m_value[0] == '+')
    {
        sign = 1;
        i++;
    }
    while (m_value[i] >= '0' && m_value[i] <= '9') 
    {
        result = result * 10.0 + (m_value[i] - '0');
        i++;
    }
    if (m_value[i] == '.') 
    {
        i++;
        double fraction = 0.0;
        int fractionDigits = 0;
        while (m_value[i] >= '0' && m_value[i] <= '9') 
        {
            fraction = fraction * 10.0 + (m_value[i] - '0');
            fractionDigits++;
            i++;
        }

        result += fraction / pow(10, fractionDigits);
    }
    return sign * result;
}

Date Cell::to_date()
{
    Date d;
    int result = 0;
    int i = 0;
    for(i; i < 2; ++i)
    {
        result = result * 10 + (m_value[i] - '0');
    }
    d.set_day(result);
    i++;
    int k = i;
    result = 0;
    for(i; i < k + 2; ++i)
    {
        result = result * 10 + (m_value[i] - '0');
    }
    d.set_month(result);
    i++;
    k = i;
    result = 0;
    for(i; i < k + 4; ++i)
    {
        result = result * 10 + (m_value[i] - '0');
    }
    d.set_year(result);
    return d;
}
void Cell::reset()
{
    m_value = "";
    m_color = Color::white;
}




