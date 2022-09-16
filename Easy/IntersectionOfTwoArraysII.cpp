class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mymap1;
        map<int, int> mymap2;
        map<int, int>::iterator it;
        vector<int> v;
        int N1 = nums1.size();
        int N2 = nums2.size();
        for(int i = 0; i < N1; i++){
            if(mymap1.find(nums1[i]) == mymap1.end())
                mymap1.insert({nums1[i], 1});
            else
                mymap1[nums1[i]]++;
        }
        for(int i = 0; i < N2; i++){
            if(mymap2.find(nums2[i]) == mymap2.end())
                mymap2.insert({nums2[i], 1});
            else
                mymap2[nums2[i]]++;
        }
        int L1 = mymap1.size();
        int L2 = mymap2.size();
        if(L1 <= L2){
            for(it = mymap1.begin(); it != mymap1.end(); it++){
                if(mymap2.find(it->first) != mymap2.end()){
                    if(it->second <= mymap2[it->first]){
                        int L = it->second;
                        while(L > 0){
                            v.push_back(it->first);
                            L--;
                        }
                    }
                    else{
                        int L = mymap2[it->first];
                        while(L > 0){
                            v.push_back(it->first);
                            L--;
                        }
                    }
                }
            }
        }
        else{
            for(it = mymap2.begin();  it != mymap2.end(); it++){
                if(mymap1.find(it->first) != mymap1.end()){
                    if(it->second <= mymap1[it->first]){
                        int L = it->second;
                        while(L > 0){
                            v.push_back(it->first);
                            L--;
                        }
                    }
                    else{
                        int L = mymap1[it->first];
                        while(L > 0){
                            v.push_back(it->first);
                            L--;
                        }
                    }
                }
            }
        }
        return v;
    }
};
