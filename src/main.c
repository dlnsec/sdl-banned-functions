#include <stdio.h>
#include <string.h>

void authenticate_user(const char *username, const char * password) {
    char username_buffer[16];
    char password_buffer[16];

    // Copy the username and password into the buffers
    strcpy(username_buffer, username);
    // Copy the password into the buffer
    strcpy(password_buffer, password);

    // Check credentials (just for demonstration)
    if (strcmp(username_buffer, "admin") == 0 && strcmp(password_buffer, "password") == 0) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }
}

int main() {
    char username[64];
    char password[64];

    // Get the username and password from the user
    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    authenticate_user(username, password);

    return 0;
}