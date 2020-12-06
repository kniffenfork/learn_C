#ifndef LEARN_C_READ_DATA_H
#define LEARN_C_READ_DATA_H

#define         ERROR_FORMAT_OF_INPUT           -101
#define         ERROR_COUNT_OF_ARGUMENTS        -102
#define         ERROR_IN_FILE_READING           -103

#define         INPUT_IS_ARGUMENTS_IN_CMDLINE   -201
#define         INPUT_IS_FILES                  -202

#define         SUCCESS                          1


#include "../ft/ft.h"
#include <unistd.h>
#include <fcntl.h>

typedef struct              data_array

{
    char                    ***data_lines;
    int                     ***solve_helper;
    int                     *count_of_data_lines;
    char                    *obstacles;
    char                    *symbols_to_solve;
    char                    *empty_cell;


}                           t_data;


// usable functions:
int                 define_type_of_input(int ac, char **av);

// read data from CMD line

t_data              *CMD_get_map_description(int ac, char **av);
t_data              *CMD_read_data(int ac, char **av);
int                  CMD_count_of_the_maps(char **av);

// read data from files
t_data              *FILES_read_data(int ac, char **av);

// creating data array
t_data              *create_data_array(int ac, char **av);
void                Print_Data(t_data *data);


t_data          *read_Data_From_CMDLine(char **av);
void              get_map_description(t_data *data, int CurrentFile, int PositionInAn, char **av);
void             fill_solve_helper(t_data *data, int CurrentFile, int CurrentLine, int Position_in_av, char **av);
#endif //LEARN_C_READ_DATA_H