LIBRARY_NAME="liball.a"

# Find all .c files in the current directory
C_FILES=$(ls *.c 2> /dev/null)
if [ -z "$C_FILES" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an object file
for FILE in $C_FILES; do
    gcc -c "$FILE" || { echo "Compilation failed for $FILE"; exit 1; }
done

# Create the static library from the object files
ar rcs "$LIBRARY_NAME" *.o || { echo "Failed to create the static library"; exit 1; }

# Index the static library
ranlib "$LIBRARY_NAME" || { echo "Failed to index the static library"; exit 1; }

# Clean up object files
rm *.o

echo "Static library $LIBRARY_NAME created successfully."
