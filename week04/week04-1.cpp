//week04-1.cpp
//LeeCode 2529.MaXimum Count of positive Integer and Nefative Integer 
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        innt pos = 0, neg =0
        for( int i=0; i < nums.size();i++){
            if( num[i] > 0 ) pos++; // 正數++
            if( num[i] < 0 ) neg++; // 負數++
    }
    if( pos > neg ) return pos; // 正數比較大 送出去
    else return neg; // 不然就負數比較大
}