#include <stdbool.h>
#include "structs.h"

void add_dir_to_path(list_node**, unsigned int, unsigned int, char*);
void back_to_path(list_node**, unsigned int, int);
int parent_offset(list_node **);
void print_current_path(list_node**);
int edit_commands(char*, int, list_node**);
void cfs_create(char*, int , int , int, int);
int cfs_workwith(int, char*, list_node**);
int cfs_mkdir(int, char*, list_node**);
int cfs_touch(int, bool, bool, char*, list_node**);
void cfs_pwd(int, list_node**);
void cfs_cd(int, list_node**, char*);
void cfs_ls(int, bool, bool, bool, bool, bool, bool, char*, list_node**);
void cfs_mv(int,  list_node**, char*, char*, bool);
void cfs_rm(int,  list_node **, char *, bool, bool);
void cfs_ln(int,  list_node **, char*, char*);
void cfs_import(int,  list_node**, char*, char*);
void cfs_export(int,  list_node**, char*, char*);
void cfs_cat(int,  list_node**, char*, char*);
int find_path(int, list_node**, char *, bool);
void destroy_list(list_node **);
void add_to_bitmap(int, int);
int get_space(int);
void delete_from_bitmap(int, int);
