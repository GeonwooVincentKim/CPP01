/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:59:34 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 23:00:57 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <fstream>

class Replace
{
private:
	static std::string replaceAll(const std::string& content, const std::string& from, const std::string& to);
public:
	static bool process(const std::string& filename, const std::string& from, const std::string& to);
};

#endif
