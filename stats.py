import math


class StatisticsCalculator:


    def __init__(self, numbers):

        self.numbers = numbers



    def calculate_mean(self):

        return sum(self.numbers)/len(self.numbers)



    def calculate_median(self):

        data = sorted(self.numbers)

        n = len(data)


        if n % 2 == 0:

            return (data[n//2-1]+data[n//2])/2


        return data[n//2]



    def calculate_mode(self):

        frequency = {}


        for num in self.numbers:

            frequency[num] = frequency.get(num,0)+1



        max_count = max(frequency.values())


        if max_count == 1:

            return "No mode"



        return [

            num for num,count in frequency.items()

            if count == max_count

        ]



    def calculate_range(self):

        return max(self.numbers)-min(self.numbers)



    def calculate_standard_deviation(self):

        avg = self.calculate_mean()


        variance = sum(

            (x-avg)**2 for x in self.numbers

        ) / len(self.numbers)


        return math.sqrt(variance)




numbers = [1,1,2,2,3]


calculator = StatisticsCalculator(numbers)



print("Numbers:", numbers)

print("Mean:", calculator.calculate_mean())

print("Median:", calculator.calculate_median())

print("Mode(s):", calculator.calculate_mode())

print("Range:", calculator.calculate_range())

print("Standard Deviation:",
      calculator.calculate_standard_deviation())
