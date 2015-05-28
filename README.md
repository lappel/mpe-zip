# mpe-zip
http://info-zip.org for MPE/iX

## Status

First build of Info-ZIP **zip** 3.0 and **unzip** 6.0 for MPE/iX are done.

However, both builds are using a workaround for missing _tcgetattr_()
and _tcsetattr_() calls at present (redirecting to DEBUG). This means
that functions using echo on/off are currently not supported. This
impacts functions like encryption (zip, unzip, zipcloak) for example,
which prompt for the passwords with echo temporarily disabled.

The missing routines will likely be added from Steve's Porting Wrappers.

## See also

- http://www.clientsystems.com/portwrappers650.html
