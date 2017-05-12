/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoplavs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 10:07:29 by apoplavs          #+#    #+#             */
/*   Updated: 2017/05/12 10:11:06 by apoplavs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"


int 		main(int argc, char **argv)
{
	int 	fd;
	t_asm	*file;

	if (argc != 2)
		ft_error("\nusage: ./asm file.s");
	if ((fd = open(argv[1], O_RDONLY, 0)) == -1)
		ft_error("invalid file");
	file = init_file();
	read_filename(fd, argv[1], file);
	read_file(fd, file);

}