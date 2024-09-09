#!/usr/bin/python3
# User password validation

class User:
    def __init__(self, password):
        self.password = password

    def is_valid_password(self, password):
        return password == self.password

if __name__ == "__main__":
    user = User("test_password")
    print("Test User")
    assert(user.is_valid_password("test_password"))  # Should return True
    assert(not user.is_valid_password("wrong_password"))  # Should return False
