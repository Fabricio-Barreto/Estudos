class Dessert
    attr_accessor :name, :calories

    def initialize(name, calories)
        @name = name
        @calories = calories
    end

    def healthy?
        if self.calories > 200
            puts "#{self.name} is more than or equal 200"
            return false
        else
            puts "#{self.name} is less than or equal 200"
            return true
        end
    end

    def delicious?
        puts "#{self.name} is delicious"
        return true
    end
end

class JellyBean < Dessert #Nota de estudo JellyBean < Dessert é uma super classe (JellyBean pega todos os metodos de Dessert).
    attr_accessor :name, :calories, :flavor

    def initialize(name, calories, flavor)
        @name = name
        @calories = calories
        @flavor = flavor
    end

    def delicious?
        if self.flavor == "black licorice"
            puts "#{self.name} isn't delicious"
            return false
        else
            puts "#{self.name} is delicious"
            return true
        end
    end
end

bolo = Dessert.new("bolo", 200)
teste = JellyBean.new("Teste", 201, "black licorice")



p bolo.healthy?
p teste.delicious?
p teste.healthy?