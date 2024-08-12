#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *message, const char *file_name);
void copy_file(const char *source, const char *destination);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}

void print_error(int code, const char *message, const char *file_name) {
    dprintf(STDERR_FILENO, message, file_name);
    exit(code);
}

void copy_file(const char *source, const char *destination) {
    int fd_from;
    int fd_to;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    ssize_t bytes_written;

    fd_from = open(source, O_RDONLY);
    if (fd_from < 0) {
        print_error(98, "Error: Can't read from file %s\n", source);
    }

    fd_to = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd_to < 0) {
        print_error(99, "Error: Can't write to %s\n", destination);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written < 0) {
            print_error(99, "Error: Can't write to %s\n", destination);
        }
    }

    if (bytes_read < 0) {
        print_error(98, "Error: Can't read from file %s\n", source);
    }

    if (close(fd_from) < 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) < 0) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
}

