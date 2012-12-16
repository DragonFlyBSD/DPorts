# New ports collection makefile for:	Math::TrulyRandom
# Date created:				17 March 2002
# Whom:					Anders Nordby <anders@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-TrulyRandom/Makefile,v 1.5 2012/11/17 05:59:27 svnexp Exp $
#

PORTNAME=	Math-TrulyRandom
PORTVERSION=	1.0
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anders@FreeBSD.org
COMMENT=	Perl interface to a truly random number generator function

PERL_CONFIGURE=	yes

MAN3=		Math::TrulyRandom.3

post-install:
.if !defined(NOPORTDOCS)
	@${INSTALL} -d -m 0755 ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYRIGHT ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/truerand.c ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/truerand.h ${DOCSDIR}/
.endif

.include <bsd.port.mk>
