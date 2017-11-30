#include <complex>
#include <iostream>
#include <limits>
#include <set>
#include <vector>

typedef double T_coord;
typedef std::complex<T_coord> T_point;
typedef std::vector<T_point> T_points;

struct T_less_for_points {
    bool operator()(T_point A, T_point B) {
        return A.real() == B.real() ? A.imag() < B.imag() : A.real() < B.real();
    }
};

typedef std::set<T_point, T_less_for_points> T_points_set;

template<class T>
bool equal_to_for_real(T a, T b) {
    const T coef = 10;
    return abs(a - b) < std::numeric_limits<T>::epsilon() * coef;
}

template<class T>
bool greater_for_real(T a, T b) {
    return a > b
           && !equal_to_for_real(a, b);
}

template<class T>
bool less_for_real(T a, T b) {
    return a < b
           && !equal_to_for_real(a, b);
}

template<class T>
bool greater_equal_for_real(T a, T b) {
    return !less_for_real(a, b);
}

template<class T>
bool less_equal_for_real(T a, T b) {
    return !greater_for_real(a, b);
}

T_point vect(T_point A, T_point B) {
    return B - A;
}

bool successfully_get_circumcircle_R
        (
                T_point A,
                T_point B,
                T_point C,
                T_coord &R
        ) {
    T_point BC = vect(B, C);
    T_point AB = vect(A, B);
    T_point AC = vect(A, C);

    T_coord alpha = abs(arg(AB / AC));
    T_coord sin_alpha = sin(alpha);
    bool res = !equal_to_for_real(sin_alpha, 0.0);
    if (res) {
        R = abs(BC) / (2 * sin(alpha));
    }
    return res;
}

T_point get_circumcircle_center(const T_points &circle_min_points) {
    T_point A = circle_min_points[0];
    T_point B = circle_min_points[1];
    T_point C = circle_min_points[2];

    T_point divider_AB = vect(A, B) / abs(vect(A, B));
    T_point A_hor = A / divider_AB;
    T_point B_hor = B / divider_AB;

    T_points H_ab;
    H_ab.push_back((A_hor + B_hor) / 2.0);
    H_ab.push_back(H_ab.back() + T_point(0, 1));

    H_ab.front() *= divider_AB;
    H_ab.back() *= divider_AB;

    T_point divider_AC = vect(A, C) / abs(vect(A, C));
    T_point AA_hor = A / divider_AC;
    T_point CC_hor = C / divider_AC;
    H_ab.front() /= divider_AC;
    H_ab.back() /= divider_AC;

    T_point Q = H_ab.front();
    T_point P = H_ab.back();

    T_point Qx = Q.real();
    T_point Px = P.real();
    T_point Mx = (AA_hor.real() + CC_hor.real()) / 2.0;

    T_point k_point = (Mx - Px) / (Qx - Px);
    T_coord k = k_point.real();

    T_point M = P + (Q - P) * k;
    T_point center = M * divider_AC;
    return center;
}

void print_min_circle(const T_points_set points_set) {
    const T_coord R_MIN_EMPTY = -1;
    T_coord R_min = R_MIN_EMPTY;
    T_points circle_min_points;
    T_points points(points_set.begin(), points_set.end());
    for (T_points::const_iterator A_it = points.begin(); A_it != points.end(); ++A_it) {
        for (T_points::const_iterator B_it = A_it + 1; B_it != points.end(); ++B_it) {
            for (T_points::const_iterator C_it = B_it + 1; C_it != points.end(); ++C_it) {
                T_coord R_cur = 0;
                if (!successfully_get_circumcircle_R(*A_it, *B_it, *C_it, R_cur)) {
                    continue;
                }
                if (equal_to_for_real(R_min, R_MIN_EMPTY)
                    || less_for_real(R_cur, R_min)) {
                    R_min = R_cur;
                    circle_min_points.clear();
                    circle_min_points.push_back(*A_it);
                    circle_min_points.push_back(*B_it);
                    circle_min_points.push_back(*C_it);
                }
            }
        }
    }
    if (equal_to_for_real(R_min, R_MIN_EMPTY)) {
        std::cout << "Нет окружностей."
                  << std::endl;
    } else {
        std::cout << "Окружность с наименьшим радиусом "
                  << R_min
                  << " имеет центр в точке "
                  << get_circumcircle_center(circle_min_points)
                  << std::endl;
    }
}

int main() {
    std::locale::global(std::locale(""));
    int n;
    do {
        std::cout << "Введите количество точек >= 1: ";
        std::cin >> n;
    } while (n < 1);

    T_points_set points_set;
    std::cout << "Введите координаты "
              << n
              << " различных точек:"
              << std::endl;

    do {
        std::cout << std::endl
                  << "X"
                  << points_set.size() + 1
                  << " = ";

        T_coord X;
        std::cin >> X;

        std::cout << "Y"
                  << points_set.size() + 1
                  << " = ";

        T_coord Y;
        std::cin >> Y;
        points_set.insert(T_point(X, Y));
    } while (static_cast<int>(points_set.size()) < n);
    print_min_circle(points_set);
}
