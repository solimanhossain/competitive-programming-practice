def defangIPaddr(address: str) -> str:
    new_address = ''
    for i in address:
        if i == '.': new_address += '[.]'
        else: new_address += i
    return new_address

address = "1.1.1.1"
print(defangIPaddr(address))

# https://leetcode.com/problems/defanging-an-ip-address/