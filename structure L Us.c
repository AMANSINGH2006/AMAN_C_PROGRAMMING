#include<stdio.h>
    struct virus 
    {
        char signature[50];
        char status[50];
        int size;
    }v[100]={"yankee doodle", "Deadly", 1813, 
             "Dark Avenger", "Killer", 1795};
main()
{
 int i;
// struct virus v;
  for(i=0; i<=1; i++)
printf("%s %s %d\n",v[i].signature, v[i].status, v[i].size);
}