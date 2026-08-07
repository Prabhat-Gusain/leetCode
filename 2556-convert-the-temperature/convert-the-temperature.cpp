class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>temp;
        double k,f=0;

        k=celsius+273.15;
        f=celsius*1.80+32.00;

        temp.push_back(k);
        temp.push_back(f);

        return temp;
    }
};