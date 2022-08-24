cp ../../09/ex01/Makefile .
echo "Test 1"
make
echo "Test 2"
make all
echo "Test 3"
make libft.a
echo "Test 4"
make fclean
echo "Test 5"
make
make clean
make clean
rm libft.a
echo "Test 6"
make re
make fclean
rm Makefile
