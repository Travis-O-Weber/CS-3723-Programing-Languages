Project1

Description

Project1 is a C++ application developed using Microsoft Visual Studio. The solution (Assignment1.sln) contains a single project (Project1), which is configured to build for both x64 and x86 architectures in Debug and Release modes.

Prerequisites

Microsoft Visual Studio 2022 (or later)

C++ Development Workload installed

Windows OS (for Visual Studio compatibility)

Project Structure

Assignment1.sln         # Visual Studio solution file
Project1/
 ├── Project1.vcxproj   # Visual Studio project file
 ├── Project1.vcxproj.filters  # Filters file (manages files in Solution Explorer)
 ├── Project1.vcxproj.user  # User-specific project settings

Build Instructions

Open Assignment1.sln in Visual Studio.

Select the desired build configuration (Debug or Release).

Choose the target platform (x64 or x86).

Click Build → Build Solution (Ctrl + Shift + B).

Running the Application

After building, the compiled executable can be found in:

Project1\x64\Debug\   # For Debug x64
Project1\x64\Release\ # For Release x64
Project1\x86\Debug\   # For Debug x86
Project1\x86\Release\ # For Release x86

Run the executable from the command line or within Visual Studio.
