/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfkaier <rfkaier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:09:31 by rfkaier           #+#    #+#             */
/*   Updated: 2022/08/23 16:18:43 by rfkaier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_ACCESS_ITERATOR
# define RANDOM_ACCESS_ITERATOR

#include <iostream>
#include "iterator_traits.hpp"

namespace	ft
{
	// template<class It>
	// typename ft::iterator_traits<It>::difference_type do_distance(It first, It last, ft::input_iterator_tag)
	// {
    // 		typename ft::iterator_traits<It>::difference_type result = 0;
    // 		while (first != last)
	// 	{
    //     		++first;
    //     		++result;
    // 		}
    // 		return result;
	// }
 
	// template<class It>
	// typename ft::iterator_traits<It>::difference_type do_distance(It first, It last, ft::random_access_iterator_tag)
	// {
    // 		return last - first;
	// }

	// template<class It>
	// typename ft::iterator_traits<It>::difference_type do_distance(It first, It last, std::input_iterator_tag)
	// {
    // 		typename ft::iterator_traits<It>::difference_type result = 0;
    // 		while (first != last)
	// 	{
    //     		++first;
    //     		++result;
    // 		}
    // 		return result;
	// }
 
	// template<class It>
	// typename ft::iterator_traits<It>::difference_type do_distance(It first, It last, std::random_access_iterator_tag)
	// {
    // 		return last - first;
	// }
 
 
	// template<class It>
	// typename ft::iterator_traits<It>::difference_type 
    // 	distance(It first, It last)
	// {
    // 		return ft::do_distance(first, last, typename ft::iterator_traits<It>::iterator_category());
	// }
};

#endif