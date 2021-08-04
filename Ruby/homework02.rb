class WrongNumberOfPlayersError < StandardError ; end
class NoSuchStrategyError < StandardError ; end

def rps_game_winner (game)
    raise WrongNumberOfPlayerError unless game.length == 2

    if ["P", "S", "R"].include?(game[0][1])
        puts "#{game[0][0]} chose #{game[0][1]}"        
    else
        NoSuchStrategyErro
    end

    if ["P", "S", "R"].include?(game[0][1])
        puts "#{game[1][0]} chose #{game[1][1]}"    
    else
        NoSuchStrategyErro
    end

    if game[0][1] == "P" && game[1][1] == "P" || game[0][1] == "S" && game[1][1] == "S" || game[0][1] == "R" && game[1][1] == "R"
        puts "#{game[0][0]} is the winner"
    elsif game[0][1] == "P" && game[1][1] == "R" || game[0][1] == "S" && game[1][1] == "P" || game[0][1] == "R" && game[1][1] == "S"
        puts "#{game[0][0]} is the winner"
    else
        puts "#{game[1][0]} is the winner"
    end

    puts ""

end

jogadores01 = [ [ "Kristen", "R" ], [ "Pam", "P" ] ]
jogadores02 = [ [ "Kristen", "R" ], [ "Pam", "R" ] ]
jogadores03 = [ [ "Kristen", "P" ], [ "Pam", "S" ] ]
jogadores04 = [ [ "Kristen", "S" ], [ "Pam", "R" ] ]
jogadores05 = [ [ "Kristen", "P" ], [ "Pam", "R" ] ]

rps_game_winner(jogadores01)
rps_game_winner(jogadores02)
rps_game_winner(jogadores03)
rps_game_winner(jogadores04)
rps_game_winner(jogadores05)