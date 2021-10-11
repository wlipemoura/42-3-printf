/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelipe- < wfelipe-@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 20:39:26 by wfelipe-          #+#    #+#             */
/*   Updated: 2021/10/08 12:57:03 by wfelipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

/**
 * @brief converts an initial portion of a string pointed by 'nptr' 
 * in an integer. It just works while it is not founded a non-digit character,
 * despite of jump the initial spaces searching for a digit ('+' and '-' are
 * considered for the convertion).
 * 
 * @param nptr is a pointer to the string it must be converted.
 * 
 * @return the converted integer.
 * @return '0' if it doesn't convert anything
 */
int		ft_atoi(const char *nptr);

/**
 * @brief fill the first 'n' bytes of the memory pointer by 's' with the
 * constant NULL byte ('\0').
 * 
 * @param s is a pointer to the memory area it is supposed to be filled.
 * @param n is the number (in bytes) supposed to be filled with '\0'.
 * 
 * @return NULL.
 */
void	*ft_bzero(void *s, size_t n);

/**
 * @brief allocates memory for an array of 'nmemb' elements 
 * of 'size' bytes each. The difference to 'malloc' function is that 'calloc'
 * function cleans the memory, giving to them the 'NULL' value.
 * 
 * @param nmemb the quantity of elements present in the array that needs memory.
 * @param size is the size, in bytes, of the element type from the array.
 * 
 * @return A pointer to the allocated memory.
 * @return 'NULL' if 'nmemb' or 'size' is equal to zero.
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief This function checks if the @param c is an alphanumeric character.
 * 
 * @param c Int type that represents the character.
 * 
 * @return Zero if it is false, non-zero if it is true.
 */
int		ft_isalnum(int c);

/**
 * @brief This function checks if the @param c, is an alphabetic character.
 * 
 * @param c Int type that represents the character.
 * 
* @return Zero if it is false, non-zero if it is true.
 */
int		ft_isalpha(int c);

/**
 * @brief This function checks if the @param c, is in the ASCII table.
 * 
 * @param c Int type that represents the character.
 * 
* @return Zero if it is not in the ASCII, non-zero if it does.
 */
int		ft_isascii(int c);

/**
 * @brief This function checks if the @param c, is an numeric character.
 * 
 * @param c Int type that represents the character.
 * 
* @return Zero if it is false, non-zero if it is true.
 */
int		ft_isdigit(int c);

/**
 * @brief This function checks if the @param c, is a printable character.
 * 
 * @param c Int type that represents the character.
 * 
* @return Zero if it not printable, non-zero if it is printable.
 */
int		ft_isprint(int c);

/**
 * @brief searches for a character in the first 'n' bytes from a memory area.
 * 
 * @param s is a pointer to the memory area where the character will be searched.
 * @param c represents the searched character.
 * @param n is the number of bytes in which will be searched for the character.
 * 
* @return a pointer to the first occurence of the searched character.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief compares the first 'n' bytes from the memory areas of 's1' and 's2'.
 * 
 * @param s is a pointer to the memory area where the character will be searched.
 * @param c represents the searched character.
 * @param n is the number of bytes in which will be searched for the character.
 * 
 * @return zero if the content of bytes are equivalent or if 'n' = 0.
 * @return an integer greater than zero, if the firsts 'n' bytes of 's1' are 
 * greater than the firsts 'n' bytes from 's2'.
 * @return an integer lower than zero, if the firsts 'n' bytes of 's1' are lower
 * than the firsts 'n' bytes from 's2'.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief copies 'n' bytes from the 'src' memory to the 'dest' memory.
 * The 'memcpy' doesn't behave correctly when dealing with overlap
 * (unlike memmove.)
 * 
 * @param dest is a pointer to the destiny memory area.
 * @param src is a pointer to the source memory area.
 * @param n is the number of bytes it will be copied from 'src' to 'dest'.
 * 
 * @return a pointer to the 'dest' memory area.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief copies 'n' bytes from the 'src' memory to the 'dest' memory.
 * The 'memmove' does behave correctly when dealing with overlap
 * (unlike memcpy.)
 * @param dest is a pointer to the destiny memory area.
 * @param src is a pointer to the source memory area.
 * @param n is the number of bytes it will be copied from 'src' to 'dest'.
 * 
 * @return a pointer to the 'dest' memory area.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief fills the first 'n' bytes of memory area pointe by 's' with the
 * constant byte 'c'.
 * @param s is a pointer to the destiny memory area.
 * @param c is the character used to fill the memory area.
 * @param n is the number of bytes it will be filled in the destiny memory area.
 * 
 * @return a pointer to the destiny memory area.
 * @return NULL if any error occur.
 * Atention: the return reading of this function obbey to hex system. This means
 * that, for example, put a integer '10' in the first 4 bytes of an array of
 * integers will return the number which reading is correspondent to
 * 10101010 in hex: This function doesn't substitute each integer by 10! It 
 * substitute EACH BYTE for 10.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief This function scans the string 's' searching for the 
 * character 'c'.
 *
 * @param s is a pointer to the string.
 * @param c is an integer that represents the searched character.
 *
 * @return a pointer to char: the first occurence of the 'c' character,
 * or 'NULL' if the character is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief duplicates a string.
 *
 * @param s is a pointer to the memory area where the duplicated string will be
 * located.
 *
 * @return a pointer to char which points to the first character of the
 * duplicated string.
 */
char	*ft_strdup(const char *s);

/**
 * @brief concatenate the NUL-terminated string 'src' to the end of 'dst. 
 * Unlike 'strncat', 'strlcat' take the full size of
 * the buffer (not just the length) and guarantee to NUL-terminate the
 * result (as long as there is at least one byte free in 'dst').
 * 
 * 'strlcat' operate with true "C" strings. This means that 'src' and 'dst' must
 * be NUL-terminated.
 *
 * @param dst is a pointer to the string destiny.
 * @param src is a pointer to the string source.
 * @param size is the size of the destination buffer (the final size of 'dst'
 * after the concatenation).
 *
 * @return the total length of the string the function tried to create.
 * It means the inicial length of 'dst' plus the length of 'src'.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief copies up to size - 1 characters from the
 * NUL-terminated string src to dst, NUL-terminating the result.
 *
 * @param dst is a pointer (char) to the memory area where the src will
 * be coppied.
 * @param src is a pointer (const char) to the string that will be coppied.
 * @param size represents how much bytes will be coppied from src.
 *
 * @return the length of the string it tried to copy (strlen(src)).
 * Atention: it will always copies size-1 bytes to guarantee that the dst will
 * be NUL-ended.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Calculate the length of string (excluding NULL character).
 *
 * @param s is a pointer to the string.
 *
* @return the number of characters in the string pointed to by 's'.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief locate a substring in a string. 
 * locates the first occurrence of the null-terminated string little in the 
 * string big, where not more than len characters are searched.
 * Characters that appear after a ‘\0’ character are not searched.
 *
 * @param big is a pointer to the string where 'little' will be searched.
 * @param little is a pointer to the string will be searched for.
 * @param len is how many bytes will be analyzed in the 'big' string.
 *
 * @return 'big' if 'little' is an empty string.
 * @return 'NULL' if 'little' does not occur in 'big'.
 * @return a pointer to the first character of the first occurrence of little
 * in 'big', if 'big' has 'little'.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief compare two strings, s1 and s2, limited to compare only the first
 * (at most) 'n' bytes of s1 and s2.
 *
 * @param s1 is a pointer to the string 1 to be compared.
 * @param s2 is a pointer to the string 2 to be compared.
 * @param n is how many bytes will be analyzed in both strings.
 *
 * @return an integer less than zero if 's1' < 's2';
 * @return an integer greater than zero if 's1' > 's2';
 * @return 0 if the bytes analized match.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief returns a pointer to the last occurrence of the 
 * character c in the string 's'.
 *
 * @param s is a pointer to the string.
 *
 * @return a pointer to the 'c' character in the string, or NULL if the
 * character is not found. '\0' is a character considered on the searching.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Converts an uppercase character into lowercase.
 *
 * @param c Is a character or integer corresponding to a character.
 *
 * @return The lowercase character, if it is an alpha, or
 * 'c' if the conversion was not possible, it returns 'c'.
 */
int		ft_tolower(int c);

/**
 * @brief Converts an lowercase character into uppercase.
 *
 * @param c Is a character or integer corresponding to a character.
 *
 * @return The uppercase character, if it is an alpha, or
 * 'c' if the conversion was not possible, it returns 'c'.
 */
int		ft_toupper(int c);

/**
 * @brief Converts an integer into a string.
 *
 * @param n Is the integer you must to convert into a string.
 *
 * @return a pointer to the converted string.
 */
char	*ft_itoa(int n);

/**
 * @brief Outputs the character 'c' to the given file descriptor.
 *
 * @param c Is the character to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return none.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string 's' to the given file descriptor,
 * followed by a newline.
 *
 * @param s Is the string to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return none.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer 's' to the given file descriptor.
 *
 * @param n Is the integer to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return none.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Outputs the string 's' to the given file descriptor.
 *
 * @param s Is the string to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return none.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Allocates (with malloc) and returns an array of strings obtained by 
 * splitting 's' using the character 'c' as a delimiter. The array must be 
 * ended by a NULL pointer.
 *
 * @param s Is the string to be split.
 * @param f Is the delimiter character.
 *
 * @return The array of new strings resulting from the split.
 * @return NULL if the allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Applies the function f to each character of the string passed as
 * argument, and passing its index as first argument. Each character is passed 
 * by address to f to be modified if necessary.
 *
 * @param s Is the string on which to iterate.
 * @param f Is the function to apply to each character.
 *
 * @return none.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief allocates (with malloc) and returns a new string, which is the 
 * result of the concatenation of 's1' and 's2'
 *
 * @param s1 is the prefix string.
 * @param s2 is the sufix string.
 *
 * @return The new string.
 * @return TNULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Applies the function 'f' to each character of the string 's' to 
 * create a new string (with malloc) resulting from successive applications of
 * 'f'.
 *
 * @param s Is the string on which to iterate.
 * @param f Is the function to apply to each character.
 *
 * @return The string created from the successive applications of 'f'.
 * @return NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));

/**
 * @brief Allocates (with malloc) and returns a copy of 's1' with each of the
 * characters specified in 'set' removed from the beginning and the end of
 * the string, ignoring the order of the characters in the string 's1', since
 * it is in the start or end of the string.
 *
 * @param s1 is the string to be trimmed.
 * @param set is the reference set of characters to trim.
 * 
 * @return The trimmed string.
 * @return NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Allocates (with malloc) and returns a substring from the string 's'.
 * The substring begins at index 'start' and is of maximum size 'len'.
 *
 * @param s is the string from which to create the substring.
 * @param start is the start index of the substring in the string 's'.
 * @param len is the maximum length of the substring.
 * 
 * @return The substring.
 * @return NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Outputs the integer 's' to the given file descriptor.
 *
 * @param n Is the integer to output.
 * @param fd Is the File Descriptor on which to write.
 *
 * @return none.
 */
void	ft_putunbr_fd(unsigned int n, int fd);

/**
 * @brief calculates the result of exponentiation of 'basis' to the power
 * of 'exponent'.
 * 
 * @param basis is the basis of the calculation.
 * @param exponent is the power of the basis.
 * 
 * @return The result of the exponentiation.
 * @return '\0' if both basis and exponent are equal to zero.
 */
int		ft_power(int basis, size_t exponent);

char	*ft_itoa_base(unsigned int number, unsigned int base);

char	*ft_itoa_base_upper(unsigned int number, unsigned int base);

#endif