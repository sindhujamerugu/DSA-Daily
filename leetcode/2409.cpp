class Solution {
public:
int findDayofYear(string s,vector<int>cum)
{
    int mm=stoi(s.substr(0,2));
    int days=stoi(s.substr(3));
    return cum[mm-1]+days;
}
int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) 
{
        vector<int>d={31,28,31,30,31,30,31,31,30,31,30,31};
        vector<int>cum(13,0);
        for(int i=1;i<=12;i++)
        {
            cum[i]=cum[i-1]+d[i-1];
        }
        int a1=findDayofYear(arriveAlice,cum);
        int a2=findDayofYear(leaveAlice,cum);
        int b1=findDayofYear(arriveBob,cum);
        int b2=findDayofYear(leaveBob,cum);
        int ds=min(a2,b2)-max(a1,b1)+1;
        return ds<0?0:ds;
}
};