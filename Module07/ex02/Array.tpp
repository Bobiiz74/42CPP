/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:22:25 by robin             #+#    #+#             */
/*   Updated: 2024/02/21 16:41:03 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(void) : _array(NULL), _sizeArray(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _sizeArray(n) {}

template <typename T>
Array<T>::~Array(void) {
    if(_array != NULL)
        delete _array;
}

template <typename T>
Array<T>::Array(const Array & src) {
    _array = new T[src._sizeArray];
    for(unsigned int i = 0; i < src._sizeArray; i++)
        _array[i] = src._array[i];
}

template <typename T>
Array<T> & Array<T>::operator=(const Array &rhs) {
    if(rhs != NULL && rhs._array > 0)
    {
        delete _array;
        _array = new T[rhs._sizeArray];
        _sizeArray = rhs._sizeArray;
        for(int i = 0; i < _sizeArray; i++)
            _array[i] = rhs._array[i];
    }
    return(*this);
}

template <typename T>
unsigned int Array<T>::size(void) const {
    return(_sizeArray);
}

template <typename T>
T & Array<T>::operator[](const unsigned int i){
    if (i > _sizeArray)
        throw std::out_of_range("Index out of range");
    return(_array[i]);
}



#endif
