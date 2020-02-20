#include <cstdio>
#include <cmath>

using namespace std;

const double th = M_PI * 60.0 / 180.0;

struct Point {
    double x, y;
};

void koch(int d, Point p, Point q) {
    if(d == 0) return;

    Point s, t, u;

    // 3 等分点
    s.x = (2.0 * p.x + 1.0 * q.x) / 3.0;
    s.y = (2.0 * p.y + 1.0 * q.y) / 3.0;
    t.x = (1.0 * p.x + 2.0 * q.x) / 3.0;
    t.y = (1.0 * p.y + 2.0 * q.y) / 3.0;

    // 正三角形
    // (s.x, s.y) を中心に 60 度回転
    u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
    u.y = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;

    koch(d - 1, p, s);
    printf("%.8f %.8f\n", s.x, s.y);
    koch(d - 1, s, u);
    printf("%.8f %.8f\n", u.x, u.y);
    koch(d - 1, u, t);
    printf("%.8f %.8f\n", t.x, t.y);
    koch(d - 1, t, q);

}

int main () {
    int n;
    scanf("%d", &n);
    Point x1, x2;
    x1.x = 0; x1.y = 0;
    x2.x = 100; x2.y = 0;
    printf("%.8f %.8f\n", x1.x, x1.y);
    koch(n, x1, x2);
    printf("%.8f %.8f\n", x2.x, x2.y);
    return 0;
}
