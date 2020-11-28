#include <cs50.h>
#include <stdio.h>

int main(argc, argv[])
{
  if (argc > 2 || argc < 2)
  {
    printf("Format: ./robux (robux amount)");
    return 1;
  }
  else
  {
    int items = get_int("Amount of items to be purchased: ");
    if (items < 1)
    {
      printf("Invalid amount of items!");
      return 1;
    }
    else if (items > 10)
    {
      printf("Program cannot run with more than 10 items.");
    }
    else
    {
      for (i = 1; i < items + 1; i++)
      {
        int values[i] = get_int("Value of item %i: ", i);
        if (values[i] <= 0)
        {
          printf("Invalid price");
        }
      }
      // TO BE CONTINUED
       
      
