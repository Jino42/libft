/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_fun.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoniolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 17:13:53 by ntoniolo          #+#    #+#             */
/*   Updated: 2017/09/12 16:15:25 by ntoniolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_FUN_H
# define PRINTF_FUN_H

# include <unistd.h>
# include <stdlib.h>
# include "../../../basic/includes/libft.h"

int		ft_wcharlen(wchar_t c);
size_t	ft_wstrlen(const wchar_t *str);
int		ft_sizebit(long long nbr);
void	ft_putwstr(wchar_t *str);
void	ft_putwchar(wchar_t c);
char	*ft_watoa(wchar_t *str);
char	*ft_wctoc(wchar_t c);
char	*ft_itoa_ll_limit(long long int nb);
char	*ft_itoa_base_maj_ui(long long unsigned int nb, int base);
char	*ft_itoa_base_ui(long long unsigned int nb, int base);
void	ft_putnbrbase(int n, int base);
wchar_t	*ft_wstrnew(size_t size);
wchar_t	*ft_wstrsub(const wchar_t *s, unsigned int start, size_t len);
char	*ft_strjoinfree(char *s1, char *s2);
char	*ft_dotoa(double nb, int len);
char	*ft_memjoinfree(char *s1, char *s2, int len);

#endif
