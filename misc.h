#ifndef _MISC_H
/* Row vector of a matrix */
struct row_vector
{
    int len;            // length of the row
    GF_ELEMENT *elem;   // elements of the row
};

int draw_random_degree(void);

void get_random_unique_numbers(int ids[], int n, int ub);
#endif // _MISC_H
