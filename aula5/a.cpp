#include<bits/stdc++.h>
#include <stack>

#define MAXN 101010
#define ler freopen("in.txt", "r", stdin)
typedef long long int lint;
using namespace std;

struct s{
    int n;
    int dif;
    int index;
};

int comp (const void *a, const void *b)
{
    struct s *ia = (struct s *)a;
    struct s *ib = (struct s *)b;
    if (ia->dif < ib->dif ) return 1;
    if (ia->dif > ib->dif ) return -1;
    if (ia->n < ib->n ) return -1;
    if (ia->n > ib->n ) return 1;
    if (ia->n == ib->n ) return 0;
}

int main(){
    //ler;
    int d, n, lixo, s, t;

    cin >> d;
/*    cout << "d: " << d << endl;*/

    // cin >> lixo;

    for (int i = 0; i < d; i++){
        cin >> n;
/*        cout << "n: " << n << endl;*/
        struct s array[n];
        for(int j = 0; j < n; j++){
            cin >> s >> t;
            //cout << s << "||" << t << endl;
            array[j].n = t;
            array[j].dif = (t-s);
            array[j].index = j+1;
        }
/*        for(int j = 0; j < n; j++){
            cout << array[j].index<< ")dif: " << array[j].dif<< endl ;
        }*/
        qsort(array, n, sizeof(struct s), comp);
        for (int j = 0; j < n; j++){
            cout << array[j].index << " ";
        }
        cout << endl << endl;
    }

    return 0;
}