//week10-4.cpp
//LeeCode 1399.Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100]={}; //硂柑,璶total瞷碭Ω(ノㄓ参璸total瞷Ω计)
        int largest=0; //癘魁[程ê竤]柑Τ碭计
        for(int i=1;i<=n;i++){ //1...n摸癹伴
            int now=i;//瞷璶ブ计
            int total=0; //伴玡total琌0
            while(now>0){
                //癹伴柑,рtotal癬ㄓ
                total+=now%10; //ブ,now跑
                now=now/10;
            }
            a[total]++;//癹伴,参璸total瞷Ω计
            if(a[total]>largest) largest=a[total];       
        }
        int ans=0; //程计êㄇ竤,Τ碭竤
        for(int i=0;i<100;i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};
