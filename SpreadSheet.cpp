#include "SpreadSheet.h"
#include <iostream>

SpreadSheet::SpreadSheet(int row, int col)
{
    //m_cells.resize(row, std::vector<Cell>(col));
    
}

void SpreadSheet::set_cell_at(int row, int col, const Cell& cl)
{
    m_cells[row][col] = cl;
}
void SpreadSheet::set_cell_at(int row, int col, const std::string& cl, Color c)
{
    m_cells[row][col].set_value(cl);
    m_cells[row][col].set_color(c);
}
Cell SpreadSheet::get_cell_at(int row, int col) const
{
    return (m_cells[row][col]);
}
void SpreadSheet::add_row(int row)
{
    if(row < 0 || row > m_cells.size() - 1)
    {
        std::cout << "bad" << std::endl;
        std::exit(1);
        //exception
    }
    std::vector<Cell> tmp(m_cells[0].size());
    m_cells.insert(m_cells.begin() + row, tmp);
}
void SpreadSheet::remove_row(int row)
{
    m_cells.erase(m_cells.begin() + row);
}
void SpreadSheet::add_column(int col)
{
    Cell tmp;
    for(int i = 0; i < m_cells.size(); ++i)
    {
        m_cells[i].insert(m_cells[i].begin() + col, tmp);
    }
}
void SpreadSheet::remove_column(int col)
{
    for(int i = 0; i < m_cells.size(); ++i)
    {
        m_cells[i].erase(m_cells[i].begin() + col);
    }
}
void SpreadSheet::swap_raws(int row1, int row2)
{
        m_cells[row1].swap(m_cells[row2]);

}
void SpreadSheet::swap_columns(int col1, int col2)
{
    for (int i = 0; i < m_cells.size(); ++i) {
       std::swap(m_cells[i][col1],m_cells[i][col2]);
    }
}

void SpreadSheet::print() const
{
    auto it = m_cells;
    for(int i = 0; i < it.size(); ++i)
    {
        auto ii = it[i];
        std::cout << i << ": ";
        for(int j = 0; j < ii.size(); ++j)
        {
            std::cout << ii[j].get_value() << ' ';
        }
        std::cout << '\n';
    }
}

void SpreadSheet::init_value()
{
    Cell tmp_c;
    tmp_c.set_value("aaa");
    std::cout << m_cells.size();
    for(int i = 0; i < m_cells.size(); ++i)
    {
        std::cout << m_cells[i].size() << "asdad";
        for(int j = 0; j < m_cells[i].size(); ++i)
        {
            // set_cell_at(i, j, tmp_c);
            std::cout << "b";
        }
        
    }
}