/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:01:06 by geonwkim          #+#    #+#             */
/*   Updated: 2024/11/25 23:22:24 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.hpp"
# include <iostream>

std::string Replace::replaceAll(const std::string& content, const std::string& from, const std::string& to)
{
	if (from.empty())
		return content;
	std::string result;
	size_t pos = 0, prev = 0;

	while ((pos = content.find(from, prev)) != std::string::npos)
	{
		result.append(content, prev, pos - prev);
		result.append(to);
		prev = pos + from.length();
	}

	result.append(content, prev, std::string::npos);
	return result;
}

// Since `filename` is passed by value, the original file is not modified.
bool Replace::process(const std::string& filename, const std::string& from, const std::string& to)
{
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cerr << "Error: Unable to open file: " << filename << std::endl;
		return false;
	}

	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error: Unable to create output file: " << filename << std::endl;
		return false;
	}

	std::string line;
	while (std::getline(inputFile, line))
		outputFile << replaceAll(line, from, to) << std::endl;
	return true;
}
