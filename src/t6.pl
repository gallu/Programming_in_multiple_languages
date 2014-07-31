#!/usr/bin/perl -w

use strict;
use warnings;

sub hoge {
  my $i = shift;
  return $i * 2;
}

my $i = hoge(10);
print "return $i\n";
