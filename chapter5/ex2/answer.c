/*
 * Answers to the questions made
 * Source: Head First C Book
 * Chapter 5, page 228
 * Author: Luiz Sol
 * Date: 2016/05/05
 */
 
 
 ///1:
 struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2},{"swim in the jacuzzi", 7.5}}};
 
 //2:
 void label(struct fish a){
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", a.name, a.species, a.teeth, a.age);
	printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n", a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
}
