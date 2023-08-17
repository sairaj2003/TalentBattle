/*
Question – : There are two banks – Bank A and Bank B. Their interest rates vary. You have received offers from both banks in terms of the annual rate of interest, tenure, and variations of the rate of interest over the entire tenure.You have to choose the offer which costs you least interest and reject the other. Do the computation and make a wise choice.

The loan repayment happens at a monthly frequency and Equated Monthly Installment (EMI) is calculated using the formula given below :

EMI = loanAmount * monthlyInterestRate / ( 1 – 1 / (1 + monthlyInterestRate)^(numberOfYears * 12))

Constraints:

1 <= P <= 1000000
1 <=T <= 50
1<= N1 <= 30
1<= N2 <= 30
 

Input Format:

First line: P principal (Loan Amount)
Second line: T Total Tenure (in years).
Third Line: N1 is the number of slabs of interest rates for a given period by Bank A. First slab starts from the first year and the second slab starts from the end of the first slab and so on.
Next N1 line will contain the interest rate and their period.
After N1 lines we will receive N2 viz. the number of slabs offered by the second bank.
Next N2 lines are the number of slabs of interest rates for a given period by Bank B. The first slab starts from the first year and the second slab starts from the end of the first slab and so on.
The period and rate will be delimited by single white space.
Output Format: Your decision either Bank A or Bank B.

Explanation:

Example 1
Input
10000
20
3
5 9.5
10 9.6
5 8.5
3
10 6.9
5 8.5
5 7.9
Output: Bank B
Example 2
Input
500000
26
3
13  9.5
3  6.9
10  5.6
3
14  8.5
6  7.4
6  9.6
Output: Bank A

*/
#include <stdio.h>
#include <math.h>

int main() {
    int principalAmt;
    printf("\nEnter Principal Amt:");
    scanf("%d", &principalAmt);

    int time;
    printf("\nEnter Time period (in yrs):");
    scanf("%d", &time);

    int slabs1;
    printf("\nHow many slabs do you want for Bank 1:");
    scanf("%d", &slabs1);

    double totalInterestBank1 = 0.0; 

    for (int i = 0; i < slabs1; i++) 
    {
        int period1;
        double interest1;
        printf("\nEnter %d slab (Time Period and Interest):", i + 1);
        scanf("%d %lf", &period1, &interest1);
        double monthlyInterestRate1 = interest1 / 12.0;

        double emi1 = principalAmt * monthlyInterestRate1 / (1 - 1 / pow(1 + monthlyInterestRate1, period1 * 12));
        
        double interestAmount1 = emi1 * period1 * 12 - principalAmt;
        totalInterestBank1 += interestAmount1;
    }

    int slabs2;
    printf("\nHow many slabs do you want for Bank 2:");
    scanf("%d", &slabs2);

    double totalInterestBank2 = 0.0; 

    for (int i = 0; i < slabs2; i++) 
    {
        int period2;
        double interest2;
        printf("\nEnter %d slab (Time Period and Interest):", i + 1);
        scanf("%d %lf", &period2, &interest2);
        double monthlyInterestRate2 = interest2 / 12.0;

        double emi2 = principalAmt * monthlyInterestRate2 / (1 - 1 / pow(1 + monthlyInterestRate2, period2 * 12));
        
        double interestAmount2 = emi2 * period2 * 12 - principalAmt;
        totalInterestBank2 += interestAmount2;
    }

    if (totalInterestBank1 < totalInterestBank2) 
    {
        printf("\nBank A");
    } 
    else 
    {
        printf("\nBank B");
    }

    return 0;
}

/*
INPUT:
500000
26
3
13  9.5
3  6.9
10  5.6
3
14  8.5
6  7.4
6  9.6

Output BANK A
*/
