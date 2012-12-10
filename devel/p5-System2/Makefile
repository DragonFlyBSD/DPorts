# New ports collection makefile for:	devel/p5-System2
# Date created:				12 October 2001
# Whom:					tobez
#
# $FreeBSD: ports/devel/p5-System2/Makefile,v 1.7 2012/11/17 05:56:30 svnexp Exp $
#

PORTNAME=	System2
PORTVERSION=	0.84
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	System2 - like system(), but with STDERR available as well

PERL_CONFIGURE=	yes

MAN3=		System2.3

pre-configure:
	${RM} -f ${WRKSRC}/io_test.pl

.include <bsd.port.mk>
