# Contributing New Algorithms Solutions
Want to contribute new algorithms to this repository? 
1. Create a directory in the `JobInterviewAlgorithms` directory.
2. Add a `README.md` file describing the algorithm and provide example of inputs and the desired outputs. This readme file should follow [this template](https://github.com/AustinTice/JobInterviewAlgorithms/blob/master/Templates/README-Template.md).
3. Create a directory for the programming language of your solution.
4. Add your solution!

**NOTE:** _Before creating a Pull Request, please take a look at the Pull Request section below._

# Contributing Alternate Solutions
It is possible to submit alternate solutions for an algorithm using the **same** language. Criteria for approval:
1. The alternate solution must use a different logic than the existing solutions (Example: a recursive solution and a solution using a loop). _**NOTE:** Small logic differences like the use of `while` loops instead of `for` loops will not be accepted as suitable differences in logic._
2. Clear explanation must be provided in the Pull Request indicating why the proposed solution follows the previous criterion.
3. A `README.md` must be created (if none exist) within the same directory as the proposed solution indicating the reasoning behind the alternate solution. _**NOTE:** The explanations provided in the `README.md` file shall not _compare_ solutions to one another._

**NOTE:** _Before creating a Pull Request, please take a look at the Pull Request section below for details on naming conventions._

# Pull Requests (PR)
Please assure that the guidelines below are followed when submitting a PR.
### Files and Directory structure
The repository should retain the following file and directory structure:
```
JobInterviewAlgorithms
  -> AlgorithmName
    -> README.md
    -> ProgrammingLanguage
      -> AlgorithmName.ext
```

### File and Directory Naming Convention
CamelCase naming convention shall be used for **all** directories and files. Algorithms _may_ have more than one solution. If this is the case, the CamelCase naming convention shall be used along with a version number. The first solution shall not have a version number.
1. First solution: `AlgorithmName.ext`
2. Second solution: `AlgorithmName2.ext`
3. Any subsequent algorithm solution: `AlgorithmNameX.ext`, where X is the version number.

# Issues
Find an issue in one of the solutions? Open an [Issue](https://github.com/AustinTice/JobInterviewAlgorithms/issues/new)!

To make things easier, templates will be available shortly for bug reports and solution requests!
