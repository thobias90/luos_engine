/******************************************************************************
 * @file filter.c
 * @brief Calculate filter for Phy and compare filter
 * @author Luos
 * @version 0.0.0
 ******************************************************************************/
#ifndef _FILTER_H_
#define _FILTER_H_

#include <stdbool.h>
#include <stdint.h>
#include "struct_luos.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Functions
 ******************************************************************************/

// generic functions
void Filter_TopicInit(void);
void Filter_AddTopic(uint16_t topic_id);
void Filter_RmTopic(uint16_t topic_id);
bool Filter_Topic(uint16_t topic_id);

#endif /* _FILTER_H_ */
