class Solution {
public:
    double angleClock(int hour, int minutes) {
        double m=minutes*6;
        double h=(0.5*minutes)+((hour%12)*30);
        return min(abs(m-h),360-abs(m-h));
    }
};
