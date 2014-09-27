#include <cstdio>
#include <cmath>
#include <cstring>
#include <stack>

using namespace std;

int main() {
  char a[ 2001 ];
  short i, n, open, close;
  int t;
  stack< char > s;

  t = 1;
  while ( scanf( "%s", a ) ) {
    if ( a[ 0 ] == '-' ) {
      break;
    }

    n = strlen( a );
    for ( i = 0; i < n; ++i ) {
      switch ( a[ i ] ) {
        case '{':
          s.push( '{' );
          break;
        case '}':
          if ( !s.empty() && s.top() == '{' ) {
            s.pop();
          }
          else {
            s.push( '}' );
          }
          break;
      }
    }

    open = close = 0;
    while ( !s.empty() ) {
      switch ( s.top() ) {
        case '{':
          ++open;
          break;
        case '}':
          ++close;
          break;
      }
      s.pop();
    }

    printf( "%d. %.0f\n", t++, ceil( open / 2.0 ) + ceil( close / 2.0 ) );
  }

  return 0;
}
