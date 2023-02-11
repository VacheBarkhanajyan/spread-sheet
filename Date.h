#ifndef date_h
#define date_h

class Date {
public:
    int get_year() const;
    int get_month() const;
    int get_day() const;
    void set_year(int);
    void set_month(int);
    void set_day(int);
    bool operator==(const Date&) const;

private:
    int m_year;
    int m_month;
    int m_day;
};


#endif