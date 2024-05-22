# cpp-cmake-dependency-management

An example on how to manage dependencies with CMAKE using the SFML library. Also it's an example to shw how to build in **DEBUG** , **RELEASE** modes.

## Debug build instructions

1. Create the build folder and `cd build` in the root directory of the project
2. Inside *build* folder create the build files `cmake ..`
3. Build the project `cmake --build .` (it generates a *src* inside *build* folder)
4. Copy the font file from root directory to the generated *src* folder inside *build* `cp ../media/Sansation.ttf ./src/media/`
5. Execute the project with `./example`

The executed project does have the instructions between `#if !NDEBUG` preprocessor directive, so it should display this message in terminal *Debug mode is ON* and a *DEBUG MODE* white text in front of the green circle.

##  Release build instructions

By default, the compiled code is in debug, so the compiler doesn't optimize the code and provides Debug symbols.

For a Release it's similar to the instructions in the previous section but with some changes.

1. Create the release folder and `cd release` in the root directory of the project
2. Inside *release* folder create the build files `cmake -S .. -B . -D CMAKE_BUILD_TYPE=Release`
3. Build the project `cmake --build . --config Release` (it generates a *src* inside *release* folder)
4. Copy the font file from root directory to the generated *src* folder inside *release* `cp ../media/Sansation.ttf ./src/release/`
5. Execute the project with `./example`

The executed project doesn't have the instructions between `#if !NDEBUG` preprocessor directive, so it should display this message in terminal *Debug mode is OFF* and should not display the *DEBUG MODE* text in front of the green circle.

## References

1. [Article about it in Elias Daler Blog](https://edw.is/using-cmake)

## Notes

If you see something can be improved or anything is wrong, please write an issue in the project, it helps me keeping improving!
