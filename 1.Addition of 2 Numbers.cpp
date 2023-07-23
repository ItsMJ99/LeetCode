class Solution {
public:
    int sum(int num1, int num2) {
        num1=num1>=-100?num1:0;
        num2=num2<=100?num2:0;
        return num1+num2;
    }
};