/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eej-jama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:09:58 by eej-jama          #+#    #+#             */
/*   Updated: 2023/11/25 14:48:28 by eej-jama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


int main0(){
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("hello");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->equip(tmp);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    me->unequip(4);
    me->unequip(5);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->equip(tmp);
    // me->equip(tmp);

    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(0);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->equip(tmp);
    // me->equip(tmp);
    // me->equip(tmp);
    // me->equip(tmp);


    // ICharacter* bob = new Character("bob");
    // ICharacter* bob1 = new Character("bob");
    // ICharacter* bob2 = new Character("bob");
    // ICharacter* bob6 = new Character("bob");
    // ICharacter* bob3 = new Character("bob");

    // me->use(0, *bob);
    // me->use(0, *bob1);
    // me->use(0, *bob2);
    // me->use(0, *bob6);
    // me->use(1, *bob3);

    // delete bob;
    // delete bob2;
    // delete bob1;
    // delete bob6;
    // delete bob3;
    delete me;
    delete src;
    // delete tmp;
    return 0;
}
int main()
{
    // main0();
    // const Character a;
    // ICharacter *b = new Character(a);
    // (void)b;
}

