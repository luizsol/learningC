/*
 * This exercise makes use of bitfields
 * Source: Head First C Book
 * Chapter 5, page 263
 * Author: Luiz Sol
 * Date: 2016/05/18
 */

typedef struct {
unsigned int first_visit:1;
unsigned int come_again:1;
unsigned int fingers_lost:4;
unsigned int shark_attack:1;
unsigned int days_a_week:3;
} survey
