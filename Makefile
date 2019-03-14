SRC_DIR=src
TEST_DIR=tests
BUILD_DIR=build

CC=gcc
CFLAGS=-Wall -Wextra -Werror -I$(TEST_DIR) -I$(SRC_DIR)/arrays

TEST_SRCS=$(wildcard $(TEST_DIR)/*/*.c)
EXES=$(subst test_,,$(subst $(TEST_DIR)/,,$(subst .c,,$(TEST_SRCS))))

.PHONY: all
all: $(EXES)

%:
	@mkdir -p $(dir $(BUILD_DIR)/$@)
	@$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $(TEST_DIR)/$(dir $@)test_$(notdir $@).c $(SRC_DIR)/$@.c
	@./$(BUILD_DIR)/$@

.PHONY: clean
clean:
	@rm -rf $(BUILD_DIR)
