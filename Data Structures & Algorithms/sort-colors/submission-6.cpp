class Solution {
public:
    void sortColors(vector<int>& arr) {
        int i=0, l=0, r = arr.size()-1;

        while(i<=r) {
            if (arr[i] == 0) {
                swap(arr[i],arr[l]);
                // i++;
                l++;
            }

            else if (arr[i] == 2) {
                swap(arr[i],arr[r]);
                i--;
                r--;
            }

            for (int j=0 ; j<arr.size(); j++) cout << arr[j] << " ";
            cout << endl;

            i++;
        }
    }
};