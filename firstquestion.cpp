#include <bits/stdc++.h>
using namespace std;
// function to shift zeros
void move_zeros_to_right(vector<int>& m)
{
    int count = 0;
      int length=m.size();
    for (int i = 0; i < length; i++) {
        if (m[i] == 0) {
            count++;
            // deleting the element from the vector
            m.erase(m.begin() + i);
              i--;
              // The length gets decreased after erasing each element
              length--;
        }
    }
 
    for (int i = 0; i < count; i++) {
        //Inserting the zero into the vector
        m.push_back(0);
    }
    cout << "array after shifting zeros to the right side: "
         << endl;
    for (int i = 0; i < m.size(); i++) {
        // printing desired vector
        cout << m[i] << " ";
    }
}
// driver code
int main()
{
    vector<int> m{0,1,0,3,1,2};
    // function call
    move_zeros_to_right(m);
    return 0;
}
