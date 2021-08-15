// #6 - [https://www.geeksforgeeks.org/optimum-location-point-minimize-total-distance/#:~:text=We%20need%20to%20find%20a,set%20of%20points%20is%20minimum.&text=In%20above%20figure%20optimum%20location,is%20minimum%20obtainable%20total%20distance.]


#include<bits/stdc++.h>
using namespace std;
#define N 5
#define EPS 1e-6
#define sq(x) ((x)*(x))
struct point{
    double x ; double y;
    point(){}
    point(double x,double y) : x(x), y(y){}
};

struct line {
    int a, b, c;
    line(int a, int b, int c) : a(a), b(b) , c(c){}
};

double dist(point p, double X, double Y){
    return sqrt( sq(X-p.x) + sq(Y-p.y) );
}

double calculate(point p[], int n, line l, double X){
     double totalDist=0;
     double Y = -1*(l.c + l.a*X)/l.b;
     for(int i=0; i<n; i++){
         totalDist += dist(p[i],X,Y);
     }
     return totalDist;
}

double findOptimumCost(point p[], int n, line l){
    double low=-1e6;
    double heigh=1e6;

    while((heigh-low) > EPS){
        double mid1=low+(heigh-low)/3;
        double mid2=mid1+(heigh-low)/3;

        double dist1 = calculate(p,n,l,mid1);
        double dist2 = calculate(p,n,l,mid2);

        if(dist1<dist2)
           heigh = mid2;
        else low = mid1;   

    }

    return calculate(p,n,l,(low+heigh)/2);
}

double findOptimumCost(int points[N][2], line l){
  point p[N];

  for(int i=0; i<N; i++){
      p[i] = point(points[i][0], points[i][1]);
  }

  return findOptimumCost(p,N,l);
}
 
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    line l(1, -1, -3);
    int points[N][2] = {
                         { -3, -2 }, 
                         { -1, 0 }, 
                         { -1, 2 }, 
                         { 1, 2 }, 
                         { 3, 4 }
                      };

    cout << findOptimumCost(points, l) << endl;

    return 0;
}