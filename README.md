# Simple sample repository for using GitHub Actions

In this repo you will see an example workflow on **GitHub Actions** with running some Google Tests (unit-testing) on a simple program via Docker.

## Running tests

Running tests with this workflow is happening within a few steps:

1. Configuring a project
2. Preparing (building) Docker Image
3. Running Docker Container
4. Running Prepare step inside the container
5. Running Build step inside the container
6. Running Test step inside the container
7. Stopping the Docker Container and removing an image
