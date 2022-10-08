#issue 27
spword = "Special $#! characters   spaces 888323"
abc=''.join(e for e in spword if e.isalnum())
print(abc)