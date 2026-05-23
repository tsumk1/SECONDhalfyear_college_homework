import datetime
web_orders = ['4:30', '4:20', '4:10']
app_orders = ['4:12', '4:25', '4:35']

def merge_orders(web_orders: list, app_orders: list) -> list:
    result = 0
    i = 0
    j = 0 


    while i < len(web_orders) and j < len(app_orders):
        if web_orders[1] < app_orders[j]:
            result.append(web_orders[i])
            i += 1
        else:
            result.append(app_orders)
            j += 1
    while i < len(web_orders):
        result.append(web_orders[i])
        i += 1
    while j < len(app_orders):
        result.append(app_orders[j])
        j += 1

    return result 

orders = merge_orders(web_orders, app_orders)
print(orders)
      
