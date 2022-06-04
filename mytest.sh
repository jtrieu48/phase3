#!/bin/bash

files=$(ls in)
inFolder="in"
outFolder="out"

test(){
    local input="$1"
    local file="$2"
    echo -e "---- Test $input ----"
    cat "$inFolder/"$file".min" | parser
    mil_run mil_code.mil <<< "$input" > "$outFolder/"$file".out"
    mil_run "$inFolder/"$file".mil" <<< "$input" > "$outFolder/"$file".real"
    diff -u "$outFolder/"$file".out" "$outFolder/"$file".real"
}

test_file(){
    file="$1"
    echo -e "\n============== $file ============\n"
    for i in {1..20}
    do
        test "$i" "$file"
    done
}

test_mytest(){
    file="mytest"

    echo -e "\n============== $file ============\n"

    test "1 1" "$file" 
    test "1 2" "$file"
    test "1 3" "$file"
    test "1 4" "$file"
    test "1 5" "$file"

    test "1 1" "$file"
    test "2 1" "$file"
    test "3 1" "$file"
    test "4 1" "$file"
    test "5 1" "$file"

    test "1 2" "$file"
    test "2 2" "$file"
    test "3 3" "$file"
    test "4 4" "$file"
    test "5 5" "$file"
}
test_file "primes"
test_file "fibonacci"
test_mytest