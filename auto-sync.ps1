$ErrorActionPreference = "Continue"
$repo = Split-Path -Parent $MyInvocation.MyCommand.Path
Set-Location -LiteralPath $repo

while ($true) {
    $changes = git status --porcelain

    if ($changes) {
        git add --all
        $timestamp = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
        git commit -m "Auto-sync $timestamp"

        if ($LASTEXITCODE -eq 0) {
            git push origin main
        }
    }

    Start-Sleep -Seconds 2
}
