#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{ int e;
 if(a>b && a>c && a>d)
        { e=a;
          }
  else if(b>a && b>c && b>d)
     {e=b;
      }
  else if(c>a && c>b && c>d)
  { e=c;
    }
  else
  {
      e=d;
      }

  return e;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

