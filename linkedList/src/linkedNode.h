/* 
 * File:   linkedNode.h
 * Author: tlibal
 *
 * Created on November 20, 2015, 10:10 PM
 */

#ifndef LINKEDNODE_H
#define	LINKEDNODE_H

template <typename T> struct linkedNode {
    int id;
    T value;
    linkedNode<T> *next;
};

#endif	/* LINKEDNODE_H */

