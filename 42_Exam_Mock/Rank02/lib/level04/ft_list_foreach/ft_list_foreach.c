typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}    

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
