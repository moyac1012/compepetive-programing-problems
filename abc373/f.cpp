#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef long long ll;

struct Unit {
    ll delta_happiness;
    ll weight;
};

int main() {
    int N;
    ll W;
    cin >> N >> W;

    vector<Unit> units;

    for (int i = 0; i < N; ++i) {
        ll w, v;
        cin >> w >> v;

        ll k_max = (v + 1) / 2;

        ll delta = v - 1;

        for (ll k = 1; k <= k_max && delta > 0; ++k) {
            units.push_back({delta, w});
            delta -= 2;
        }
    }

    sort(units.begin(), units.end(), [](const Unit& a, const Unit& b) {
        return a.delta_happiness * b.weight > b.delta_happiness * a.weight;
    });

    ll total_happiness = 0;
    ll total_weight = 0;

    for (auto& unit : units) {
        if (total_weight + unit.weight <= W) {
            total_happiness += unit.delta_happiness;
            total_weight += unit.weight;
        } else {
            break;
        }
    }

    cout << total_happiness << endl;

    return 0;
}
