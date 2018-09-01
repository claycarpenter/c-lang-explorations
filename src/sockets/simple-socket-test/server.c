#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>

#include "common.h"

int main(int argc, char* argv[]) {
  if (argc != 2)
  {
    printf("Invalid arguments, must supply port.\n");
    return PROG_ERROR;
  }

  int port = atoi(argv[1]);

  // Static message
  char message[256] = "ALL YOUR BASE ARE BELONG TO US";

  // Make connection on socket 9002
  int socket_fd = socket(AF_INET, SOCK_STREAM, 0);

  if (socket_fd == SOCKET_ERROR)
  {
    perror("[server] Socket create error");
    return PROG_ERROR;
  }

  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(port);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  int bind_result = bind(
    socket_fd,
    (struct sockaddr *) &server_addr,
    sizeof(server_addr)
  );

  if (bind_result == SOCKET_ERROR)
  {
    perror("[server] Socket bind error");
    return PROG_ERROR;
  }

  printf("[server] Waiting for clients on port %d.\n", port);

  // Wait for clients?
  listen(socket_fd, 3);

  // Accept client connection
  int client_socket_fd;
  client_socket_fd = accept(socket_fd, NULL, NULL);

  // Send message
  send(
    client_socket_fd,
    message,
    sizeof(message),
    0
  );

  printf("[server] Closing client socket.\n");
  close(client_socket_fd);
  printf("[server] Closing server socket.\n");
  if (close(socket_fd) == SOCKET_ERROR)
  {
    perror("[server] Socket close error");
    return PROG_ERROR;
  }

  printf("[server] Server done.\n");
  return 0;
}
