#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - it returns the length of the string
 * @s: to evaluate string
 * Return: length of the string
 */
int _strlen(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
/**
 * *_strcpy - copies the string
 * @dest: pointer to the buffer in which the string will bw copied
 * @src: the string to be copied from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int length, y;
length = 0;
while (src[length] != '\0')
{
length++;
}
for (y = 0; y < length; y++)
{
dest[y] = src[y];
}
dest[y] = '\0';
return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new_ dog(Success), NULL if false
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int length1, length2;
length1 = _strlen(name);
length2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (length1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (length2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
