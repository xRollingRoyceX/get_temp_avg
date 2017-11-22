/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 17, 2017, 9:03 AM
 */
#include <inclds>
#include<exception>
//[i like this equation] i / (32 + 7) + 2 + (i * i) / 3 << endl;

void return_some_numbers() {
    /*
     * change a few numbers and stuff to get some "random" numbers 
     * to use as testing numbers for the function -
     * "comp_vec(const &vec, const vec&);" 
     */
    /*
        // using this to just place into calculator (in linux of course to easily check numbers;
        for (int i = 0; i != 12; ++i) {
            cout << i / (32 + 7) + 2 + (i * i) / 3 << ", ";
            cout << i / (32 + 7) + 2 + (i * i) / 3 << " + ";
            cout << i * i / (32 + 7) + 2 + (i * i) / 1 << " + ";
            cout << i * i / (32 + 7) + 2 + (i * i) / 1 << ", "; 
        }
     */
}

double comp_vec(const vector<double>&v1, const vector<double>&v2)
{
    if (v1.empty() || v2.empty() || v1.size() <= 1 || v2.size() <= 1) 
    {
        throw std::runtime_error("EMPTY VECTOR(s) (Both Vectors need"
                "a some numarical value), or not correct amount "
                "of numbers to calculate average with. ");
    }
    double v1_cnt = 0, v2_cnt = 0; //declare v1 & v2 to hold total additions
    double v1_tot = 0, v2_tot = 0; //declare v1_t and v2_t to hold total avg's.
    auto j = 0;                    //J is to hold count for separate vector.    

    for (decltype(v1.size()) i = 0; i != v1.size() && j != v2.size(); ++j, ++i) 
    {
        v1_cnt += v1[i];
        v2_cnt += v2[j];

    }
    //get avg's form both vectors.
    v1_tot = v1_cnt / v1.size();
    v2_tot = v2_cnt / v2.size();

    double lgst = 0;
    //return the vector that has largest avg.
    return v1_tot > v2_tot ? v1_tot : v2_tot;
}
int main() 
{
    //random list of numbers for each vector for proofing
    vector< double >list2{2};
    vector< double >list1{2, 3, 6, 11, 18, 27, 38, 52, 67, 85, 104, 126};

    double result = comp_vec(list1, list2);
    cout << result << endl;

    return 0;
}

