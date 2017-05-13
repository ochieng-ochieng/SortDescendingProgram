#include<iostream>
using  namespace  std ;

template<class X> void  bubble(X  *items , int  counter)
{
    register  int   a  , b ;

    X  temp ;

    for(a = counter - 1 ; a > 0 ; a--)
        for(b = 0 ; b <  a ; b++)
          if(items[b+1] > items[b])
        {
         temp = items[b+1];
         items[b+1] = items[b];
         items[b] = temp ;
        }
}

int  main()
{
    int   iarray[7] = {7 ,5 ,4 , 3 , 9 ,8 ,6};
    double   darray[5] = {4.3 , 2.5 , -0.9 , 100.2 , 3.0};
    string  names[5] = {"Pebbles ","Barney " ,"Wilma " ,"Fred ","Dino "};

    int  i ;

    //Here  is  unsorted  integer  array
    cout   << "Here  is  unsorted  integer  array : ";
    for(i = 0 ; i < 7 ; i++)
        cout << iarray[i] << "   " ;

    cout << endl ;
    cout   << "Here  is an unsorted  double  array : ";

    for(i = 0 ; i < 5 ; i++)
        cout << darray[i] << "   " ;

    cout << endl ;
    cout   << "Here  is an unsorted  string  array : ";

    for(i = 0 ; i < 5 ; i++)
        cout << names[i] << "   " ;

    cout << endl  << endl ;


    bubble(iarray , 7);
    bubble(darray , 5);
    bubble(names , 5);

    cout   << "Here  is  sorted  integer  array : ";

    for(i = 0 ; i < 7 ; i++)
        cout << iarray[i] << "   ";

    cout << endl ;
    cout   << "Here  is an sorted  double  array : ";

    for(i = 0 ; i < 5 ; i++)
        cout << darray[i] << "   ";

    cout << endl ;
    cout   << "Here  is an sorted  string  array : ";

    for(i = 0 ; i < 5 ; i++)
        cout << names[i] << "   ";

    cout << endl  << endl ;


    return 0 ;
}
