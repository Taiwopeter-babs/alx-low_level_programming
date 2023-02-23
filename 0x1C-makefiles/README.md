#	Makefiles
Makefiles are used to organize compilation and recompilation. They are used to decide which part of a large program needs to be recompiled, and also used to run a series of instruction depending on which files have changed after the last compilation/recompilation.
The ```make``` command uses the filesystem timestamps as proxy to determine if the file has changed since its last compilation.

## Syntax
```
targets: prereqisites
	command
	commsnd
```
## Example
```
some_file: foo_file
	echo "some_file will always be printed"
foo_file:
	touch foo_file
clean:
	rm foo_file
```
