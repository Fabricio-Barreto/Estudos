def palindrome?(string)
	string.gsub!(/[-,'! ]/, '')
	string.downcase!
	puts string
	string == string.reverse
end

def count_words(string)
	string.strip.downcase.split(/[^\w']+/).group_by(&:to_s).map{|w| {w[0]=>w[1].count}} 
end


p palindrome?("A man, a plan, a canal -- Panama")
p palindrome?("Madam, I'm Adam!")
p palindrome?("Abracadabra")	
p palindrome?("bob") 

print count_words("A man, a plan, a canal -- Panama")