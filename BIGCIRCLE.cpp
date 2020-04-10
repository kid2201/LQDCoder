#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

#define eps 0.000001

struct point {
    double x,y;
} points[333555];

double dist(point p1, point p2) {
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

bool cmp(point p1, point p2) {

    double u1,u2;

    if (fabs(p1.y - points[0].y) < eps) return false;
    if (fabs(p2.y - points[0].y) < eps) return true;

    u1 = (p1.x - points[0].x) / (p1.y - points[0].y);
    u2 = (p2.x - points[0].x) / (p2.y - points[0].y);

    return (u1 < u2);
}

int main() {

    int n,p,i;
    double d,res;
    point tmp;

    scanf("%d", &n);

    p = 0;
    for(i=0; i<n; i++) {
        scanf("%lf%lf", &points[i].x, &points[i].y);
        if (points[i].y < points[p].y || (fabs(points[i].y - points[p].y) < eps && points[i].x < points[p].x) ) {
            p = i;
        }
    }

    tmp = points[0]; points[0] = points[p]; points[p] = tmp;

    sort(points+1,points+n,cmp);

    res = dist(points[0], points[n-1]);

    for(i=1; i<n; i++) {
        d = dist(points[i], points[i-1]);
        if (d < res) res = d;
    }

    printf("%.2lf\n", res);

    return 0;
}

