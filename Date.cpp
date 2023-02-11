#include "Date.h"

int Date::get_year() const
{
    return m_year;
}
int Date::get_month() const
{
    return m_month;
}
int Date::get_day() const
{
    return m_day;
}
void Date::set_year(int year)
{
    m_year = year;
}
void Date::set_month(int month)
{
    m_month = month;
}
void Date::set_day(int day)
{
    m_day = day;
}

bool Date::operator==(const Date& rhs) const
{
    return (m_year == rhs.m_year &&
            m_month == rhs.m_month &&
            m_day == rhs.m_day);
}
