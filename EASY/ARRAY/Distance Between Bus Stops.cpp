class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total=0, path=0, n=distance.size();
        for(auto d : distance)
            total+=d;
        while(start != destination){
            path+=distance[start];
            start=(start+1)%n;
        }
        return (path < total-path) ? path : total-path;
    }
};