#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <vector>
#define big long long
#define iPair pair<big,big>
using namespace std;
const int limit = 100500;
struct cell{
    big start_t,finish_t,h_value;
};
typedef struct cell node;
struct guest{
    big entry,height,index;
};
typedef struct guest guest_node;
node crew[limit];
guest_node guest[limit];
bool ans[limit];

bool compare(node a,node b){
    return a.start_t<b.start_t;
}
bool compare2(guest_node a, guest_node b){
    return a.entry<b.entry;
}
int main() {
    big H,C,Q; scanf("%lld %lld %lld",&H,&C,&Q);
    big height,start,finish;
    for(int i=1;i<=C;++i){
        scanf("%lld %lld %lld",&height,&start,&finish);
        crew[i].start_t = start; crew[i].finish_t = finish;
        crew[i].h_value = height;
    }
    sort(crew+1,crew+C+1,compare);
    big time;
    for(int i=1;i<=Q;++i){
        scanf("%lld %lld",&height,&time);
        guest[i].index = i;
        guest[i].height = height;
        guest[i].entry = time;
    }
    sort(guest+1,guest+1+Q,compare2);

    priority_queue< iPair, vector <iPair> >  pq; /// sorted queue in decending oder
    int ptr = 1;
    for(int i=1;i<=Q;++i){
        while(ptr<=C && crew[ptr].start_t<=guest[i].entry)
        {  pq.push(make_pair(crew[ptr].h_value,crew[ptr].finish_t ));
            ++ptr;
        }

        while(!pq.empty() && pq.top().second<guest[i].entry)
            pq.pop();
        if(pq.empty())
            ans[guest[i].index] = true;
        else if(pq.top().first<guest[i].height)
            ans[guest[i].index] = true;
        else
            ans[guest[i].index] = false;
    }
    for(int i=1;i<=Q;++i)
    {if(ans[i])
            printf("YES\n");
    else
        printf("NO\n");
    }

    return 0;
}
