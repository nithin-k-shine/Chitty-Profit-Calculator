// Created by nithi on 04-05-2021.
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    float no_of_month,months_paid,monthly_pay,price_money,auctioned_money,rate_of_interest_fl,rate_of_interest_bal,future_liability,balance_price_money,interest;
    cout<<"Enter no of months to be paid:";
    cin>>no_of_month;
    cout<<"Enter monthly pay:";
    cin>>monthly_pay;
    cout<<"Enter no of months paid:";
    cin>>months_paid;
    future_liability=(no_of_month-months_paid)*monthly_pay;
    cout<<"Enter auctioned money:";
    cin>>auctioned_money;
    price_money=no_of_month*monthly_pay-auctioned_money;
    balance_price_money=price_money-future_liability;
    cout<<"Enter Interest when deposited for future liability:";
    cin>>rate_of_interest_fl;
    cout<<"Enter Interest when deposited for balance price money:";
    cin>>rate_of_interest_bal;
    interest=((future_liability*rate_of_interest_fl)+(balance_price_money*rate_of_interest_bal))/100*(no_of_month-months_paid)/12;
    cout<<"\nno of months to be paid:"<<no_of_month;
    cout<<"\nmonthly pay:"<<monthly_pay;
    cout<<"\nFuture liability="<<future_liability;
    cout<<"\nauctioned money:"<<auctioned_money;
    cout<<"\nprice money:"<<price_money;
    cout<<"\nRate of Interest for future liability:"<<rate_of_interest_fl;
    cout<<"\nRate of Interest for balance price money:"<<rate_of_interest_bal;
    cout<<"\nbalance priced money:"<<balance_price_money;
    cout<<"\nInterest:";
    printf("%.3f",interest);
    cout<<"\nprofit="<<interest-auctioned_money;
    return 0;
}