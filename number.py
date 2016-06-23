'''describe a Number Class'''
class Number:

    def __init__(self, value):
        self.__value = value


    def set_value(self,value):
        self.__value = value

    def get_value(self):
        return self.__value

    def __add__(self,other):
        return self.get_value()+other.get_value()

    def __str__(self):
        return str(self.__value)
