#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    int iter = 0;
    int u; int d;
    int l = name.length();
    int m; int i = 0;
    string check(l,'A');

    while (true){
        check[i] = name[i];
        u = name[i] - 'A';
        d = 'Z' - name[i] + 1;
        
        if (u < d) answer += u;
        else answer += d;

        if (name == check) break;
        else if (iter > l) break;

        for (m = 0; m < l; m++){
            if (name[(i+m) % l] != check[(i+m) % l]){
                answer += m;
                i = (i + m) % l;
                break;
            } else if(name[(i+l-m) % l] != check[(i+l-m) % l]){
                answer += m;
                i = (i+l-m) % l;
                break;
            }
        }

        iter++;
    }

    return answer;
}