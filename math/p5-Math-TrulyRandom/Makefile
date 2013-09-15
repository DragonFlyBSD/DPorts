# Created by: Anders Nordby <anders@FreeBSD.org>
# $FreeBSD: math/p5-Math-TrulyRandom/Makefile 327032 2013-09-12 05:53:03Z az $

PORTNAME=	Math-TrulyRandom
PORTVERSION=	1.0
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anders@FreeBSD.org
COMMENT=	Perl interface to a truly random number generator function

USES=		perl5
USE_PERL5=	configure

MAN3=		Math::TrulyRandom.3

post-install:
.if !defined(NOPORTDOCS)
	@${INSTALL} -d -m 0755 ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/COPYRIGHT ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/truerand.c ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/truerand.h ${DOCSDIR}/
.endif

.include <bsd.port.mk>
