import re 
# pattern = "is"
pattern = r"[A-Z]+yclone" # r means row string means not parse the row string character like \n and escape sequence characters
text = '''Wikipedia[note 3] is a free-content online encyclopedia written and maintained by a community of volunteers, collectively known as Cyclone Wikipedians, through open collaboration and using a wiki-based editing system called MediaWiki. pyclone Myclone Wikipedia is the largest and most-read reference work in history,[3][4] and has consistently been one of the 10 most popular websites.[5] Founded by Jimmy Wales and Larry Sanger on January 15, 2001, it is hosted by the Wikimedia Foundation, an American nonprofit organization.
'''
# match = re.search(pattern, text) #it stops on first search 
# print(match)

matches = re.finditer(pattern, text)
for match in matches:
    # print(match)
    # print(match.span())
    # print(type(match.span()))
    print(text[match.span()[0] : match.span()[1]])
