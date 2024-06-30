/* Hotel Management System Project */

#include <bits/stdc++.h>
using namespace std;

void RoomsInHotel(int &quantity,int &Qrooms,int &Srooms,int &Price_of_rooms){
cout << "\n Enter the number of rooms required : ";
        cin >> quantity;

        // Remaining number of rooms = Qrooms - Srooms
        if (Qrooms  >= quantity)
        {
            Srooms += quantity;

            // Price of a room = Rs. 2000
            // GST on room is 2%
            Price_of_rooms += (quantity * 2000) * 1.02;

            cout << "\n " << quantity << " Rooms are alloted to you" << endl;
            Qrooms-=quantity;
        }
        else
        {
            cout << "\n Only " << Qrooms  << " rooms are available in Hotel" << endl;
        }
        
}

void CookiesInHotel(int &quantity,int &Qcookies,int &Scookies,int &Price_of_cookies){
cout << "\n Enter the quantity of Cookies you want to ordered : ";
        cin >> quantity;

        // Remaining number of cookies = Qcookies - Scookies
        if (Qcookies >= quantity)
        {
            Scookies += quantity;

            // Price of a cookie = Rs. 50
            // GST on food items is 1%
            Price_of_cookies += (quantity * 50) * 1.01;

            cout << "\n " << quantity << " Cookies are ordred by you" << endl;
                Qcookies-=quantity;
        }
        else
        {
            cout << "\n Only " << Qcookies << " cookies are available in Hotel" << endl;
        }
        
}
void pizzasInHotel(int &quantity,int &Qpizzas,int &Spizzas,int &Price_of_pizzas){
    cout << "\n Enter the quantity of Pizzas you want to ordered : ";
        cin >> quantity;

        // Remaining number of pizzas = Qpizzas - Spizzas
        if (Qpizzas  >= quantity)
        {
            Spizzas += quantity;

            // Price of a pizza = Rs. 350
            // GST on food items is 1%
            Price_of_pizzas += (quantity * 350) * 1.01;

            cout << "\n " << quantity << " Pizzas are ordred by you" << endl;
                Qpizzas-=quantity;
        }
        else
        {
            cout << "\n Only " << Qpizzas  << " pizzas are available in Hotel" << endl;
        }
        
}
void BurgerInHotel(int &quantity,int &Qburgers,int &Sburgers,int &Price_of_burgers){
    cout << "\n Enter the quantity of Burgers you want to ordered : ";
        cin >> quantity;

        // Remaining number of burgers = Qburgers - Sburgers
        if (Qburgers  >= quantity)
        {
            Sburgers += quantity;

            // Price of a burger = Rs. 250
            // GST on food items is 1%
            Price_of_burgers += (quantity * 250) * 1.01;

            cout << "\n " << quantity << " Burgers are ordred by you" << endl;
        Qburgers-=quantity;
                
        }
        else
        {
            cout << "\n Only " << Qburgers  << " burgers are available in Hotel" << endl;
        }
}

void NoodlesInHotel(int &quantity,int &Qnoodles,int &Snoodles,int &Price_of_noodles){
    cout << "\n Enter the quantity of Noodles you want to ordered : ";
        cin >> quantity;

        // Remaining number of plate of noodles = Qnoodles - Snoodles
        if (Qnoodles  >= quantity)
        {
            Snoodles += quantity;

            // Price of a plate of noodles = Rs. 80
            // GST on food items is 1%
            Price_of_noodles += (quantity * 80) * 1.01;

            cout << "\n " << quantity << " Plate/Plates of noodles are ordred by you" << endl;
                Qnoodles-=quantity;
        }
        else
        {
            cout << "\n Only " << Qnoodles  << " plates of noodles are available in Hotel" << endl;
        }
        
}

void OrderedItems(int &Price_of_rooms,int &Price_of_cookies,int &Price_of_pizzas,int &Price_of_burgers,int &Price_of_noodles){
    cout << "\n Total price of rooms rented by you (Including GST) : " << Price_of_rooms;

        cout << "\n\n Details of your order";

        cout << "\n Total price of cookies ordered by you (Including GST) : " << Price_of_cookies;

        cout << "\n Total price of pizzas ordered by you (Including GST) : " << Price_of_pizzas;

        cout << "\n Total price of burgers ordered by you (Including GST) : " << Price_of_burgers;

        cout << "\n Total price of plates of noodles ordered by you (Including GST) : " << Price_of_noodles;

        cout << "\n\n\t Total Bill of the Hotel (Including GST) : " << Price_of_burgers + Price_of_cookies + Price_of_noodles + Price_of_pizzas + Price_of_rooms << endl;

        Price_of_burgers=0;
        Price_of_cookies=0;
        Price_of_noodles=0;
        Price_of_pizzas=0;
        Price_of_rooms=0;
}

int main()
{
    system("cls"); // to make the terminal clear
    int quantity;
    int choice;
    // Quantity of items
    int Qrooms = 0, Qcookies = 0, Qpizzas = 0, Qburgers = 0, Qnoodles = 0;
    // Sold Quantity
    int Srooms = 0, Scookies = 0, Spizzas = 0, Sburgers = 0, Snoodles = 0;
    // Price of items
    int Price_of_rooms = 0, Price_of_cookies = 0, Price_of_pizzas = 0, Price_of_burgers = 0, Price_of_noodles = 0;

    cout << "\n\t<--Quantity of items-->" << endl
         << endl;
    cout << "Total Rooms in Hotel \t:->\t ";
    cin >> Qrooms;
    cout << "Quantity of Cookies \t:->\t ";
    cin >> Qcookies;
    cout << "Quantity of Pizzas \t:->\t ";
    cin >> Qpizzas;
    cout << "Quantity of Burgers \t:->\t ";
    cin >> Qburgers;
    cout << "Quantity of Noodles \t:->\t ";
    cin >> Qnoodles;

m:
    cout << "\n\n If you want to rent room in Hotel!";
    cout << "\n 1) Rooms";
    cout << "\n\n Please select from the menu option to order food : ";
    cout << "\n 2) Cookies";
    cout << "\n 3) Pizza";
    cout << "\n 4) Burger";
    cout << "\n 5) Noodles";
    cout << "\n\n Total Order given by you";
    cout << "\n 6) Order";
    cout << "\n\n 7) Exit";

    cout << "\n\n Please enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        RoomsInHotel(quantity,Qrooms,Srooms,Price_of_rooms);
        break;

    case 2:
        CookiesInHotel(quantity,Qcookies,Scookies,Price_of_cookies);
      break;
    case 3:
        pizzasInHotel(quantity,Qpizzas,Spizzas,Price_of_pizzas);
        break;

    case 4:
        BurgerInHotel(quantity,Qburgers,Sburgers,Price_of_burgers);
        break;

    case 5:
        NoodlesInHotel(quantity,Qnoodles,Snoodles,Price_of_noodles);
        break;

    case 6:
        OrderedItems(Price_of_rooms,Price_of_cookies,Price_of_pizzas,Price_of_burgers,Price_of_noodles);
        break;

    case 7:
        exit(0);

    default:
        cout << "\n Not available";
    }
    // To transfer the control over menu to make more choices we use goto statement
    goto m;
    return 0;
}
