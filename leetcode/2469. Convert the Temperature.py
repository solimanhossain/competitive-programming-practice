def convertTemperature(Celsius: float) -> List[float]:
    Kelvin = Celsius + 273.15
    Fahrenheit = Celsius * 1.80 + 32.00
    return [Kelvin, Fahrenheit]

celsius = 36.50
print(convertTemperature(celsius))

# https://leetcode.com/problems/convert-the-temperature/