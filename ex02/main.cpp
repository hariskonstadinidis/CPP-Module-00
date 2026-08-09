/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hariskon <hariskon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 16:47:52 by hariskon          #+#    #+#             */
/*   Updated: 2026/08/09 17:48:38 by hariskon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <cctype>
#include "Account.hpp"

int main(void){
    
    Account new_account1(150);
    Account new_account2(300);
    std::cout<<new_account2.checkAmount()<<std::endl;
}