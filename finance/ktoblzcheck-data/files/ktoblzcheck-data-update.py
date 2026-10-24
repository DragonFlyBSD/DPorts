#!/usr/bin/env python3

import argparse
import concurrent.futures
import os
import re
import subprocess
import sys
import tarfile
import tempfile
import textwrap
from datetime import datetime

import requests
from bs4 import BeautifulSoup

# Globals
BANK_WEBSITE_HOST = "https://www.bundesbank.de"
BANK_WEBSITE_PATH = "/de/aufgaben/unbarer-zahlungsverkehr/serviceangebot/bankleitzahlen/download-bankleitzahlen-602592"
BANK_WEBSITE_URL_DE = f"{BANK_WEBSITE_HOST}{BANK_WEBSITE_PATH}"
BANK_WEBSITE_SEPA_URL = f"{BANK_WEBSITE_HOST}/scl-directory"
BANK_WEBSITE_URL_CH = "https://api.six-group.com/api/epcd/bankmaster/v3/bankmaster_V3.csv"
BANK_WEBSITE_URL_NL = "https://www.betaalvereniging.nl/wp-content/uploads/BIC-lijst-NL.xlsx"

# Standard browser User-Agent to bypass basic 403 blocks
HEADERS = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0 Safari/537.36'
}

def download_file(url, dest, quiet):
    if not quiet:
        print(f"Downloading {url} -> {dest}")
    response = requests.get(url, headers=HEADERS, stream=True, timeout=30)
    response.raise_for_status()
    with open(dest, 'wb') as f:
        for chunk in response.iter_content(chunk_size=8192):
            f.write(chunk)

def set_tarinfo(tarinfo):
    tarinfo.uid = 0
    tarinfo.gid = 0
    tarinfo.uname = "root"
    tarinfo.gname = "root"
    return tarinfo

def update_makefile(makefile_path, start_date, end_date, quiet):
    """Parses and updates the BANKDATA dates in the port Makefile."""
    if not os.path.exists(makefile_path):
        if not quiet:
            print(f"Warning: Makefile not found at {makefile_path}. Skipping update.")
        return False

    with open(makefile_path, 'r') as f:
        content = f.read()

    # Capture the variable name, the '=', and ANY optional whitespace ([ \t]*).
    # Discard whatever garbage (.*) comes after it until the end of the line ($).
    new_content = re.sub(r'^(BANKDATA_START_DATE=[ \t]*).*$', rf'\g<1>{start_date}', content, flags=re.MULTILINE)
    new_content = re.sub(r'^(BANKDATA_END_DATE=[ \t]*).*$', rf'\g<1>{end_date}', new_content, flags=re.MULTILINE)

    if content != new_content:
        with open(makefile_path, 'w') as f:
            f.write(new_content)
        if not quiet:
            print(f"Updated Makefile variables: BANKDATA_START_DATE={start_date}, BANKDATA_END_DATE={end_date}")
        return True
    else:
        if not quiet:
            print("Makefile variables are already up to date.")
        return False

def main():
    parser = argparse.ArgumentParser(description="Update ktoblzcheck bank data and Makefile.")
    parser.add_argument("-m", "--makefile", default=None, help="Path to the Makefile to update. If omitted, skipped.")
    parser.add_argument("-o", "--outdir", default=os.getcwd(), help="Directory to output the tarball (default: current directory).")
    parser.add_argument("-q", "--quiet", action="store_true", help="Run in quiet mode.")
    parser.add_argument("-s", "--suffix", default=".tar.gz", help="Compression suffix to use (e.g., .tar.gz, .tar.xz).")
    args = parser.parse_args()

    os.makedirs(args.outdir, exist_ok=True)

    # Scrape the Bundesbank website for URLs and timestamps
    if not args.quiet:
        print(f"Fetching {BANK_WEBSITE_URL_DE}...")
    try:
        res = requests.get(BANK_WEBSITE_URL_DE, headers=HEADERS, timeout=15)
        res.raise_for_status()
        soup = BeautifulSoup(res.text, "html.parser")
    except requests.RequestException as e:
        print(f"ERROR: Fetching Bundesbank website failed: {e}", file=sys.stderr)
        sys.exit(1)

    link_tag = soup.find('a', href=re.compile(r'blz-aktuell-txt-data\.txt$'))
    if not link_tag:
        print("ERROR: Could not find bank data URL on the website.", file=sys.stderr)
        sys.exit(1)

    bankdata_url = BANK_WEBSITE_HOST + link_tag['href']

    # Extract dates by searching the surrounding text block
    parent_container = link_tag.find_parent('div')
    search_text = parent_container.get_text(separator=" ") if parent_container else soup.get_text()

    dates = re.findall(r'(\d{2}\.\d{2}\.\d{4})', search_text)
    if len(dates) < 2:
         dates = re.findall(r'(\d{2}\.\d{2}\.\d{4})', soup.get_text())

    if len(dates) < 2:
         print("ERROR: Could not extract start and end timestamps.", file=sys.stderr)
         sys.exit(1)

    try:
        dt_start = datetime.strptime(dates[0], "%d.%m.%Y")
        dt_end = datetime.strptime(dates[1], "%d.%m.%Y")
    except ValueError as e:
         print(f"ERROR: Date parsing failed - {e}", file=sys.stderr)
         sys.exit(1)

    # Format dates
    timestamp = dt_start.strftime("%Y%m%d")
    timestamp_end_raw = dt_end.strftime("%Y%m%d")
    timestamp_start_str = dt_start.strftime("%Y-%m-%d")
    timestamp_end_str = dt_end.strftime("%Y-%m-%d")

# Update Makefile only if a path was explicitly provided
    if args.makefile:
        update_makefile(args.makefile, timestamp, timestamp_end_raw, args.quiet)
    else:
        if not args.quiet:
            print("No Makefile path provided (-m). Skipping Makefile update.")

    # Set up final tarball path
    datadir_rel = f"ktoblzcheck-bankdata-{timestamp}"
    tar_filename = f"{datadir_rel}{args.suffix}"
    tar_path = os.path.join(args.outdir, tar_filename)

    # Check if tarball exists before downloading
    if os.path.exists(tar_path):
         if not args.quiet:
             print(f"Tarball {tar_path} is already current. Nothing to do.")
         sys.exit(0)

    # Use a temporary directory for safe downloading and building
    with tempfile.TemporaryDirectory() as tmpdirname:
        datadir = os.path.join(tmpdirname, datadir_rel)
        os.makedirs(datadir)

        blz_file = os.path.join(datadir, f"blz_{timestamp}.txt")
        readme_file = os.path.join(datadir, "README")

        # Concurrent downloads
        downloads = [
            (bankdata_url, blz_file),
            (BANK_WEBSITE_SEPA_URL, os.path.join(datadir, f"sepa_{timestamp}.txt")),
            (BANK_WEBSITE_URL_CH, os.path.join(datadir, "ch_data.txt")),
            (BANK_WEBSITE_URL_NL, os.path.join(datadir, "nl_data.xlsx"))
        ]

        try:
            with concurrent.futures.ThreadPoolExecutor(max_workers=4) as executor:
                futures = [executor.submit(download_file, url, dest, args.quiet) for url, dest in downloads]
                for future in concurrent.futures.as_completed(futures):
                    future.result()
        except requests.RequestException as e:
            print(f"ERROR: File download failed - {e}", file=sys.stderr)
            sys.exit(1)

        # Generate README cleanly using textwrap
        readme_content = textwrap.dedent(f"""\
            The file blz_{timestamp}.txt contains bank code data published by
            Deutsche Bundesbank (German central bank) (https://www.bundesbank.de).

            Valid from {timestamp_start_str} to {timestamp_end_str}.

            Obtained from:
            {BANK_WEBSITE_URL_DE}
            (Bankleitzahlendateien ungepackt, TXT)

            The file sepa_{timestamp}.txt contains a list of reachable payment
            service providers, also published by Deutsche Bundesbank.

            Obtained from:
            {BANK_WEBSITE_SEPA_URL}

            The file ch_data.txt contains bank code data published by SIX
            (https://www.six-group.com), which operates the infrastructure
            for the Swiss and Spanish financial centers.

            Obtained from:
            {BANK_WEBSITE_URL_CH}

            The file nl_data.xlsx contains bank code data published by
            Betaalvereniging Nederland (Dutch Payments Association)
            (https://www.betaalvereniging.nl/)

            Obtained from:
            {BANK_WEBSITE_URL_NL}
            """)

        with open(readme_file, "w") as f:
            f.write(readme_content)

        for filename in os.listdir(datadir):
            os.chmod(os.path.join(datadir, filename), 0o664)

        # Determine compression algorthm to use based upon the suffix
        if args.suffix in [".tar.xz", ".txz"]:
            tar_mode = "w:xz"
        elif args.suffix in [".tar.bz2", ".tbz"]:
            tar_mode = "w:bz2"
        elif args.suffix in [".tar.gz", ".tgz"]:
            tar_mode = "w:gz"
        else:
            print("ERROR: Compression format could not be determined.")
            sys.exit(1)

        if not args.quiet:
            print(f"Creating archive {tar_path}...")

        with tarfile.open(tar_path, tar_mode) as tar:
            tar.add(datadir, arcname=datadir_rel, filter=set_tarinfo)

    sys.exit(0)

if __name__ == "__main__":
    main()
