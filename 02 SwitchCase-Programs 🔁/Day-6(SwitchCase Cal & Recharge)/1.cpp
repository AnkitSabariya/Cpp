#include <iostream>
using namespace std;

int main() {
    int languageChoice, rechargeCompany, paymentMethod;
    
    cout << "Select Language:\n1. English\n2. Hindi\n3. Gujarati\n";
    cin >> languageChoice;
    
    switch (languageChoice) {
        case 1:
            cout << "Select Recharge Company:\n1. Airtel\n2. Jio\n3. VI\n";
            cin >> rechargeCompany;
            
            switch (rechargeCompany) {
                case 1:
                    cout << "Select Payment Method:\n1. UPI\n2. Credit Card\n3. Net Banking\n";
                    cin >> paymentMethod;
                    cout << "Airtel Recharge Done using option " << paymentMethod << endl;
                    break;
                case 2:
                    cout << "Select Payment Method:\n1. UPI\n2. Credit Card\n3. Net Banking\n";
                    cin >> paymentMethod;
                    cout << "Jio Recharge Done using option " << paymentMethod << endl;
                    break;
                case 3:
                    cout << "Select Payment Method:\n1. UPI\n2. Credit Card\n3. Net Banking\n";
                    cin >> paymentMethod;
                    cout << "VI Recharge Done using option " << paymentMethod << endl;
                    break;
                default:
                    cout << "Invalid Recharge Company\n";
            }
            break;

        case 2:
            cout << "रिचार्ज कंपनी चुनें:\n1. एयरटेल\n2. जिओ\n3. वीआई\n";
            cin >> rechargeCompany;
            
            switch (rechargeCompany) {
                case 1:
                    cout << "भुगतान विधि चुनें:\n1. यूपीआई\n2. क्रेडिट कार्ड\n3. नेट बैंकिंग\n";
                    cin >> paymentMethod;
                    cout << "एयरटेल रिचार्ज सफलतापूर्वक हुआ, विधि: " << paymentMethod << endl;
                    break;
                case 2:
                    cout << "भुगतान विधि चुनें:\n1. यूपीआई\n2. क्रेडिट कार्ड\n3. नेट बैंकिंग\n";
                    cin >> paymentMethod;
                    cout << "जिओ रिचार्ज सफलतापूर्वक हुआ, विधि: " << paymentMethod << endl;
                    break;
                case 3:
                    cout << "भुगतान विधि चुनें:\n1. यूपीआई\n2. क्रेडिट कार्ड\n3. नेट बैंकिंग\n";
                    cin >> paymentMethod;
                    cout << "वीआई रिचार्ज सफलतापूर्वक हुआ, विधि: " << paymentMethod << endl;
                    break;
                default:
                    cout << "अमान्य रिचार्ज कंपनी\n";
            }
            break;

        case 3:
            cout << "રીચાર્જ કંપની પસંદ કરો:\n1. એરટેલ\n2. જિઓ\n3. વી.આઈ.\n";
            cin >> rechargeCompany;
            
            switch (rechargeCompany) {
                case 1:
                    cout << "ચુકવણી પદ્ધતિ પસંદ કરો:\n1. યુપીઆઈ\n2. ક્રેડિટ કાર્ડ\n3. નેટ બેંકિંગ\n";
                    cin >> paymentMethod;
                    cout << "એરટેલ રીચાર્જ સફળતાપૂર્વક કરવામાં આવ્યું, પદ્ધતિ: " << paymentMethod << endl;
                    break;
                case 2:
                    cout << "ચુકવણી પદ્ધતિ પસંદ કરો:\n1. યુપીઆઈ\n2. ક્રેડિટ કાર્ડ\n3. નેટ બેંકિંગ\n";
                    cin >> paymentMethod;
                    cout << "જિઓ રીચાર્જ સફળતાપૂર્વક કરવામાં આવ્યું, પદ્ધતિ: " << paymentMethod << endl;
                    break;
                case 3:
                    cout << "ચુકવણી પદ્ધતિ પસંદ કરો:\n1. યુપીઆઈ\n2. ક્રેડિટ કાર્ડ\n3. નેટ બેંકિંગ\n";
                    cin >> paymentMethod;
                    cout << "વી.આઈ. રીચાર્જ સફળતાપૂર્વક કરવામાં આવ્યું, પદ્ધતિ: " << paymentMethod << endl;
                    break;
                default:
                    cout << "અમાન્ય રીચાર્જ કંપની\n";
            }
            break;

        default:
            cout << "Invalid Language Selection\n";
    }

    
