FROM ghcr.io/battleofthebots/botb-base-image:ubuntu-20.04-defcon-2023

USER user

WORKDIR /home/user

COPY echo.c .
COPY Makefile .

RUN make

RUN rm echo.c Makefile

EXPOSE 9000
CMD ["socat", "-T60", "TCP-LISTEN:9000,reuseaddr,fork", "EXEC:/home/user/echo"]