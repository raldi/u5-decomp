# List unique calls to external functions from source file.
external-calls file:
    #!/bin/sh
    grep -o '\<func_0x[0-9A-Fa-f]\{8\}\>' {{file}} | sort | uniq

# List internal functions in a file
internal-calls file:
    #!/bin/sh
    grep -o '\<FUN_[0-9A-Fa-f]\{4\}\_[0-9A-Fa-f]\{4\}\>' {{file}} | sort | uniq
