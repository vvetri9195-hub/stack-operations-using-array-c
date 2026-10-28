# Stack Operations Using an Array (C)

Array-based stack (SIZE = 5) with push, pop and display.

| File | Purpose |
|------|---------|
| `stack.c` | Original program from the assignment |
| `stack_modified.c` | Modified program (`push(70)` replaced by `pop()`) |
| `stack_improved.c` | Corrected version (isEmpty/isFull, safe pop) |
| `tests/test1_underflow_on_empty.c` | TC1 - pop from empty stack |
| `tests/test2_fill_then_overflow.c` | TC2 - fill to capacity then overflow |
| `tests/test3_reuse_after_empty.c` | TC3 - reuse stack after emptying |
| `tests/test4_sentinel_minus_one.c` | TC4 - pushing -1 vs. underflow code |

Build & run: `gcc -Wall -Wextra stack.c -o stack && ./stack`
