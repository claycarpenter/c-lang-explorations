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

  // Make connection on socket 9002
  int socket_fd = socket(AF_INET, SOCK_STREAM, 0);

  if (socket_fd == SOCKET_ERROR)
  {
    perror("[client] Socket create error");
    return PROG_ERROR;
  }

  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(port);
  server_addr.sin_addr.s_addr = INADDR_ANY;

  int conn_status = connect(
    socket_fd,
    (struct sockaddr *) &server_addr,
    sizeof(server_addr)
  );

  if (conn_status == SOCKET_ERROR)
  {
    perror("[client] Connection error");
  }

  printf("[client] Connected to server on port %d\n", port);

  // Receive data
  char server_resp[256];
  recv(
    socket_fd,
    &server_resp,
    sizeof(server_resp),
    0
  );

  printf("[client] Server response: %s\n", server_resp);

  printf("[client] Client closing socket.\n");
  if (close(socket_fd) == SOCKET_ERROR)
  {
    perror("[client] Socket close error");
    return PROG_ERROR;
  }

  printf("[client] Client done.\n");
  return 0;
}
