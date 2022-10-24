#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *buff)
{
	int	i;

	i = 0;
	while(buff[i])
		i++;
	return (i);
}

int	ft_putstr(char *temp, int i)
{
	int	count;

	count = 0;
	while (count <= i)
	{
		write(1, &temp[count], 1);
		count;
	}
	ft_free(temp,i);
	return (i);
}

char	*ft_strcat(char *temp, char *buff)
{
	//voir piscine 
}

void	ft_repere(char *temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		if (tem[i] == '\n')
		{
			ft_putstr(temp, i)
			break ;
		}
		i++;
	}
}


void	ft_analyse(char *buff)
{
	int		len;
	static *char	temp;
	int		i;
	int	check;

	check = 0;
	i = 0;
	len = ft_strlen(buff);
	if (!temp)
	{
		temp = malloc (sizeof(*char) + ft_strlen(temp) + len);
		temp = ft_strcat(temp, buff);
		if (len == 0)
			ft_pustr(temp, ft_strlen(temp) - 1);
		ft_repere;

	}
	else
	{
		temp = malloc(sizeof(*char) * len);
		temp = buff;
		ft_repere(temp);
	}
}

void	ft_free(char *,int	i)
{
	while (i >= 0)
	{
		free(temp[i]);
	}
}


char *get_next_line(int fd)
{
	char *buff;

	buff = malloc(sizeof(*char) * 5);
	fopen(fd,r);
	read(fd,buff,5);
	ft_analyse(buff);
	fclose(fd);
}
