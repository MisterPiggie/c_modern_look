struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
    {{"new",     new_cmd},
    {"open",    open_cmd},
    {"close",   close_cmd},
    {"close_all",   close_all_cmd},
    {"save",   save_cmd},
    {"save_as",   save_as_cmd},
    {"save_all",   save_all_cmd},
    {"print",   print_cmd},
    {"exit",   exit_cmd}
    };



void run_cmd(char *str)
{
    for (int i = 0; i < sizeof(file_cmd) / sizeof(file_cmd[0]); i++)
    {
        if (strcmp(str, file_cmd[i].cmd_name) == 0)
        {
            (*file_cmd[i].cmd_pointer)();
            return;
        }

    }
    return;
}

