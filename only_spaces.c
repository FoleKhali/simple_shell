unsigned int only_spaces(char *str)
{
        unsigned int flag = 1, i = 0;

        while (str[i] == 32)
                i++;

        if (str[i] != '\0')
                flag = 0;

        return (flag);
}
