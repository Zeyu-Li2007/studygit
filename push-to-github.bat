@echo off
chcp 65001 >nul 2>&1
setlocal enabledelayedexpansion

set "REPO=D:\code\studygit"

echo ============================================================
echo    Upload files to GitHub
echo    Repo: Zeyu-Li2007/studygit
echo ============================================================
echo.

if not exist "%REPO%\.git" (
    echo [X] Git repo not found: %REPO%
    echo     Edit REPO path inside this script.
    pause
    exit /b 1
)

cd /d "%REPO%"

echo [1/5] Fetching latest from GitHub...
git pull --rebase 2>&1
if errorlevel 1 (
    echo.
    echo [!] Pull failed or has conflicts.
    echo     Open VS Code and resolve, then run this again.
    pause
    exit /b 1
)

echo.
echo [2/5] Files that will be uploaded:
echo ------------------------------------------------------------
git status --short
echo ------------------------------------------------------------

set "CHANGED="
for /f "delims=" %%A in ('git status --porcelain 2^>nul') do set "CHANGED=1"

if not defined CHANGED (
    echo.
    echo   Nothing new or modified.
    echo   Put your files into: %REPO%
    echo   then run this script again.
    echo.
    pause
    exit /b 0
)

echo.
set "MSG="
set /p MSG="Commit message  (Enter = 'update files'): "
if "!MSG!"=="" set MSG=update files

echo.
echo [3/5] Staging files...
git add -A 2>&1
if errorlevel 1 (
    echo [!] git add failed
    pause
    exit /b 1
)

echo [4/5] Committing...
git commit -m "!MSG!" 2>&1
if errorlevel 1 (
    echo [!] commit failed
    pause
    exit /b 1
)

echo [5/5] Pushing to GitHub...
git push 2>&1
if errorlevel 1 (
    echo.
    echo [!] Push failed. Common causes:
    echo       - network blocked, try again
    echo       - single file larger than 100 MB, GitHub rejects it
    pause
    exit /b 1
)

echo.
echo ============================================================
echo    Done.
echo    View at: github.com/Zeyu-Li2007/studygit
echo ============================================================
echo.
pause
