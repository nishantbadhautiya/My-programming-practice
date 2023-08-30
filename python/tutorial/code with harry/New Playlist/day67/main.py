class Library:
    def __init__(self):
        self.no_of_books = 0
        self.books = []

    def add_book(self, book_name):
        self.books.append(book_name)
        self.no_of_books += 1

    def get_no_of_books(self):
        return self.no_of_books

    def print_books(self):
        print("Books in the library:")
        for book in self.books:
            print(book)


# Create a library
my_library = Library()

# Add books
my_library.add_book("Book 1")
my_library.add_book("Book 2")
my_library.add_book("Book 3")

# Print the number of books
print("Number of books in the library:", my_library.get_no_of_books())

# Print all books
my_library.print_books()
