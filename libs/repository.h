// 12S22002 - Jeremy Mart Valentino Nainggolan
// 12S22049 - Agnes Monica Sanjani Harefa

#include "todo.h"

#ifndef REPOSITORY_H
#define REPOSITORY_H

/**
 * @brief define any function prototype, structs, enums, etc. related to stream operations that you need.
 *
 */
void read_repository(struct activity_t *_activity, unsigned short _size, unsigned short _id);
void write_repository(struct activity_t *_activity, unsigned short _temp_size, unsigned short _size);


#endif
