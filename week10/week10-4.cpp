//week10-4.cpp
//LeeCode 1399.Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100]={}; //�o��,�n��total�X�{�X��(�ΨӲέptotal�X�{����)
        int largest=0; //�O��[�̤j�����@�s]�̭����X�Ӽ�
        for(int i=1;i<=n;i++){ //1...n�H�����j��
            int now=i;//�{�b�n��֪��Ʀr
            int total=0; //��e��total�O0
            while(now>0){
                //�j���,��total�@���[�_��
                total+=now%10; //��֫�,now�ܤp�F
                now=now/10;
            }
            a[total]++;//�j��᭱,��έptotal���X�{����
            if(a[total]>largest) largest=a[total];       
        }
        int ans=0; //�̤j���ƨ��Ǹs,���X�s
        for(int i=0;i<100;i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};
