/*
Write a function that takes a char ** as a 2-dimensional array of char, a 
t_point as the dimensions of this array and a t_point as the starting point.

Starting from the given 'begin' t_point, this function fills an entire zone 
by replacing characters inside with the character 'F'. A zone is an group of 
the same character delimitated horizontally and vertically by other characters
or the array boundry.

The flood_fill function won't fill diagonally.
*/

typedef struct  s_point
{
	int		x;
	int		y;
}			t_point;

void  flood_fill(char **tab, t_point size, t_point begin);
{
	
}
