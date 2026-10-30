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
    // Default constructor
    Product()
    {
        productCode = "";
        productName = "";
        price = 0;
        quantityInStock = 0;
    }

    // Setters
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

    // Getters
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

int main()
{
    // Create an object using the default constructor
    Product product;

    cout << fixed << setprecision(2);

    // First set of product information
    product.setProductCode("P101");
    product.setProductName("Wireless Mouse");
    product.setPrice(249.99);
    product.setQuantityInStock(15);

    cout << "Product Code: " << product.getProductCode() << endl;
    cout << "Product Name: " << product.getProductName() << endl;
    cout << "Price: R" << product.getPrice() << endl;
    cout << "Quantity in Stock: "
         << product.getQuantityInStock() << endl;

    cout << endl;

    // Second set of product information
    product.setProductCode("P102");
    product.setProductName("Keyboard");
    product.setPrice(199.50);
    product.setQuantityInStock(10);

    cout << "Product Code: " << product.getProductCode() << endl;
    cout << "Product Name: " << product.getProductName() << endl;
    cout << "Price: R" << product.getPrice() << endl;
    cout << "Quantity in Stock: "
         << product.getQuantityInStock() << endl;

    return 0;
}
