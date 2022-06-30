function f(x) do
    if x > 0 then
        return x ^ f(x - 1)
    end
    
    return x

    end
end

print(f(4))