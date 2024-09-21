# Arduino Library: Logger

> Logging functions for Arduino and ESP32

## Table of Contents

<!-- TOC -->
* [Arduino Library: Logger](#arduino-library-logger)
    * [Table of Contents](#table-of-contents)
    * [Requirements](#requirements)
    * [Usage](#usage)
        * [Installation via Arduino IDE](#installation-via-arduino-ide)
        * [Installation via Arduino CLI](#installation-via-arduino-cli)
        * [Installation of development versions](#installation-of-development-versions)
    * [Development](#development)
    * [Notes](#notes)
        * [Release Ingressing](#release-ingressing)
    * [Contributors](#contributors)
    * [License](#license)
<!-- TOC -->

## Requirements

* `arduino-lint` `1.2.0` or [newer](https://arduino.github.io/arduino-lint/)
* `cpplint` `1.6.0` or [newer](https://github.com/cpplint/cpplint)
* `clang-format` `18.1.0` or [newer](https://clang.llvm.org/docs/ClangFormat.html)

## Usage

For usage examples, see the [examples](./examples) directory.

### Installation via Arduino IDE

For installation via the Arduino IDE, see [docs.arduino.cc](https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-installing-a-library/).

### Installation via Arduino CLI

To install the latest version using `arduino-cli`, use the following command:

```shell
arduino-cli lib install workloads-filesystem
```

To install a specific version, use the following command:

```shell
arduino-cli lib install workloads-filesystem@1.0.2
```

### Installation of development versions

To install an in-development or unreleased version, installation of _unsafe_ libraries must be enabled.

To enable the installation of unsafe libraries, use the following command:

```shell
arduino-cli config set library.enable_unsafe_install true
```

See [docs.arduino.cc](https://arduino.github.io/arduino-cli/1.0/configuration/#configuration-methods) for more information on the implications.

Once the installation of unsafe libraries is enabled, the `workloads-filesystem` library may be installed by running the following command:

```shell
arduino-cli lib install --git-url "https://github.com/workloads/arduino-logger.git"
```

## Development

This repository provides a [Makefile](./Makefile)-based workflow to aid in development.

Running `make` without commands will print out the following help information:

```text
📚 LOGGER LIBRARY

Target          Description                                     Usage
lint-arduino    lint Arduino code using arduino-lint            `make lint-arduino`
lint-cpp        lint C++ code using cpplint and clang-format    `make lint-cpp`
help            display a list of Make Targets                  `make help`
_listincludes   list all included Makefiles and *.mk files      `make _listincludes`
_selfcheck      lint Makefile                                   `make _selfcheck`
lint-vale       lint prose using vale                           `make lint-vale`
vale-sync       sync Vale dependencies                          `make vale-sync`
```

## Notes

### Release Ingressing

New (GitHub) releases of this library are automatically ingressed by the Arduino Library Manager.

A log of currently "visible" releases can be found at [downloads.arduino.cc](https://downloads.arduino.cc/libraries/logs/github.com/workloads/scservo/).

## Contributors

For a list of current (and past) contributors to this repository, see [GitHub](https://github.com/workloads/arduino-logger/graphs/contributors).

## License

Licensed under the General Public License, Version 3.0 (the "License").

You may download a copy of the License at [gnu.org/licenses/gpl-3.0.txt](https://www.gnu.org/licenses/gpl-3.0.txt).

See the License for the specific language governing permissions and limitations under the License.
