
/*
	Example 1:

	Input: strs = ["eat","tea","tan","ate","nat","bat"]
	Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

	Example 2:

	Input: strs = [""]
	Output: [[""]]
*/

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string >> res;
		map<map<char, int>, vector<string> > mp;
		for (int i = 0; i < strs.size(); ++i) {
			map<char, int> temp;
			for (int j = 0; j < strs[i].size(); ++j)
				temp[strs[i][j]]++;
			vector<string > temp1;
			temp1.push_back(strs[i]);
			if (mp.find(temp) != mp.end())
				mp[temp].push_back(strs[i]);
			else
				mp.insert({temp, temp1});
		}
		for (auto &i : mp)
			res.push_back(i.second);
		return res;
	}
};

