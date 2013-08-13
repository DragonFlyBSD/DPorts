# Created by: chinsan
# $FreeBSD: games/p5-Acme-GuessNumber/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Acme-GuessNumber
PORTVERSION=	0.04
CATEGORIES=	games perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Locale/IMACAT
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatic number guessing game robot

USES=		perl5
USE_PERL5=	configure
MAN3=		Acme::GuessNumber.3

PLIST_FILES=	%%SITE_PERL%%/Acme/GuessNumber.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Acme-GuessNumber/.packlist
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/Acme-GuessNumber \
		%%SITE_PERL%%/Acme

.include <bsd.port.mk>
