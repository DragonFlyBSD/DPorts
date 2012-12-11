# New ports collection makefile for:	p5-Slurp
# Date created:				October 28, 2011
# Whom:	      				Philip M. Gollucci <pgollucci@p6m7g8.com>
#
# $FreeBSD: ports/devel/p5-Data-Walk/Makefile,v 1.2 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	Data-Walk
PORTVERSION=	1.00
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GUIDO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Traverse Perl data structures

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_CONFIGURE=	YES

MAN3=	Data::Walk.3

PLIST_FILES=	%%SITE_PERL%%/Data/Walk.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Data/Walk/.packlist
PLIST_DIRS=	%%SITE_PERL%%/Data \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Data/Walk \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Data

.include <bsd.port.mk>
