#!/usr/bin/perl

use strict;
use warnings;
use 5.0.10;

print "Digite sua frase: ";
my $frase = <STDIN>;
chomp $frase;
while($frase ne "exit"){
     if ($frase eq ""){
        print "O valor não pode ser em branco! \n";
        print "Digite sua frase: ";
        $frase = <STDIN>;
        chomp($frase);
      }elsif ($frase ne "exit")  {
              print "A frase invertida é: \n";
              print reverse($frase) . "\n";
              print "Entre com sua frase: ";
              $frase = <STDIN>;
              chomp($frase);
       }
}
