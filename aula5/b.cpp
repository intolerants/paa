#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
#include <iostream>
#include <algorithm>
#include <vector>       // std::vector

const int size = 10000;

using namespace std;

int comp (const void * a, const void * b)
{
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

int main ()
{
    long long int n, a, b;
    long long int values[size];
    //vector<long long int> values (10000); 
/*  for (int i = 0; i < 10000; i++)
    values[i] = 0;*/

    //std::cout << "myvector contains:";
/*  for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';*/
    //long long int i = 0;
    //vector<int>iterator it = values.being();
    cin >> values[0];
    cout << values[0] << endl;
    int i = 1;
    while(cin>>values[i]){
        //values.push_back(a);
        //cout << " i: " << i << " i/2: " << i/2 << endl;
        sort(values, values+(i+1));
/*        for (int j = 0; j <= i; j++)
            cout << values[j] << " ";

        cout << endl;*/
        if (i % 2 == 0){
            cout << values[(int)i/2] << endl;
            //cout << "impar" << endl;
        }
        else{
            cout << (values[i/2] + values[i/2+1])/2 << endl;
            //cout << values[i/2] << "||" << values[i/2+1] << endl;
        }
        i++;
    }
  
  return 0;
}