BUILD_TARGET    = flexsc

SRC_DIR		= src
LIB_DIR		= lib
INCLUDE_DIR	= include

default: libs headers

libs:
	$(MAKE) -C $(SRC_DIR)/ lib$(BUILD_TARGET).{a,so}
	mkdir -p $(LIB_DIR)/
	cp $(SRC_DIR)/*.{a,so} $(LIB_DIR)/ 2> /dev/null || :

headers:
	mkdir -p $(INCLUDE_DIR)/
	cp $(SRC_DIR)/*.h $(INCLUDE_DIR)/ 2> /dev/null || :

sample:
	$(MAKE) -C $(SRC_DIR)/ sample.out

test:
	$(MAKE) -C $(SRC_DIR)/ test.out
	./$(SRC_DIR)/test.out

clean:
	$(MAKE) -C $(SRC_DIR)/ clean
	rm -rf $(LIB_DIR)/
	rm -rf $(INCLUDE_DIR)/
