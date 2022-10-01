class Solution:
    def capitalizeTitle(self, title):
        split_title = title.split(" ")
        print(split_title)
        for i in range(0, len(split_title)):
            if len(split_title[i])<=2:
                split_title[i] = split_title[i].lower()
            else:
                split_title[i] = split_title[i].title()
        return " ".join(split_title)

rohan = Solution()
title = "HELLO coders"
print(rohan.capitalizeTitle(title))