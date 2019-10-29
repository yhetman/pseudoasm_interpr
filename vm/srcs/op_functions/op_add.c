/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhetman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:57:22 by yhetman           #+#    #+#             */
/*   Updated: 2019/10/29 16:54:16 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <corewar.h>

void	op_add(t_vm *vm, t_carriage *car)
{
	long	value;
	long	r1;
	long	r2;
	long	r3;

	car->step += (1 + 1);
	r1 = vm->arena[next_op(car->next_op + car->step)];
	car->step++;
	r2 = vm->arena[next_op(car->next_op + car->step)];
	car->step++;
	value = car->registers[r1 - 1] + car->registers[r2 - 1];
	car->carry = (bool)(!value);
	r3 = vm->arena[next_op(car->next_op + car->step)];
	car->registers[r3 - 1] = value;
	car->step++;
}
