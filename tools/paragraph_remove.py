import sys
import os

def remove_duplicate_paragraphs(text):
    seen = set()
    result = []

    paragraphs = text.split("\n\n")
    for para in paragraphs:
        cleaned = para.strip()
        if cleaned not in seen:
            seen.add(cleaned)
            result.append(para)

    return "\n\n".join(result)

def main():
    if len(sys.argv) < 2:
        print("Usage: python remove_duplicate_paragraphs.py <input_file>")
        sys.exit(1)

    input_path = sys.argv[1]

    if not os.path.isfile(input_path):
        print(f"Error: File not found: {input_path}")
        sys.exit(1)

    with open(input_path, 'r', encoding='utf-8') as f:
        content = f.read()

    cleaned = remove_duplicate_paragraphs(content)

    print(cleaned)

if __name__ == "__main__":
    main()
