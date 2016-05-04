

test_board: board.c board.h main.c game.c game.h
	gcc -Wall board.c main.c game.c -o test_board
