BUILD_DIR = build


all:
	cmake -S. -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

runs:
	./$(BUILD_DIR)/server
runc: 
	./$(BUILD_DIR)/client
