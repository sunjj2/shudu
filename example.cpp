//
// Created by Administrator on 24-9-21.
//
#include "example.h"
#include <map>
#include <bits/ranges_algo.h>
#include <algorithm>


class Solution {
public:
    vector<int> advantageCount(vector<int> &nums1, vector<int> &nums2) {
        sort(nums1.begin(), nums1.end());
        vector<int> ans;
        vector<bool> used(nums1.size(), false);
        for (int i = 0; i < nums2.size(); i++) {
            for (int j = 0; j < nums1.size(); j++) {
                if (nums1[i] < nums2[j] && !used[j]) {
                    used[j] = true;
                    ans.push_back(nums1[j]);
                    break;;
                }
            }}return ans;
    }
};int main() {
    Solution s;
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {1, 10, 4, 11};
    vector<int> res = s.advantageCount(nums1, nums2);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}
