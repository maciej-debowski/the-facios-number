def f(x)
    if x > 0 
        return x.pow(f(x - 1))
    else
        return x
    end 
end

puts f(4)