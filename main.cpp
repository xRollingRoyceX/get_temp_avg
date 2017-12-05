/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 17, 2017, 9:03 AM
 */
#include "inclds"

double get_tem_avg(vector<double> &temps) {
    double cnt = 0;
    for (decltype(temps.size()) i = 0; i != temps.size(); ++i) {
       cnt += temps[i];
    }
    return cnt/temps.size(); 
}

int main() {
    vector<double>lst{7.57, 84.4, 38.4, 54.32, 12.54
            , 65.45, 65.98, 74.33, 45.11};
    cout << get_tem_avg(lst);
    return 0;
}
