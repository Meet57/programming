def reverseInParentheses(s):
    for i in range(len(s)):
        if s[i] == "(":
            start = i
        if s[i] == ")":
            end = i
            return reverseInParentheses(s[:start] + s[start + 1:end][::-1] + s[end + 1:])
    return s


s = "foo(bar(baz))blim"

print(reverseInParentheses(s))
