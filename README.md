# Libre Scholar

Libre Scholar is a Drupal installation profile that creates an Institutional Repository using Drupal and Islandora modules, pre-configured for common use cases. It is a starting point for easily customizing an IR to suit your institutional needs.

## Installation

A Drush make file is provided to download the required modules and libraries. A working installation of Fedora Commons, GSearch, and Apache Solr is required.

Download or clone the installation profile into the /profiles directory in a Drupal 7 installation. From that directory, run a command like:

drush make --no-core libre_scholar.make ../../

The installation profile may be selected when installing Drupal. To install the installation profile using Drush, run something like:

drush site-install libre_scholar --db-url=mysql://root:islandora@localhost:3306/drupal7

This command will remove any existing data in the defined database.

## Support

For support, bugs, and issues please use the project's GitHub issue tracker at https://github.com/contentmath/libre_scholar/issues

## Documentation

Documentation will be at http://www.contentmath.com/libre-scholar as it's available.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)