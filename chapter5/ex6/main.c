/*
 * This exercise makes use of unions and designated identifiers
 * Source: Head First C Book
 * Chapter 5, page 250
 * Author: Luiz Sol
 * Date: 2016/05/08
 */
 
typedef union {
	float lemon;
	int lime_pieces;
} lemon_lime;

typedef struct {
	float tequila;
	float cointreau;
	lemon_lime citrus;
} margarita;

//1:
//2.0 measures of tequila
//1.0 measures of cointreau
//2.0 measures of juice

margarita m = {2.0, 1.0, {2}};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", m.tequila, m.cointreau, m.citrus.lemon);


//2:
//2.0 measures of tequila
//1.0 measures of cointreau
//0.5 measures of juice

margarita m = {2.0, 1.0, {0.5}};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", m.tequila, m.cointreau, m.citrus.lemon);

//3:
//2.0 measures of tequila
//1.0 measures of cointreau
//1 pieces of lime
margarita m = {2.0, 1.0, {.lime_pieces=0.5}};
printf("%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces
of lime\n", m.tequila, m.cointreau, m.citrus.lime_pieces);

//Be the compiler
//Only the first line will let the code be compiled
