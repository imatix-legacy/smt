# SMT -- Simple Multi-Threading Kernel

The SMT (Simple Multi-Threading kernel) from iMatix is an add-on
for the [Libero](https://github.com/imatix-legacy/libero) programming
tool that lets you write portable high-performance (cooperative)
multithreaded programs based on Libero's finite-state machine (FSM)
design method.

It was developed stand alone throughout the 1990s, and then later
incorporated directly into iMatix products such as the Xitami
webserver.   It became a key part of the iMatix "base" in the early
2000s and was not released separately after that.

The original license for SMT is in [src/license.txt](src/license.txt).
Briefly it allows usage under the GNU General Public License, the
Perl Artistic License, or with a advertising clause.  See
[src/license.txt](src/license.txt) for details.

On [2016-04-29 it was also released under the
MPLv2](https://github.com/imatix-legacy/license) ([license
text](https://imatix-legacy.github.io/license/MPLv2.html)), so `SMT` can
be used under either GPLv2, the Perl Artistic license, a license
with an advertising clause or the MPLv2.

This repository contains the last SMT source, binaries,and documentation
released in a stand alone version, retrieved from:

*  http://legacy.imatix.com/pub/smt

*  http://legacy.imatix.com/html/smt

on 2016-04-27.

See the [documentation](https://imatix-legacy.github.io/smt) for more details.

## `pub`

The `pub` directory contains the released artefacts (binaries, source
archives, etc) which are still retrievable; if older releases artefacts
are found they may be added later.  Due to their small size (well under
1MB each), and the fact that development ceased many years ago (so there
will not be growth in the archive), these are added directly into the
git repository.

## `src`

The `src` directory was created from the unpacked contents of
`pub/src/smtsrc28.tgz`, for ease of reference.  To this the `smtdoc*.txt`
files and `*.def` files were added from an early 2000 build directory,
with approximately the equivalent documentation version.

The build scripts were built with
[otto](https://github.com/imatix-legacy/otto) from
[src/buildsmt.txt](src/buildsmt.txt).  It also needs
[libero](https://github.com/imatix-legacy/libero), and the [iMatix
SFL](https://github.com/imatix-legacy/sfl).  Building the documentation
requires [srcdoc](https://github.com/imatix-legacy/srcdoc) and
[htmlpp](https://github.com/imatix-legacy/htmlpp).

## `website`

The `website` directory contains the *rendered* documentation.  This
is approximately equivalent to the contents of `pub/doc/smtdoc28.tgz`, but
was taken directly from http://legacy.imatix.com/html/smt.

The documentation was built (with `htmlpp`) from a marked up text file.
`src/smtdoc.txt`, `src/smtdoc1.txt` and `src/smtdoc2.txt` contain
approximately equivalent source for the documentation, taken from an
early 2000 build directory. These should rebuild to similiar documentaton
but it may not be exactly identical.
