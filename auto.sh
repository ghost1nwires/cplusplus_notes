base_dir="Chapp13"

# Check if the base directory exists
if [ ! -d "$base_dir" ]; then
  echo "❌ Error: Directory '$base_dir' not found."
  exit 1
fi

echo "📁 Scanning subfolders under '$base_dir'..."

# Loop through every subdirectory
for dir in "$base_dir"/*/; do
  # Skip if no folders found
  [ -d "$dir" ] || continue

  readme="$dir/README.md"
  folder_name=$(basename "$dir")

  # Check if README.md already exists
  if [ ! -f "$readme" ]; then
    echo "📝 Creating $readme..."
    echo "# Chapter $folder_name" > "$readme"
    echo "" >> "$readme"
    echo "This folder contains materials for Chapter $folder_name." >> "$readme"
  else
    echo "⚡ Skipping '$folder_name' — README already exists."
  fi
done

echo "✅ All done!"