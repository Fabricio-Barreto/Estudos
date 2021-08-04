def combine_anagrams(words)
    result = {}
    anagram = []

    words.each do |word|
        key = word.split("").sort.join
        if result.has_key?(key)
            result[key].push(word)
        else
            result[key] = [word]
        end
    end

    result.each do |res|
        anagram.push(res)
    end

    print anagram

    puts ""

    puts result

end




list =  ['cars', 'for', 'potatoes', 'racs', 'four','scar', 'creams',
    'scream']

combine_anagrams(list)