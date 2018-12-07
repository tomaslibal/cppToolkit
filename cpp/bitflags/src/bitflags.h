/* 
 * File:   bitflags.h
 * Author: tlibal
 * 
 * Header only implementation of bit flags.
 *
 * Created on December 15, 2015, 10:03 PM
 */

#ifndef BITFLAGS_H
#define	BITFLAGS_H

#include <stdbool.h>

#ifdef	__cplusplus
extern "C" {
#endif

const short FLAG_1 = 1;
const short FLAG_2 = 1 << 1;
const short FLAG_3 = 1 << 2;
const short FLAG_4 = 1 << 3;

inline void set_flag(short *settings, const short flag) {
    *settings |= flag;
}

inline void unset_flag(short *settings, const short flag) {
    *settings &= ~flag;
}

inline int is_flag_set(short settings, const short flag) {
    return settings & flag;
}

inline bool is_flag_set_bool(short settings, const short flag) {
    return (is_flag_set(settings, flag)) > 0 ? true : false;
}

#ifdef	__cplusplus
}
#endif

#endif	/* BITFLAGS_H */

