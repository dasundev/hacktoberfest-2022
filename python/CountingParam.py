def param_count(*args):
    if len(args) > 0:
        return len(args)
    else:
        return 0


print(param_count())