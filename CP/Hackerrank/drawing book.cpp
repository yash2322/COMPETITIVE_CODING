#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
long int page_from_start=ceil((p-1)/2.0);
long int page_from_end;
   if(n%2!=0)
   {
    page_from_end=floor((n-p)/2.0);
   }
   else
   {
       page_from_end=ceil((n-p)/2.0);
   }
   //out<<page_from_end<<" "<<page_from_start;
    if(page_from_end<=page_from_start)
        return page_from_end;
        else
        return page_from_start;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
