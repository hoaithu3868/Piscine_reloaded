find . -name '*.sh' | grep -o "[^/]*sh" | cut -d . -f 1
