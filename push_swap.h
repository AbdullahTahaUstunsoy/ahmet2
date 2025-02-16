#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack{
    int index;
    int number;
    struct s_stack *next;
}                t_stack;

//static olması gereken fonksiyonları belirle

void stack_free(t_stack **a, t_stack **b); //main.c

void print_error(); //ft_errors.c

static int is_num(char *arg); //control1.c
static int is_exist(char **args);
void ft_join1(int argc, char *argv[], int total_size); 
void ft_control(int argc , char *argv[]);
void ft_control2(char *str);

void ft_control3(int is_num_flag , int is_exist_flag, char **args);  //control2.c
int is_in_range(long number);
void free_args(char **args);
void free_stack(t_stack **stack_a, t_stack **stack_b);

         
long ft_atoi(const char *str); //utils1.c   
size_t	ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);

static void	*del(char **ptr, int len); //ft_split.c
char	*ft_substr(char const *s, unsigned int start, size_t len);  
static int	ft_count_words(char const *s, char c);
static int	ft_count_chars(char const *s, char c);
char	**ft_split(char const *s, char c);

void	create_stack(t_stack **stack_a, char **args); //stack_create.c
void index_assignment(t_stack **stack_a);
t_stack *get_next_min(t_stack **stack_a);
int	is_sorted(t_stack **stack);

t_stack	*ft_lstnew(int content); //utils2.c
int	ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);



void swap(t_stack **stack); //actions1.c
void sa(t_stack **stack_a);
void sb(t_stack **stack_a);
void ss(t_stack **a, t_stack **b);


void rotate (t_stack **stack); //actions2.c
void ra (t_stack **stack_a);
void ra (t_stack **stack_a);
void rr (t_stack **stack_a, t_stack **stack_b);

void pa(t_stack **a, t_stack **b); //actions3.c
void pb(t_stack **a, t_stack **b); 


void rrotate(t_stack **stack); //actions4.c
void rra(t_stack **stack_a);
void rrb(t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);


void 	sort_2(t_stack **a); //basicsort1.c
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void    basic_sort(t_stack **a, t_stack **b);

int		get_max_bits(t_stack **stack);//sort1.c
void    bit_iteration(t_stack **a, t_stack **b, int bit_position,int size);
void	radix_sort(t_stack **a, t_stack **b); 
void	ft_sort(t_stack **a, t_stack **b, int size);



char *join_with_space(char *joined , char *arg);//utils3.c
char **join_args(int argc, char **argv);
int get_minimum_index (t_stack **stack, int value);
int	get_position(t_stack **stack, int inx);

#endif 