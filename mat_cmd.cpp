#include "header.h"

int main() {
    while (true) {
        cout << ">> ";
        line_cmd();
        if (!num_val){
            continue;
        }
        float *val = new float[num_val];
        val = data();

        for (int i = 0; i < num_val; i++) {
            cout << val[i] << endl;
        }
    }

    return 0;
}