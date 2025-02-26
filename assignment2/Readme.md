Project2

Description

Project2 is a C++ application developed using Microsoft Visual Studio. The solution (assignment2.sln) contains a single project (Project2), which is configured to build for both x64 and x86 architectures in Debug and Release modes.

Prerequisites

Microsoft Visual Studio 2022 (or later)

C++ Development Workload installed

Windows OS (for Visual Studio compatibility)

Project Structure

assignment2.sln         # Visual Studio solution file
Project2/
 ├── Project2.vcxproj   # Visual Studio project file
 ├── Project2.vcxproj.filters  # Filters file (manages files in Solution Explorer)
 ├── Project2.vcxproj.user  # User-specific project settings

Build Instructions

Open assignment2.sln in Visual Studio.

Select the desired build configuration (Debug or Release).

Choose the target platform (x64 or x86).

Click Build → Build Solution (Ctrl + Shift + B).

Running the Application

After building, the compiled executable can be found in:

Project2\x64\Debug\   # For Debug x64
Project2\x64\Release\ # For Release x64
Project2\x86\Debug\   # For Debug x86
Project2\x86\Release\ # For Release x86

Run the executable from the command line or within Visual Studio.
