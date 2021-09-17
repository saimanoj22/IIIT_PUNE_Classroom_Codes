groceryList = {'Rice':[5,300], 'Wheat':[2,100], 'Flour':[2,250], 'Cereals':[3,100], 'Meat':[1,200], 'Eggs':[10,55], 'Milk':[2,25], 'Oil':[1,150], 'Drinks':[1,20], 'Chips':[5,25]}
print("\n=============GROCERY LIST=============\n{:<10} {:<10} {:<10}".format('ITEM','QUANTITY','PRICE'))
for key, value in groceryList.items():
    item, (quantity, price) = key, value
    print("{:<10} {:<10} {:<10}".format(item,quantity,price))
shoppingList = {'Rice':2, 'Wheat':2, 'Cereals':6, 'Meat':2, 'Oil':2}
totalPrice = 0
print("\n=============BILL=============\n{:<10} {:<10} {:<10}".format('ITEM','QUANTITY','PRICE'))
for key, value in shoppingList.items():
    item, quantity = key, value
    if key in groceryList:
        totalPrice += (groceryList[key][1] / groceryList[key][0]) * value
        price = (groceryList[key][1] / groceryList[key][0]) * value
        print("{:<10} {:<10} {:<10}".format(item,quantity,price))

print("\nTotal Bill :",totalPrice)
print("Total Bill with added GST(20%) :", totalPrice + (0.20*totalPrice))