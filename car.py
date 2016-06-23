class Car:

    def __init__(self, *args, **kwargs):
        if 'name' in kwargs:
            name = kwargs.pop('name')
        if 'brand' in kwargs:
            brand = kwargs.pop('brand')
        if 'nb_doors' in kwargs:
            nb_doors = kwargs.pop('nb_doors')
            
        if name  == None or not isinstance(name,str) or name == "":
            raise Exception("name is not a string")
        if brand  == None or not isinstance(brand,str) or brand == "":
            raise Exception("brand is not a string")
        if nb_doors  == None or not isinstance(nb_doors,int) or nb_doors <= 0:
            raise Exception("nb_doors is not > 0")
        
        self.__name = name
        self.__brand = brand
        self.__nb_doors = nb_doors
            
    def get_name(self):
        return self.__name

    def get_brand(self):
        return self.__brand

    def get_nb_doors(self):
        return self.__nb_doors

    def to_hash(self):
        return {
            'nb_doors' : self.__nb_doors,
            'name' : self.__name,
            'brand' : self.__brand
            }
        
    def __str__(self):
        return self.__name+" "+self.__brand+" "+str(self.__nb_doors)
            
