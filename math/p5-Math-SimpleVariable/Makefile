# New ports collection makefile for:	Math::SimpleVariable
# Date created:		5 Nov 2001
# Whom:			Sergey Skvortsov <skv@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-SimpleVariable/Makefile,v 1.9 2012/11/17 05:59:26 svnexp Exp $
#

PORTNAME=	Math-SimpleVariable
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple representation of mathematical variables

PERL_CONFIGURE=	yes

MAN3=		Math::SimpleVariable.3

pre-patch:
	@${FIND} ${WRKSRC} -name "*.pm" | ${XARGS} ${PERL} -pi -e \
		'$$package=$$1 if /^package\s+([^\s;]*);/; s!^require 5.005_62;!!; s!^use warnings;!!; s!^our\s+(\$$)(VERSION)\s+=!$$1$${package}::$$2=!;'

.include <bsd.port.mk>
