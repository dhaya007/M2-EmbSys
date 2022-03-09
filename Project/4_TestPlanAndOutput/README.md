# High Level Test Plan

| Test ID | Description | Excpeted Output | Actual Output | Pass/Fail |
|---------|-------------|-----------------|---------------|-----------|
| HLTP1 | Temperature | Will display the value | Will display the value | ✅ |
| HLTP2 | Step count | Will display the number of steps |  Will display the number of steps | ✅ |
| HLTP3 | LED | It should glow | It should glow | ✅ |
| HLTP4 | LCD Display | Should display all values |  Should display all values | ✅ |


# Low Level Test Plan

| HLTP | LLTP | Description | Input | Excpeted Output | Actual Output | Pass/Fail |
|------|------|-------------|-------|---------|---------------|-----------|
| HLTP1 | LLTP1 | Temperature | <26°C | LED should glow | LED should glow | ✅ |
| HLTP1 | LLTP1 | Temperature | 36°C - 42°C | Normal Temperature | Normal Temperature | ✅ |
| HLTP1 | LLTP1 | Temperature | >45°C | LED should glow | LED should glow | ✅ |
| HLTP2 | LLTP2 | Step count | Button | Should display the step count | Should display the step count | ✅ |
| HLTP3 | LLTP3 | LED | (<26°C) or ( >45°C) | It should glow | It should glow | ✅ |

