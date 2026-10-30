#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:

    Product()
    {
        productCode = "";
        productName = "";
        price = 0;
        quantityInStock = 0;
    }


    void setProductCode(string code)
    {
        productCode = code;
    }

    void setProductName(string name)
    {
        if (name != "")
        {
            productName = name;
        }
        else
        {
            cout << "Invalid product name." << endl;
        }
    }

    void setPrice(double amount)
    {
        if (amount >= 0)
        {
            price = amount;
        }
        else
        {
            cout << "Price cannot be negative." << endl;
        }
    }

    void setQuantityInStock(int quantity)
    {
        if (quantity >= 0)
        {
            quantityInStock = quantity;
        }
        else
        {
            cout << "Quantity cannot be negative." << endl;
        }
    }


    string getProductCode()
    {
        return productCode;
    }

    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantityInStock()
    {
        return quantityInStock;
    }
};


void GetProductData(Product &product)
{
    string code;
    string name;
    double price;
    int quantity;

    cout << "Enter product code: ";
    getline(cin >> ws, code);

    cout << "Enter product name: ";
    getline(cin, name);

    while (name == "")
    {
        cout << "Name cannot be empty. Enter again: ";
        getline(cin, name);
    }

    cout << "Enter price: R";
    cin >> price;

    while (price < 0)
    {
        cout << "Invalid price. Enter again: R";
        cin >> price;
    }

    cout << "Enter quantity in stock: ";
    cin >> quantity;

    while (quantity < 0)
    {
        cout << "Invalid quantity. Enter again: ";
        cin >> quantity;
    }

    // Store the values using setters
    product.setProductCode(code);
    product.setProductName(name);
    product.setPrice(price);
    product.setQuantityInStock(quantity);
}


void DisplayProduct(Product product)
{
    cout << fixed << setprecision(2);

    cout << "Product Code: "
         << product.getProductCode() << endl;

    cout << "Product Name: "
         << product.getProductName() << endl;

    cout << "Price: R"
         << product.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product.getQuantityInStock() << endl;
}


void prodCompare(Product product1, Product product2)
{
    string name1 = product1.getProductName();
    string name2 = product2.getProductName();

    if (name1 == "" || name2 == "")
    {
        cout << "Cannot compare empty product names." << endl;
    }
    else if (name1[0] == name2[0])
    {
        cout << "Both product names start with the same character."
             << endl;
    }
    else
    {
        cout << "The product names start with different characters."
             << endl;
    }
}

int main()
{

    Product product1;
    Product product2;

    cout << "ENTER PRODUCT 1" << endl;
    GetProductData(product1);

    cout << "\nENTER PRODUCT 2" << endl;
    GetProductData(product2);

    cout << "\nPRODUCT 1 DETAILS" << endl;
    DisplayProduct(product1);

    cout << "\nPRODUCT 2 DETAILS" << endl;
    DisplayProduct(product2);

    cout << "\nCOMPARE PRODUCT NAMES" << endl;
    prodCompare(product1, product2);

    return 0;
}
