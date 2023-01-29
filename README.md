# From C to C++ compile time analysis

This repo contains code samples from the [FromCtoCpptoRust](https://github.com/codereport/Content/tree/main/Talks/2022-12-YouTube/FromCtoCpptoRust) repo and [YouTube video](https://youtu.be/wGCWlI4A5z4) by Conor Hoekstra ([GitHub](https://github.com/codereport), [Twitter](https://twitter.com/code_report)).

## Building

For each example use:

```bash
cmake -B build -DCMAKE_BUILD_TYPE=<Debug/Release> # -G Ninja (for faster builds)
time cmake --build build
```

> Note: For the `fmt` example, the library has to be built first as an external dependency. First navigate to [third-party](/7-fmt/third-party/) and run `cmake -B build`, then `cmake --build build` - this will build and install `fmt` locally. Then go back to [7-fmt](/7-fmt/) and run `cmake -B build -DCMAKE_PREFIX_PATH=$(pwd)/third-party/build` and `cmake --build build` to compile. You can use `%cd%` instead of `$(pwd)` on Windows.
>
> Note: [`Measure-Command { <command> }`](https://learn.microsoft.com/en-us/powershell/module/microsoft.powershell.utility/measure-command?view=powershell-7.3) can be used on Windows from Powershell instead of `time`.
