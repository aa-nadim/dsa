s = "Abdul Awal Nadim"
st = []
l=len(s)
for i in range(l):
    st.append(s[i])
s = ""
for i in range(l):
    s += st.pop()

print(s)