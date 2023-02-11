#ifndef spread_sheet_h
#define spread_sheet_h

#include <string>
#include <vector>
#include "Cell.h"
#include "Date.h"

class SpreadSheet {
public:
    SpreadSheet(int, int);
    void set_cell_at(int, int, const Cell&);
    void set_cell_at(int, int, const std::string&, Color c);
    Cell get_cell_at(int, int) const;
    void add_row(int);
    void remove_row(int);
    void add_column(int);
    void remove_column(int);
    void swap_raws(int, int);
    void swap_columns(int, int);
    void print() const;
    void init_value();
private:
    std::vector<std::vector<Cell>> m_cells;

};

#endif