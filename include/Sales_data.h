#ifndef _SALES_DAATA_H
#define _SALES_DAATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif