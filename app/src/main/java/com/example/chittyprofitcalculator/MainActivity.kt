package com.example.chittyprofitcalculator

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.example.chittyprofitcalculator.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        binding.button.setOnClickListener{calculateProfit()}
    }
    fun calculateProfit(){
        val no_of_mont=binding.noOfMonth.text.toString()
        val no_of_month= no_of_mont.toInt()
        val monthly_pa=binding.monthlyPay.text.toString()
        val monthly_pay= monthly_pa.toDouble()
        val months_pai=binding.monthsPaid.text.toString()
        val months_paid= months_pai.toInt()
        val auctioned_mone=binding.auctionedMoney.text.toString()
        val auctioned_money= auctioned_mone.toDouble()
        val rate_of_interest_f=binding.rateOfInterestFl.text.toString()
        val rate_of_interest_fl= rate_of_interest_f.toDouble()
        val rate_of_interest_ba=binding.rateOfInterestBal.text.toString()
        val rate_of_interest_bal= rate_of_interest_ba.toDouble()
        val future_liability=(no_of_month-months_paid)*monthly_pay
        val price_money=no_of_month*monthly_pay-auctioned_money
        val balance_price_money=price_money-future_liability
        val interest=((future_liability*rate_of_interest_fl)+(balance_price_money*rate_of_interest_bal))/100*(no_of_month-months_paid)/12
        val profit=interest-auctioned_money
        binding.profit.text=getString(R.string.profittxt,profit.toString())
    }
}