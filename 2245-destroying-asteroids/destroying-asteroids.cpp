class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long val = mass;
        for(int i=0; i<asteroids.size();i++){
            if(val<asteroids[i]) return false;
            else val+=asteroids[i];
        }
        return true;

    }
};